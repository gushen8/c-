#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果

int main()
{
	int  i = 0;
	double ret = 0;
	for (i = 1; i <= 100; i++)
	{
		if ((i % 2) == 1)
		{
			ret += (double)1 / i;
		}
		if ((i % 2) == 0)
		{
			ret -= (double)1 / i;
		}
	}
	printf("分数的和为：%lf", ret);

	return 0;
}