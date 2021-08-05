#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int if_leap_year(int i)
{
	return (i % 4 == 0 && i % 100 != 0) || (i % 400 == 0) ? 1 : 0;
}
int main()
{
	int i = 0;
	scanf("%d", &i);
	if (if_leap_year(i) == 1)
	{
		printf("%d是闰年\n", i);
	}
	else
	{
		printf("%d不是闰年\n", i);
	}
	return 0;
}