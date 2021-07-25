#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()

{

	int i = 1000;

	while (i <= 2000)

	{

		if (0 == i % 100)

		{

			if (0 == i % 400)

				printf("%d ", i);

		}

		else

		{

			if (0 == i % 4)

			{

				printf("%d ", i);

				i += 3;

			}

		}

		i++;



	}

	return 0;



}