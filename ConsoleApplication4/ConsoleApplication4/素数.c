#include "information.h"
int sushu(int *score)
{
	
	int n ;
	int m;
	int i = 2;
	int hh = 0;
	
	srand((unsigned)time(0));
	m = (int)rand() % 50;
	n= (int)rand() % 100;
	for (; n <= 200; n++)
	{
		for (i = 2; i <= n - 1; i++)
		{
			if (n%i == 0)
				break;
		}
		if (i == n)
		{
			printf("%d", n);
		}
		
	}
	return 0;
}
