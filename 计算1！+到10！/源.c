#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 1;
	int ret = 1;
	int sum = 0;
	for (i = 1; i <= 10; i++)
	{
		for (int n = 1; n <= i; n++)
		{
			ret *= n;
		}
		sum += ret;
		ret = 1;
	}
	printf("%d", sum);
	return 0;
}

//ÓÅ»¯´úÂë
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//
//}