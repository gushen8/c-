#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int a = 10;
	int b = 20;
	printf("����ǰ��a:%d,b:%d\n", a, b);
	swap(&a, &b);
	printf("������a:%d,b:%d\n", a, b);
	return 0;
}