#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int if_prime(int i)
{
	int j = 0;
	for (j = 2; j < sqrt(i); j++)
	{
		if (i % j == 0)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
}
int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		//返回1为素数
		//返回0不是素数
		if (if_prime(i) == 1)
		{
			printf("%d ", i);
		}
	}
	return 0;
}