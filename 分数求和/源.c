#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����

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
	printf("�����ĺ�Ϊ��%lf", ret);

	return 0;
}