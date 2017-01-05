//#include <stdio.h>
//#include <stdlib.h>
//#define N 4
//int main()
//{
//	int *p;
//	int i, t;
//	p = malloc(sizeof(int)*N);
//	printf("shuru\n");
//	for (i = 0; i < N; i++)
//		scanf("%d", p + i);
//	for (i = 0; i <N / 2 ; i++)
//	{
//		t = *(p + i);
//		*(p + i) = *(p + N - 1 - i);
//		*(p + N - 1 - i) = t;
//	}
//	for (i = 0; i < N; i++)
//		printf("%d", *(p + i));
//	system("pause");
//}