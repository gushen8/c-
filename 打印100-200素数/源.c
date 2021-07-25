#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	int i = 100;
	while (i <= 200)
	{
		int j = 2;
		for (j=2; j < i; j++)
		{
			if (0 == i % j)
			{
				break;			//这句话一定要加
			}
			else
			{
				printf("%d ", i);
				break;         //这句话一定要加
			}
		}
		i++;
	}
	return 0;
}

//简便方法 ,更加优化
//int main()
//{
//	int i = 101;
//	while (i <= 200)
//	{
//		int j = 2;
//		for (j = 2; j < sqrt(i); j++)
//		{
//			if (0 == i % j)
//			{
//				break;			//这句话一定要加
//			}
//			else
//			{
//				printf("%d ", i);
//				break;         //这句话一定要加
//			}
//		}
//		i+=2;
//	}
//	return 0;
//}