//#include <stdio.h>
//#include <stdlib.h>
//#define N 3
//int main()
//{
//	int *p;
//	int i , j, t;
//	p = malloc(sizeof(int)*N);
//	printf("输入数组各个元素\n");
//	for (i = 0; i < N; i++)
//		scanf("%d", p + i);
//	printf("%d\n\n", *(p + 2));
//	for (i=0; i < N - 1; i++)
//	{
//		for (j = 0; j < N - i+1; j++)
//		{
//			if (*(p + j) < *(p + j+1))
//			{
//				t = *(p + j+1);
//				*(p + j+1) = *(p + j);
//				*(p + j) = t;
//			}
//		}
//	}
//	for (i = 0; i < N; i++)
//		printf("%d", *(p + i));
//	system("pause");
//}
