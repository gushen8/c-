#define _CRT_SECURE_NO_WARNING
#include<stdio.h>
#include<Windows.h>//用于Sleep函数
#include<string.h>
#include<stdlib.h>//用于ststem函数
int main()
{
	char arr1[] ="hello world!!!!!!!";
	char arr2[] ="##################";
	int len = strlen(arr1);
	int left = 0;
	int right = len - 1;
	while(left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n",arr2);
		Sleep(1000);
		system("cls");
		left++;
		right--;

	}
	printf("%s\n", arr2);
	return 0;
}