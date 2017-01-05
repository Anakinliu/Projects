#include <stdio.h>
#include <math.h>
//fabs()求绝对值，浮点数绝对值小于1e-6则将其视为0
int main()
{
	int n,i=0,j=0;
	for (n = 100; n <= 300; n++)
	{
		for (i = 2; i <= n / 2; i++)
		{
			if (n%i == 0)
				break;
		}
		if (i == n / 2 + 1)
		{
			printf("%6d", n);
			j++;
			if (j % 5 == 0)
				printf("\n");
		}
		
	}
	printf("\n");
	system("pause");
}