#include <stdio.h>
int main(void)
{
	double always = 9.9;
	double always2 = 5.5;
	const double * p = &always;
	printf("Before:always = %f\n", *p);
	always = 1.1;
	p = &always2;
	printf("After:always = %f\n", *p);

	const double *p2;
	double x[2] = { 6.6,7.7 };
	double y[2] = { 9.9,10.0 };
	p2 = x;
	p2 = y;
	//*(p2 + 1) = 9.9;
	printf("\n%f\n", *(p2 + 1));
	
	x[1] = 9;
	//*(p2 + 1) = 9;
	printf("%f", *(p2+1));
	
}

void f( double *p) {
	double x = 90.90;
	//(p + 1) = 9;
}