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
			printf("%d*%d=%-3d", j, i, i * j);//-3d��ʾ���3���ַ�����-��Ϊ����룬�������Ŀո��룻
		}
		printf("\n");//����ֱ��д"\n";
	}
	return 0;
}