#include "multiply.h"

string multiply(string num1, string num2) {
	int n = num1.size(), m = num2.size();
	if (n <= 0 || m <= 0)
	{
		return "";
	}

	if (num1 == "0" || num2 == "0")
	{
		return "0";
	}

	vector<int> vec(n + m);
	for (int i = n - 1; i >= 0; i--)
	{
		for (int j = m - 1; j >= 0; j--)
		{
			int temp = (num1[i] - '0') * (num2[j] - '0') + vec[i + j + 1];
			vec[i + j] += temp / 10;
			vec[i + j + 1] = temp % 10;
		}
	}
	while (vec.front() == 0)//去掉前缀0
	{
		vec.erase(vec.begin());
	}

	string s;
	for (int k = 0; k < vec.size(); k++)//将数字数组转化为字符串
	{
		s.push_back(vec[k] + '0');
	}
	return s;
}
