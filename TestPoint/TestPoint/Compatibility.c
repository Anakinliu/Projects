#include <stdio.h>
int main(void)
{
	int x = 4;
	int **qq;
	int *q;
	q = &x;
	*qq = q;
	
	printf("%p\n", *qq);
	printf("%p\n", q );

	double  y = 9.9;
	printf("y  = %f\n", y);
	int * i = &y;
	double * d = &x;
	printf("* i  = %f\n", * i);
	printf("* d  = %f\n", * d);
	i = &x;
	d = &y;
	d = i;

}