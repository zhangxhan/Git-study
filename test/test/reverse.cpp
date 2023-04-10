#include "reverse.h"

int reverse(int x)
{
    long z = 0;//为了防止反转后的数字越界

    //反转数字
    while (x != 0)
    {
        z *= 10;
        z += x % 10;
        x /= 10;
    }

    //判断反转后的数字是否越界，没越界直接返回，越界返回0
    if (z == int(z))
    {
        return z;
    }
    else
    {
        return 0;
    }
}
