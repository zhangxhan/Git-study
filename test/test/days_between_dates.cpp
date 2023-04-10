#include "days_between_dates.h"


bool isLeapYear(int year)
{
	return ((year % 400 == 0) || (year % 100 != 0 && year % 4 == 0));
}

long dateToDays(string date)
{
	int year, month, day;

	//���ַ����л�ȡ����
	int ret = sscanf_s(date.c_str(), "%d-%d-%d", &year, &month, &day);

	//�ж��Ƿ�ȫ����ȡ�ɹ�
	if (ret != 3)
	{
		return -1;
	}

	//ÿ���µ�������2�¸����Ƿ�Ϊ�����ټ���
	int days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	//������
	long ans = 0;

	//��������
	ans += day - 1;
	while (month != 0)
	{
		ans += days[--month];
		if( month == 2 && isLeapYear(year) )
			ans += 1;
	}
	ans += 365 * (year - 1971);
	ans += (year - 1) / 4 - 1971 / 4;
	ans -= (year - 1) / 100 - 1971 / 100;
	ans += (year - 1) / 400 - 1971 / 400;

	return ans;
}

int daysBetweenDates(string date1, string date2)
{
	return abs(dateToDays(date1) - dateToDays(date2));
}


