#include "top_kfrequent.h"

vector<int> topKFrequent(vector<int>& nums, int k)
{
	size_t size = nums.size();
	//如果k < size 直接返回空
	if (size < k)
	{
		return vector<int>();
	}

	//统计每个数字的个数
	unordered_map<int, int> myMap;
	for (size_t i = 0; i < size; i++)
	{
		myMap[nums[i]]++;
	}

	//用vector保持map的数据，方便后续排序
	vector<pair<int, int>> res(myMap.begin(), myMap.end());

	//vector<pair<int, int>> res;
	//for (auto it : myMap)
	//{
	//	res.push_back(make_pair(it.first, it.second));
	//}

	//按照个数从大到小排序
	sort(res.begin(), res.end(), [&](pair<int, int> a, pair<int, int> b) {
		return a.second > b.second;
		});

	//保存k个出现次数最多的数字
	vector<int> result;
	for (size_t i = 0; i < k; i++)
	{
		cout << res[i].first << " ";
		result.push_back(res[i].first);
	}
	cout << endl;
	return result;
}

 template<typename T>
 void print_queue(T q)
{
	while (!q.empty())
	{
		cout << q.top().first << " " << q.top().second << endl;
		q.pop();
	}
	cout << "---------------" << endl;
}

vector<int> topKFrequent2(vector<int>& nums, int k)
{
	size_t size = nums.size();
	//如果k < size 直接返回空
	if (size < k)
	{
		return vector<int>();
	}

	//统计每个数字的个数
	unordered_map<int, int> myMap;
	for (size_t i = 0; i < size; i++)
	{
		myMap[nums[i]]++;
	}

	//用priority_queue保持map的数据,使其自动排序
	auto cmp = [](pair<int, int> a, pair<int, int> b) {return a.second > b.second; };
	priority_queue < pair<int, int>, vector<pair<int, int>>, decltype(cmp) > que(cmp);
	for (auto it : myMap)
	{
		que.push(it);
		print_queue(que);
		if (que.size() > k)
		{
			que.pop();
		}
	}

	//保存k个出现次数最多的数字
	vector<int> result;
	while (!que.empty())
	{
		//cout << que.top().first << " ";
		result.push_back(que.top().first);
		que.pop();
	}
	cout << endl;
	return result;
}