#ifndef  __DAYSBETWEENDATES_H__
#define  __DAYSBETWEENDATES_H__

#include <string>
#include <iostream>
using namespace std;


/***************************************************************
1360. ����֮�������
�����дһ��������������������֮����˶����졣
�������ַ�����ʽ��������ʽΪ YYYY-MM-DD��
������������ 1971 �굽 2100 ��֮�����Ч���ڡ�
https://leetcode.cn/problems/number-of-days-between-two-dates/
***************************************************************/

/***************************************************************
@author: zhanghan
@date: 2023/4/4
@description���ж��Ƿ�Ϊ����
@see:
@param:yearȡֵ��ΧΪ1971~2100��
@return: ��������귵��true,����Ż�false
@fix:
@update:
***************************************************************/
bool isLeapYear(int year);


/***************************************************************
@author: zhanghan
@date: 2023/4/4
@description��������ת��������(��1970��)
@see:
@param:date 1971 �굽 2100 ��֮�����Ч���ڡ�
@return: ��������귵��true,����Ż�false
@fix:
@update:
***************************************************************/
long dateToDays(string date);


/***************************************************************
@author: zhanghan
@date: 2023/4/4
@description��������������֮����˶�����
@see:
@param:date1 1971 �굽 2100 ��֮�����Ч���ڡ�
@param:date2 1971 �굽 2100 ��֮�����Ч���ڡ�
@return: ����������������
@fix:
@update:
***************************************************************/
int daysBetweenDates(string date1, string date2);

#endif // ! __DAYSBETWEENDATES_H__
