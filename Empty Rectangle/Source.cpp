#include<stdio.h>

int main()
{
	int a, i, j;
	printf("Enter number : ");
	scanf_s("%d", &a);
	for (i = 1; i <= a; i++)
	{
		if (i == 1 || i == a)
		{
			for (j = 1; j <= a; j++)
			{
				printf("*");
			}
		}
		else
		{
			for (j = 1; j <= a; j++)
			{
				if (j == 1 || j == a)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
		}
		printf("\n");
	}
	return 0;
}