#include<stdio.h>
int main() {
	int x,sum=0;
	int y[10];
	scanf_s("%d", &x);
	if (x > 0)
	{
		if (x > 10)
		{
			while (x > 10)
			{
				printf("Try again : ");
				scanf_s("%d", &x);
			}
			for (int i = 1; i <= x; i++)
			{
				scanf_s("%d", &y[i]);
				sum += y[i];
			}
			printf("Sum : %d", sum);
		}
		else if (x <= 10)
		{
			for (int i = 1; i <= x; i++)
			{
				scanf_s("%d", &y[i]);
				sum += y[i];
			}
			printf("Sum : %d", sum);

		}
	}
	else
		printf("ERROR");
	return 0;
}