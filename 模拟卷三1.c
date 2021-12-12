#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
char* fun(char* s)
{
	int len = strlen(s);
	char* cur = s;
	char* next = s + 1;
	char* move = next+1;
	while (*next != '\0')
	{
		if (*cur == *next)
		{
			move = next + 1;
			while (*move != '\0')
			{
				*(move - 2) = *move;
				move++;
			}
			s[len - 1] = '\0';
			s[len - 2] = '\0';
			len -= 2;
			cur = s;
			next = s + 1;
			continue;
		}
		cur++;
		next++;
	}
	return s;
}
int main()
{
	char str[20] = "abknbasada";
	char* ret = fun(str);
	printf("%s", ret);
	return 0;

}