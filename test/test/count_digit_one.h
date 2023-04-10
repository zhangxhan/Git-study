#ifndef __COUNTDIGITONE_H__
#define __COUNTDIGITONE_H__

#include <algorithm>
using namespace std;
/***************************************************************
@author: zhanghan
@date: 2023/4/4
@description:
233. 数字 1 的个数
给定一个整数 n，计算所有小于等于 n 的非负整数中数字 1 出现的个数。
@see:
@param: n 可以为0 
@return: 数字1的个数
@fix:
@update:
***************************************************************/
int countDigitOne(int n);//递归
int countDigitOne2(int n);//动态规划
int countDigitOne3(int n);
#endif