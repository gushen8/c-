#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//int main()
//{
//	int n = 5;
//	int temp = 1;
//	for (n=5; n > 0; n--)
//	{
//		temp *= n;
//	}
//	printf("%d", temp);
//
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	int temp = 1;
//	for (i; i <= 5; i++)
//	{
//		temp *= i;
//	}
//	printf("%d", temp);
//	return 0;
//}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int ret = 1;
	for (i = 1; i <= n; i++)
	{
		ret *= i;
	}
	printf("%d\n", ret);
	return 0;
}