#include <stdio.h>
int main()
{
	int a[6][2];
	printf("%d", (sizeof(a) /sizeof(a[0][0])));
}