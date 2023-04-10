#pragma once

/*
* 文件名称：multiply.h
* 摘 要：实现字符串相乘
*
* 当前版本：1.1
* 作 者：输入作者（或修改者）名字
* 完成日期：2023 年 4 月 6 日
*
*/

#ifndef  __MULTIPLY_H__
#define	 __MULTIPLY_H__
#include <iostream>
#include <vector>
#include <string>
using namespace std;


/***************************************************************
@author: zhanghan
@date: 2023/4/6
@description:
43. 字符串相乘
给定两个以字符串形式表示的非负整数 num1 和 num2，返回 num1 和 num2 的乘积，它们的乘积也表示为字符串形式。
注意：不能使用任何内置的 BigInteger 库或直接将输入转换为整数。
https://leetcode.cn/problems/multiply-strings/
@see:
@param: num1 可以为空,直接返回空集合
@param: num2 可以为空,直接返回空集合
@return: 以字符串的形式返回結果
@fix:
@update:
***************************************************************/
string multiply(string num1, string num2);


#endif // ! __MULTIPLY_H__
