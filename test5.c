#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[8] = {1,5,3,1,9,5,9};
	int i = 0;
	int j = 0;
	for (i = 0; i < 8; i++)
	{
		for (j = 7; j > i; j--)
		{
			if ((arr[i] ^ arr[j]) != 0)
			{
				//ур╣╫ак
			}
		}
	}
	return 0;
}