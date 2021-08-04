#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int mid = 0;
	int max = 0;
	int i = 0;
	int arr[10] = { 0 };
	printf("请输入10个整数：");
	for (i = 0; i < 10; i++)
	{
		
		scanf("%d", &arr[i]);//当只需要对第一个元素赋值时不用&，不用&且只能对第一个元素赋值；当要对每一个元素取地址要用&。
	}
	for (i = 0; i < 9; i++)
	{
		if (arr[i] >= arr[i + 1])
		{
			mid = arr[i];
			if (mid > max)
			{
				max = mid;
			}
		}
		else
		{
			mid = arr[i + 1];
			if (mid > max)
			{
				max = mid;
			}
		}
	}
	printf("最大的整数为：%d\n", max);
	return 0;
}