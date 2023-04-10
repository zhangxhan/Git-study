#pragma once
#ifndef __CONSECUTIVENUMBERSSUM_H__
#define __CONSECUTIVENUMBERSSUM_H__

/***************************************************************
@author: zhanghan
@date: 2023/4/6
@description:
829. 连续整数求和
给定一个正整数 n，返回 连续正整数满足所有数字之和为 n 的组数 。
https://leetcode.cn/problems/consecutive-numbers-sum/
@see:
@param: n 1 <= n <= 109​​​​​​​
@return: 返回连续正整数满足所有数字之和为 n的组合数量
@fix:
@update:
***************************************************************/
#include <iostream> 
using namespace std;

int consecutiveNumbersSum(int n);//双指针
int consecutiveNumbersSum2(int n);//规律法
int consecutiveNumbersSum3(int n);//公式法

#endif
