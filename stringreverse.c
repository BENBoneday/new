#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//char* fun(char* str, int num)
//{
//	char* begin = str;
//	while (num > 0)
//	{
//		str = begin;
//		char tmp = *str;
//		char* str1 = str + 1;
//		while (*str1 != '\0')
//		{
//			*str = *str1;
//			str++;
//			str1++;
//		}
//		*str = tmp;
//		num--;
//	}
//	return begin;
//}
//int main()
//{
//	char s[100] = {0};
//	int num=0;
//	scanf("%s",s);
//	printf("\n");
//	scanf("%d", &num);
//	char* str = fun(s,num);
//	printf("%s", str);
//	return 0;
//}
int main()
{
	char str[32] = { 0 };
	//char* str1 = str;
	scanf("%s", str);
	char* s = (char*)malloc(sizeof(char) * 32);
	memset(s,0,32);
	int i = 0;
	while (str[i] != '#'&&i<32)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '#';
	printf("%s",s);
	
	FILE* fp = fopen("file.txt", "w");
	if (fp == NULL)
	{
		printf("´ò¿ªÊ§°Ü");
	}
	fwrite(s, 1, 32, fp);
	free(s);
	s = NULL;
	return 0;
}