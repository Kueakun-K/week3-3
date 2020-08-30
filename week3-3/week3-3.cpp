#include<stdio.h>
int main() {
	int x,sum=0;
	int y[10];
	scanf_s("%d", &x);
	if (x > 0 and x<=10)
	{
		for (int i = 1; i <= x; i++)
		{
			scanf_s("%d", &y[i]);
			sum += y[i];
		}
		printf("Sum : %d", sum);
	}
	else
		printf("ERROR");
	return 0;
}