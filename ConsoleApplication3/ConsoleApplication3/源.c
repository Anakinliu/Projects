#include <stdio.h> 
void print(int n)
{
	int i, j;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n - i; j++)
		{
			printf(" ");
		}
		for (j = 1; j< 2*i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	for (i = n - 1; i >= 1; i--)
	{
		for (j = 1; j <= n - i; j++)
		{
			printf(" ");
		}
		for (j = n - i + 1; j<n + i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

void main()
{
	int n;
	printf("---------��ʼ��ӡ����---------\n");
	printf("����������:");
	scanf("%d", &n);
	print(n);
	printf("---------������ӡ����---------\n");
	getch();
}