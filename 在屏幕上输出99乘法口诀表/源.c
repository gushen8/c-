#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-3d", j, i, i * j);//-3d表示输出3个字符，“-”为左对齐，不够数的空格补齐；
		}
		printf("\n");//不是直接写"\n";
	}
	return 0;
}