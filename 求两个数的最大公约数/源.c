#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//�������
//int main()
//{
//	int a, b = 0;
//	scanf("%d%d", &a, &b);
//	int m = (a > b ? b : a);
//	while (1)
//	{
//		if (a % m == 0 && b % m == 0)
//		{
//			printf("���Լ���ǣ�%d\n", m);
//			break;
//		}
//		m--;
//	}
//	return 0;
//}
//շת�����
int main()
{
	int a, b, r = 0;
	scanf("%d%d", &a, &b);
	while (a % b)
	{
		r = a % b;
		a = b;
		b = r;
	}
	printf("���Լ����%d\n", b);
	return 0;
}
