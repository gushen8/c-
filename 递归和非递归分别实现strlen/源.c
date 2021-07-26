#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//递归
int Strlen_1(char* s)
{
	if (*s == '\0')   //\0不能打“”
	{
		return 0;
	}
	else
		return 1 + Strlen_1(s + 1);
}
//非递归
int Strlen_2(char* s)
{
	int sum = 0;
	while (*s != '\0')  //\0不能打“”
	{
		sum++;
		s++;
	}
	return sum;
}
int main()
{
	char arr1[] = "abcdef";
	printf("%d\n",Strlen_1(arr1));
	printf("%d\n", Strlen_2(arr1));
	return 0;
}