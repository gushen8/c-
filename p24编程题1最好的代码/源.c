#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int jisuan(int n)
{
	int count = 0;
	while (n)
	{
		n = (n & (n - 1));
		count++;
	}
	return count;
}
int main()
{
	int a = 0;
	int count = 0;
	scanf("%d", &a);
	count = jisuan(a);
	printf("%d", count);
	return 0;
}