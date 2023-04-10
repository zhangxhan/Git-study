#pragma once
#ifndef __MINSUBARRARYLEN_H__
#define __MINSUBARRARYLEN_H__


#include <vector>
using namespace std;

/***************************************************************
@author: zhanghan
@date: 2023/4/6
@description:
209. 长度最小的子数组
给定一个含有 n 个正整数的数组和一个正整数 target 。
找出该数组中满足其和 ≥ target 的长度最小的 连续子数组 [numsl, numsl+1, ..., numsr-1, numsr] ，并返回其长度。如果不存在符合条件的子数组，返回 0 。
https://leetcode.cn/problems/minimum-size-subarray-sum/
@see:
@param: target	指定值 1 <= target <= 109
@param: nums 可以为空,直接返回0
@return: 返回满足条件的最小集合的个数
@fix:
@update:
***************************************************************/

int minSubArrayLen(int target, vector<int>& nums);


#endif // !minSubArrayLen
