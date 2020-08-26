#include<stdio.h>
int main()
{
	int a, i;
	printf("Enter number : ");
	scanf_s("%d", &a);
	printf("Factoring Result : ");
	for (i = 2; i <= a; i++)
	{
		if (a % i == 0)
		{
			printf("%d", i);
			a = a / i;
			i = 1;
			if (i < a)
			{
				printf(" x ");
			}
		}
	}
	return 0;
}