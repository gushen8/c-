#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	int i = 0;
	
	char arr2[] = {0};
	for (i = 0; i < 3; i++)
	{
		printf("���������룺");
		scanf("%s", arr2);//���鲻��&��������Ҫ����Ϊ�����������׵�ַ
		//�����ַ����Ƚϣ�����ʹ�õȺ�

		if (strcmp(arr2, "123456")==0)//strcmp��������������һ��Ϊ���飬�ڶ���Ϊ�ַ���
									  //���ķ���ֵ��>,<,=��������������������ַ�����ͬ��С�����
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}

	}
	if (i == 3)
	{
		printf("������������˳�����\n");
	}
	return 0;
}