#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<stdio.h>
int* twoSum(int* nums, int numsSize, int target)
{
    int* ret = (int*)malloc(sizeof(int) * 2);
    int i = 0;
    int temp;
    int j = 0;
    for (i = 0; i < numsSize; i++)
    {
        if (nums[i] < target)
        {
            temp = target - nums[i];
        }
        else continue;
        for (j = i + 1; j < numsSize; j++)
        {
            if (nums[j] < target)
            {
                if (nums[j] == temp)
                {
                    ret[0] = i;
                    ret[1] = j;
                    break;
                }
            }
            else continue;
        }
    }
    return ret;
}
int main()
{
    int nums[5] = { 3,2,5,8,6 };
    int target = 14;
    int* arr=twoSum(nums,5,8);
    printf("%d %d", arr[0], arr[1]);
    free(arr);
    arr = NULL;
    return 0;
}