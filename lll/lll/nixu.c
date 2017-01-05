#include <stdio.h>
#define LEN 5
void NiXu(int *p)
{
	int i;
	int temp;
	for (i = 0; i < LEN/2; i++)
	{
		temp = p[i];
		p[i] = p[LEN - 1 - i];
		p[LEN - 1 - i] = temp;
	}
}
int main()
{
	int arr[LEN];
	int i;
	for (i = 0; i < LEN; i++)
	{
		scanf("%d", &arr[i]);
	}
	NiXu(arr);
	for (i = 0; i < LEN; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}