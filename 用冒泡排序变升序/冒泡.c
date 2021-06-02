#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void maopao(int arr[], int sz)
{//确定冒泡排序的趟数
	int i = 0;
	for (i = 0; i < sz-1; i++)		//不是i<sz
	{//进行冒泡排序
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tem = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tem;
			}
		}
	}
}
int main()
{
	int i = 0;
	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	maopao(arr, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}