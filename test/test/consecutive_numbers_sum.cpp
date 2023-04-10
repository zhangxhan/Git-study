#include "consecutive_numbers_sum.h"


//15 = 8 + 7 = 4 + 5 + 6 = 1 + 2 + 3 + 4 + 5
int consecutiveNumbersSum(int n)
{
	int num = 1;
	int i = n / 2, j = i + 1;
	//使用双指针，外加连续数列求和公式
	while (i > 0 && i < j)
	{
		double temp = 0.5 * (i + j) * (j - i + 1);
		if (temp == n)
		{
			num++;
			//cout << i << "~" << j << endl;
		}
		else if (temp > n)
		{
			j--;
		}
		i--;
	}
	cout << num << endl;

	return num;
}


//9=4+5=2+3+4
//1、n = 9
//2、n = 8 = 4+4 = (4 + 5-1);累计减一
//3、n = 6 = 2+2+2 = (2 + 3-1 + 4-2);累计减三
//4、n = 3 不能四等分循环结束

//15=7+8=4+5+6=1+2+3+4+5
//1、n = 15 一等分
//2、n = 14 = 7+7 = (7 + 8-1) 二等分
//3、n = 12 = 4+4+4 = (4 + 5-1 + 6-2) 三等分
//4、n = 9 不能四等分
//5、n = 5 = 1+1+1+1+1 = (1 + 2-1 + 3-2 + 4-3 + 5-4)五等分
//6、n = 0 结束循环

int consecutiveNumbersSum2(int n)
{
	int res = 0;
	for (int i = 1; n > 0; n -= i++)
	{
		if (n % i == 0)
		{
			res++;
		}
	}
	cout << res << endl;
	return res;
}

/*
根据求和公式得出以下结论：
k:项数,n:给定整数
k*k < 2*n
2 * n / k + 1 - k
(n - (k - 1) * k / 2) % k == 0
*/

int consecutiveNumbersSum3(int n)
{
	int ans = 0;
	for (int k = 1; k * k <= 2 * n; k++)
	{
		if ((n - (k - 1) * k / 2) % k == 0)
		{
			ans++;
		}
	}
	cout << ans << endl;
	return ans;
}
