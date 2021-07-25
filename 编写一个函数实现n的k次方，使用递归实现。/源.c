#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int fanc(int n, int k)
{
	if (k <= 1)
	{
		return n;
	}
	else return n * fanc(n, k - 1);
	
}
int main()
{
	int n, k;
	printf("请输入n的k次方:");
	scanf("%d%d", &n, &k);
	int ret=fanc(n, k);
	printf("%d的%d次方是：%d",n,k,ret);
	return 0;
}