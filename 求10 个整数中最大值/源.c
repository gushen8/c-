#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int mid = 0;
	int max = 0;
	int i = 0;
	int arr[10] = { 0 };
	printf("������10��������");
	for (i = 0; i < 10; i++)
	{
		
		scanf("%d", &arr[i]);//��ֻ��Ҫ�Ե�һ��Ԫ�ظ�ֵʱ����&������&��ֻ�ܶԵ�һ��Ԫ�ظ�ֵ����Ҫ��ÿһ��Ԫ��ȡ��ַҪ��&��
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
	printf("��������Ϊ��%d\n", max);
	return 0;
}