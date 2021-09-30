#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define workers 2
typedef struct employee
{
	int workNum;
	char name[20];
}emp;
void Init(emp* worker)
{
	int i = 0;
	for (i = 0; i < workers; i++)
	{
		printf("请输入员工号\n");
		scanf("%d", &worker[i].workNum);
		printf("请输入员工名字\n");
		scanf("%s", worker[i].name);
		printf("添加成功\n");
	}
	
}
void sort(emp* worker)
{
	int i, j;
	for (i = 0; i < workers; i++)
	{
		for (j = workers - 1; j > 0; j--)
		{
			if (worker[i].workNum > worker[j].workNum)
			{
				int temp;
				temp = worker[i].workNum;
				worker[i].workNum = worker[j].workNum;
				worker[j].workNum = temp;
			}
		}

	}
}
int main()
{
	emp worker[workers];
	Init(worker);
	sort(worker);
	int i;
	for (i = 0; i < workers; i++)
	{
		printf("员工号：%d\n员工名字：\n",
			worker[i].workNum,worker[i].name);
		
	}
	return 0;
}