#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void menu()
{
	printf("***************************\n");
	printf("*****1��play***************\n");
	printf("*****0��exit***************\n");
	printf("***************************\n");
	

}
void game()
{
	int random = rand() % 100 + 1;
	int input = 0;

	while (1)
	{
		printf("���������µ����֣�");
		scanf("%d", &input);
		if (input > random)
		{
			printf("�´���\n");
			
		}
		else if (input < random)
		{
			printf("��С��\n");
			
		}
		else
		{
			printf("�¶���\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ��");
			break;
		default:
			printf("�����������������");
			break;
		}

	} while (input);
	return 0;
}