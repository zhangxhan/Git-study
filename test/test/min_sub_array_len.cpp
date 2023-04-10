#include "min_sub_array_len.h"

int minSubArrayLen(int target, vector<int>& nums)
{
    size_t size = nums.size();
    
    //sum:计算数组的和  result：用于保持最小长度 length：计算当前长度
    int sum = 0,result = INT_MAX, length = 0;

    //集合的起始位置
    int left = 0;
    for (size_t i = 0; i < size; i++)
    {
        sum += nums[i];

        //满足条件时，更新各项数据
        while ( sum >= target)
        {
            length = i - left + 1;
            result = min(result, length);
            sum -= nums[left++];
        }
    }
    return result == INT_MAX ? 0 : result;
}
