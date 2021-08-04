#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//暴力求解
//int main()
//{
//	int a, b = 0;
//	scanf("%d%d", &a, &b);
//	int m = (a > b ? b : a);
//	while (1)
//	{
//		if (a % m == 0 && b % m == 0)
//		{
//			printf("最大公约数是：%d\n", m);
//			break;
//		}
//		m--;
//	}
//	return 0;
//}
//辗转相除法
int main()
{
	int a, b, r = 0;
	scanf("%d%d", &a, &b);
	while (a % b)
	{
		r = a % b;
		a = b;
		b = r;
	}
	printf("最大公约数：%d\n", b);
	return 0;
}
