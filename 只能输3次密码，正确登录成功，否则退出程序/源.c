#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	int i = 0;
	
	char arr2[] = {0};
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码：");
		scanf("%s", arr2);//数组不用&，变量需要，因为数组名就是首地址
		//两个字符串比较，不能使用等号

		if (strcmp(arr2, "123456")==0)//strcmp有两个参数，第一个为数组，第二个为字符串
									  //它的返回值有>,<,=三种情况，等于则两个字符串相同，小于则段
		{
			printf("登录成功\n");
			break;
		}
		else
		{
			printf("密码错误\n");
		}

	}
	if (i == 3)
	{
		printf("三次密码错误，退出程序\n");
	}
	return 0;
}