#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print(int m)
{
	int i = 0;
	printf("打印的是奇数： ");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (m >> i) & 1);
	}
	printf("\n");
	printf("打印的是偶数： ");
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (m >> i) & 1);
	}
}
int main()
{
	int m = 0;
	scanf("%d", &m);
	print(m);
	return 0;
}