#include <stdio.h>

void inplace_swap(int * x,int * y) {
	*y = *x ^ *y;
	*x = *x ^ *y;
	*y = *x ^ *y;

}

int main(void)
{
	int a = 1;
	int b = 9;
	int *x = &a;
	int *y = &b;
	inplace_swap(&a, &b);
	printf("a = %d , b = %d\n", a, b);
	return 0;
}