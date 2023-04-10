#include "compress.h"


int compress(vector<char>& chars)
{
	int n = chars.size();
	if (n <= 1)
	{
		return n;
	}

	// left����ǰ�ַ����ֵĵ�һ��λ�ã�len��ʾ�޸ĺ�ǰ����
	int left = 0, len = 0;
	for (int i = 0; i < n; i++)
	{
		// �����ٽ�㣨���һ��λ�ã��������ַ��ֽ紦��
		if (i == n - 1 || chars[i] != chars[i + 1])
		{
			//�洢�ַ�
			chars[len++] = chars[i];

			//�洢���֣����������ַ�����ʽ�ӵ�������
			int nums = i - left + 1;
			if (nums > 1)
			{
				for (auto num : to_string(nums))
				{
					chars[len++] = num;
				}
			}

			//������ʼλ��
			left = i + 1;
		}
	}
	return len;
}

