#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 1;
	int sum = 0;
	for (i = 1; i <= 100; i++)
	{
		if ((i % 10 == 9) || (i / 10 == 9))
		{
			sum++;
		}
	}
	printf("1-100中9的数量是：%d", sum);
	return 0;
}