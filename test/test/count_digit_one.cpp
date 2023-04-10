#include "count_digit_one.h"



//递归超时
int countDigitOne(int n)
{
	if (n == 0)
	{
		return 0;
	}
	else if (n < 10)
	{
		return 1;
	}

	int sum = 0, x = n;
	while (x != 0)
	{
		if (x % 10 == 1)
		{
			sum++;
		}
		x /= 10;
	}
	return sum + countDigitOne(n - 1);
}



//动态规划(内存不足)
int countDigitOne2(int n)
{
	int ans = 0;
	int* dp = new int[n + 1];
	dp[1] = 1;
	for (int i = 1; i <= n; i++)
	{
		dp[i] = dp[i % 10] + dp[i / 10];
		ans += dp[i];
	}
	return ans;
}


int countDigitOne3(int n) 
{
	int res = 0;
	long long num = 1;
	while (n >= num)
	{
		num *= 10;
		res += (n / num) * (num / 10) + max(0LL, min(num / 5 - 1, n % num) - (num / 10 - 1));
	}
	return res;
}