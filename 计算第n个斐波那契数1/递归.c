#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int nashu(n)
{
	if (n <=2)
		return 1; 
	else
		return nashu(n - 2) + nashu(n - 1);
}

int main()
{
	int ret = 0;
	int n = 0;
	scanf("%d", &n);
	ret = nashu(n);
	printf("%d", ret);
	return 0;
}