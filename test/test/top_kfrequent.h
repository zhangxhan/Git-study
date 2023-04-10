#pragma once
#ifndef  __TOPKFREQUENT_H__
#define  __TOPKFREQUENT_H__

#include<iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <queue>
using namespace std;

/***************************************************************
@author: zhanghan
@date: 2023/4/6
@description:
347. 前 K 个高频元素
给你一个整数数组 nums 和一个整数 k ，请你返回其中出现频率前 k 高的元素。你可以按 任意顺序 返回答案。
https://leetcode.cn/problems/top-k-frequent-elements/
@see:
@param: nums 可以为空,直接返回空集合 
@param: k  数组中前 k 个高频元素的集合是唯一的
@return: 返回统计后的集合
@fix:
@update:
***************************************************************/

vector<int> topKFrequent(vector<int>& nums, int k);
vector<int> topKFrequent2(vector<int>& nums, int k);

#endif // ! __TOPKFREQUENT_H__
