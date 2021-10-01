#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
char* fun(char* str,int m)
{
	char temp;
	char* p = str;
	int len = strlen(p);
	int i, j;
	for (i = 0; i < m; i++)
	{
		temp = *str;
		for (j = 0; j < len-1; j++)
		{
			*str = *(str + 1);
			str++;
		}
		*str = temp;
		str = p;
	}
	return p;
}
int main()
{
	char s[100];
	scanf("%s", s);
	int m;
	scanf("%d", &m);
	printf("%s", fun(s, m));

	return 0;
}