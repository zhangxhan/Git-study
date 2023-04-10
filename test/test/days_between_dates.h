#ifndef  __DAYSBETWEENDATES_H__
#define  __DAYSBETWEENDATES_H__

#include <string>
#include <iostream>
using namespace std;


/***************************************************************
1360. 日期之间隔几天
请你编写一个程序来计算两个日期之间隔了多少天。
日期以字符串形式给出，格式为 YYYY-MM-DD。
给定的日期是 1971 年到 2100 年之间的有效日期。
https://leetcode.cn/problems/number-of-days-between-two-dates/
***************************************************************/

/***************************************************************
@author: zhanghan
@date: 2023/4/4
@description：判断是否为闰年
@see:
@param:year取值范围为1971~2100。
@return: 如果是闰年返回true,否则放回false
@fix:
@update:
***************************************************************/
bool isLeapYear(int year);


/***************************************************************
@author: zhanghan
@date: 2023/4/4
@description：将日期转换成天数(从1970起)
@see:
@param:date 1971 年到 2100 年之间的有效日期。
@return: 如果是闰年返回true,否则放回false
@fix:
@update:
***************************************************************/
long dateToDays(string date);


/***************************************************************
@author: zhanghan
@date: 2023/4/4
@description：计算两个日期之间隔了多少天
@see:
@param:date1 1971 年到 2100 年之间的有效日期。
@param:date2 1971 年到 2100 年之间的有效日期。
@return: 两个日期相差的天数
@fix:
@update:
***************************************************************/
int daysBetweenDates(string date1, string date2);

#endif // ! __DAYSBETWEENDATES_H__
