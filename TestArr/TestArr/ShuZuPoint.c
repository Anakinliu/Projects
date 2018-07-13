#include <stdio.h>
int main(void)
{
	int arr[4][2] = { {1,3},{5.7},{9,11},{13,15} };
	int *p = arr;
	printf("%d\n", *p +1);

	int(*pp)[2] = arr;
	printf("%d", (*pp)[1] );

}