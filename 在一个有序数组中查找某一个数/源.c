#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//������ⷨ
int main()
{
	int i = 0;
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//����������arr����7
	//�ҵ��˴�ӡ�±꣬�Ҳ�����ӡ�Ҳ���
	int sz = sizeof(arr) / sizeof(arr[0]);
	int x = 7;
	for (i = 0; i < sz; i++)
	{
		if (x == arr[i])
		{
			printf("�ҵ��ˣ����±�Ϊ��%d\n",i);
			break;
		}
	}
	//��һ������û���뵽�ģ�
	if (i == sz)
	{
		printf("�Ҳ��������");
	}

	return 0;
}

//�۰������㷨(���ַ���
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int x = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	int left = 0;
//	//���while������û���뵽��
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
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ�������");
//	}
//
//	return 0;
//}