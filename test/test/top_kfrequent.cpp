#include "top_kfrequent.h"

vector<int> topKFrequent(vector<int>& nums, int k)
{
	size_t size = nums.size();
	//���k < size ֱ�ӷ��ؿ�
	if (size < k)
	{
		return vector<int>();
	}

	//ͳ��ÿ�����ֵĸ���
	unordered_map<int, int> myMap;
	for (size_t i = 0; i < size; i++)
	{
		myMap[nums[i]]++;
	}

	//��vector����map�����ݣ������������
	vector<pair<int, int>> res(myMap.begin(), myMap.end());

	//vector<pair<int, int>> res;
	//for (auto it : myMap)
	//{
	//	res.push_back(make_pair(it.first, it.second));
	//}

	//���ո����Ӵ�С����
	sort(res.begin(), res.end(), [&](pair<int, int> a, pair<int, int> b) {
		return a.second > b.second;
		});

	//����k�����ִ�����������
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
	//���k < size ֱ�ӷ��ؿ�
	if (size < k)
	{
		return vector<int>();
	}

	//ͳ��ÿ�����ֵĸ���
	unordered_map<int, int> myMap;
	for (size_t i = 0; i < size; i++)
	{
		myMap[nums[i]]++;
	}

	//��priority_queue����map������,ʹ���Զ�����
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

	//����k�����ִ�����������
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