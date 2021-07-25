#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void menu()
{
	printf("***************************\n");
	printf("*****1、play***************\n");
	printf("*****0、exit***************\n");
	printf("***************************\n");
	

}
void game()
{
	int random = rand() % 100 + 1;
	int input = 0;

	while (1)
	{
		printf("请输入您猜的数字：");
		scanf("%d", &input);
		if (input > random)
		{
			printf("猜大了\n");
			
		}
		else if (input < random)
		{
			printf("猜小了\n");
			
		}
		else
		{
			printf("猜对了\n");
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
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏！");
			break;
		default:
			printf("输入错误，请重新输入");
			break;
		}

	} while (input);
	return 0;
}