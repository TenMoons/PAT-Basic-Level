#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<iostream>
struct MS      //声明结构体类型
{
	char name[11];
	char num[11];
	int grade;
};
int main()
{

	int n = 0;
	int i = 0;
	int min = 0, max = 0;
	int mindex = 0;
	int maxdex = 0;
	struct MS *stu;
	scanf("%d", &n);
	stu = (struct MS *)malloc(n * sizeof(struct MS));
	for (i = 0; i < n; i++)
	{
		scanf("%s %s %d", stu[i].name, stu[i].num, &stu[i].grade);
	}
	min = stu[0].grade;
	max = stu[0].grade;
	for (i = 0; i < n; i++)
	{
		if (stu[i].grade < min)
		{
			min = stu[i].grade;
			mindex = i;
		}
		if (stu[i].grade > max)
		{
			max = stu[i].grade;
			maxdex = i;
		}
	}
	printf("%s %s\n", stu[maxdex].name, stu[maxdex].num);
	printf("%s %s\n", stu[mindex].name, stu[mindex].num);
	system("pause");
	return 0;
}
