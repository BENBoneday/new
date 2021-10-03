#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char str[30] = {0};
	scanf("%s", str);
	int len = strlen(str);
	str[len] = '#';
	FILE* p = fopen("file.txt", "w");
	if (p == NULL)
	{
		return 0;
	}
	fwrite(str,1,len+1,p);
	//fread(str,1,len+1,p);
	//fgetc(p);
	puts(str);
	fprintf(p,"%s", str);
	fclose(p);
	p = NULL;
	return 0;
}