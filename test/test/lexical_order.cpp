#include "lexical_order.h"

vector<int> lexicalOrder(int n)
{
	//保存数字集合
	vector<int> res(n);
	int num = 1;
	for (size_t i = 0; i < n; i++)
	{
		res[i] = num;

		if (num * 10 <= n)
		{
			num *= 10;
		}
		else
		{
			//越界情况
			if (num >= n)
			{
				num /= 10;
			}

			num += 1;

			while (num % 10 == 0)
			{
				num /= 10;
			}
		}
	}

	for (size_t i = 0; i < res.size(); i++)
	{
		cout << res[i] << " ";
	}
	cout << endl;
	return res;
}
