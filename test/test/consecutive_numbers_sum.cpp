#include "consecutive_numbers_sum.h"


//15 = 8 + 7 = 4 + 5 + 6 = 1 + 2 + 3 + 4 + 5
int consecutiveNumbersSum(int n)
{
	int num = 1;
	int i = n / 2, j = i + 1;
	//ʹ��˫ָ�룬�������������͹�ʽ
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
//1��n = 9
//2��n = 8 = 4+4 = (4 + 5-1);�ۼƼ�һ
//3��n = 6 = 2+2+2 = (2 + 3-1 + 4-2);�ۼƼ���
//4��n = 3 �����ĵȷ�ѭ������

//15=7+8=4+5+6=1+2+3+4+5
//1��n = 15 һ�ȷ�
//2��n = 14 = 7+7 = (7 + 8-1) ���ȷ�
//3��n = 12 = 4+4+4 = (4 + 5-1 + 6-2) ���ȷ�
//4��n = 9 �����ĵȷ�
//5��n = 5 = 1+1+1+1+1 = (1 + 2-1 + 3-2 + 4-3 + 5-4)��ȷ�
//6��n = 0 ����ѭ��

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
������͹�ʽ�ó����½��ۣ�
k:����,n:��������
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
