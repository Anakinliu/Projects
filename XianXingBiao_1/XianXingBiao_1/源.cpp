//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <math.h>
////#define LEN 10
//int GetIndex(int *arr, int n, int arrlen)
//{
//	int i;
//	for (i = 0; i < arrlen; i++)
//	{
//		if (n == *(arr + i))
//		{
//			return i;
//		}
//	}
//}
//int ListInsert(int *p, int arrlen, int index, int n)
//{
//	if (index < 0 && index > arrlen)
//	{
//		return 0;
//	}
//	int i;
//	for (i = arrlen; i > index; i--)
//	{
//		*(p + i) = *(p + i - 1);
//	}
//	*(p + index) = n;
//	return 1;
//}
//int main(void)
//{
//	int *arr;
//	int i, j, k;
//	int LEN;
//	int x, y;
//	int x_index;
//	int y_index;
//	int x_i;
//	int y_i;
//	int max_index;
//	scanf("%d", &LEN);
//	arr = (int *)malloc(sizeof(int) * LEN );
//	for (i = 0; i < LEN; i++)
//	{
//		scanf("%d", (arr + i));
//	}
//	scanf("%d%d", &x, &y);
//	//	printf("%d\n", GetIndex(arr, x));
//	x_index = GetIndex(arr, x, LEN);
//	y_index = GetIndex(arr, y, LEN);
//	x_i = x_index;
//	y_i = y_index;
//	for (i = y_i + 1; i < LEN; i++)
//	{
//		ListInsert(arr, LEN - 1, x_i, *(arr + y_i + 1));
//		x_i++;
//		y_i = y_i + 2;
//	}
//	for (i = LEN - 1 - y_index; i <= LEN; i++)
//	{
//		*(arr + i) = NULL;
//	}
//	for (i = 0; i < LEN + 1; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	/*	for (i = 0; i < LEN - (y_index - x_index) - 1; i++)
//	{
//	printf("%d ", *(arr + i));
//	}*/
//	//	printf("\n\n%d    %d\n\n", x_index, y_index);
//	/*
//	for (i = x_index; i <= y_index; i++)
//	{
//	for (j = i ; j < LEN; j++)
//	{
//	*(arr + j ) = *(arr + j + 1);
//	}
//	}
//	for (i = 0; i < LEN - (y_index - x_index) - 1; i++)
//	{
//	printf("%d ", *(arr + i));
//	}
//	*/
//	return 0;
//}