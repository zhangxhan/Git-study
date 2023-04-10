#include "min_sub_array_len.h"

int minSubArrayLen(int target, vector<int>& nums)
{
    size_t size = nums.size();
    
    //sum:��������ĺ�  result�����ڱ�����С���� length�����㵱ǰ����
    int sum = 0,result = INT_MAX, length = 0;

    //���ϵ���ʼλ��
    int left = 0;
    for (size_t i = 0; i < size; i++)
    {
        sum += nums[i];

        //��������ʱ�����¸�������
        while ( sum >= target)
        {
            length = i - left + 1;
            result = min(result, length);
            sum -= nums[left++];
        }
    }
    return result == INT_MAX ? 0 : result;
}
