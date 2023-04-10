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
347. ǰ K ����ƵԪ��
����һ���������� nums ��һ������ k �����㷵�����г���Ƶ��ǰ k �ߵ�Ԫ�ء�����԰� ����˳�� ���ش𰸡�
https://leetcode.cn/problems/top-k-frequent-elements/
@see:
@param: nums ����Ϊ��,ֱ�ӷ��ؿռ��� 
@param: k  ������ǰ k ����ƵԪ�صļ�����Ψһ��
@return: ����ͳ�ƺ�ļ���
@fix:
@update:
***************************************************************/

vector<int> topKFrequent(vector<int>& nums, int k);
vector<int> topKFrequent2(vector<int>& nums, int k);

#endif // ! __TOPKFREQUENT_H__
