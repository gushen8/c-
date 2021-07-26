#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void separate(int a)
{
	if (a > 9)
	{
		separate(a / 10);
	}
	printf("%d ", a % 10);
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	separate(a);
	return 0;
}