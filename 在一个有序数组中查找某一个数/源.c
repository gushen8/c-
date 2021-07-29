#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//暴力求解法
int main()
{
	int i = 0;
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//在有序数组arr中找7
	//找到了打印下标，找不到打印找不到
	int sz = sizeof(arr) / sizeof(arr[0]);
	int x = 7;
	for (i = 0; i < sz; i++)
	{
		if (x == arr[i])
		{
			printf("找到了，改下标为：%d\n",i);
			break;
		}
	}
	//这一步是我没有想到的；
	if (i == sz)
	{
		printf("找不到这个数");
	}

	return 0;
}

//折半优先算法(二分法）
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int x = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	int left = 0;
//	//这个while是无问没有想到的
//	while (left <= right)
//	{
//		int mid = (right + left) / 2;
//		if (arr[mid] > x)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < x)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到该数");
//	}
//
//	return 0;
//}