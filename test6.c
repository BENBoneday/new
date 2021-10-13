#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int missingnum(int* nums, int numsize)
{
	size_t i = 0;
	int x = 0;
	for (i = 0; i < numsize; ++i)
	{
		x ^= nums[i];
	}
	for (i = 0; i <= numsize; ++i)
	{
		x ^= i;
	}
	return x;
}
int main()
{
	int* nums[9] = { 9,3,5,6,4,0,1,2,7 };
	int ret = missingnum(nums, 9);
	printf("%d", ret);
	return 0;
}
