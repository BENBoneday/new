#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
int fun(char* str1,char* str2)
{
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	int i = 0;
	int sum1 = 0, sum2 = 0;
	for (i = 0; i < len1; i++)
	{
		if (str1[len1 - i - 1] == '1')
		{
			sum1 += (int)pow(2.0,i);
		}
	}
	for (i = 0; i < len2; i++)
	{
		if (str2[len2 - i - 1] == '1')
		{
			sum2 += (int)pow(2.0, i);
		}
	}
	return sum1 + sum2;
}
int main()
{
	char str1[20] = "0101";
	char str2[20] = "0010";
	int ret = fun(str1,str2);
	printf("%d", ret);
	return 0;
}