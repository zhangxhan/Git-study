#include "compress.h"


int compress(vector<char>& chars)
{
	int n = chars.size();
	if (n <= 1)
	{
		return n;
	}

	// left代表当前字符出现的第一个位置，len表示修改后当前长度
	int left = 0, len = 0;
	for (int i = 0; i < n; i++)
	{
		// 遇到临界点（最后一个位置，或者两字符分界处）
		if (i == n - 1 || chars[i] != chars[i + 1])
		{
			//存储字符
			chars[len++] = chars[i];

			//存储数字，把数字以字符的形式加到数组中
			int nums = i - left + 1;
			if (nums > 1)
			{
				for (auto num : to_string(nums))
				{
					chars[len++] = num;
				}
			}

			//更新起始位置
			left = i + 1;
		}
	}
	return len;
}

