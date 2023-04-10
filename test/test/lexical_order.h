#pragma once
#ifndef __LEXICALORDER_H__
#define __LEXICALORDER_H__

#include <vector>
#include <iostream>
using namespace std;



/***************************************************************
@author: zhanghan
@date: 2023/4/4
@description:
386. 字典序排数
给你一个整数 n ，按字典序返回范围[1, n] 内所有整数。
https://leetcode.cn/problems/lexicographical-numbers/
输入：n = 13
输出：[1, 10, 11, 12, 13, 2, 3, 4, 5, 6, 7, 8, 9]
@see:
@param: n 可以为0
@return: 返回字典序动态数组
@fix:
@update:
***************************************************************/
vector<int> lexicalOrder(int n);

#endif // !__LEXICALORDER_H__
