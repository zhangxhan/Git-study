#pragma once

#ifndef __COMPRESS_H__
#define __COMPRESS_H__

#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

/***************************************************************
@author: zhanghan
@date: 2023/4/4
@description:
443. 压缩字符串
给你一个字符数组 chars ，请使用下述算法压缩：
从一个空字符串 s 开始。对于 chars 中的每组 连续重复字符 ：
如果这一组长度为 1 ，则将字符追加到 s 中。否则，需要向 s 追加字符，后跟这一组的长度。
压缩后得到的字符串 s 不应该直接返回 ，需要转储到字符数组 chars 中。需要注意的是，如果组长度为 10 或 10 以上，则在 chars 数组中会被拆分为多个字符。
请在 修改完输入数组后 ，返回该数组的新长度。
https://leetcode.cn/problems/string-compression/

@see:
@param: chars  字符个数为1 ，则不会压缩
@return: 返回该数组的新长度
@fix:
@update:
***************************************************************/
int compress(vector<char>& chars);



#endif // !__COMPRESS_H__




