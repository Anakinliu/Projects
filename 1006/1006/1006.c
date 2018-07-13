#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define True 1
#define False 0
int IsSu(int n)
{
	if (n <= 1)
		return False;
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
			return False;
	}
	return True;
}
int main(void)
{
	int n;//n¸öÕûÊý
	scanf("%d", &n);
	int arr[] = (int)malloc(n * sizeof(int));
	printf("%d", strlen(arr));
}