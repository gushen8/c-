#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int i, j;
	scanf("%d%d", &i, &j);
	if (i > j)
	{
		int k = 1;
		int x = 0;
		while (k<=j)
		{
			if ((0 == i % k) && (0 == j % k))
				x = k;
			k++;
		}
		printf("%d", x);
	}
	else
	{
		int k = 1;
		int x = 0;
		while (k <= i)
		{
			if ((0 == i % k) && (0 == j % k))
				x = k;
			k++;
		}
		printf("%d", x);
	}
}