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
	printf("---------开始打印符号---------\n");
	printf("请输入数字:");
	scanf("%d", &n);
	print(n);
	printf("---------结束打印符号---------\n");
	getch();
}