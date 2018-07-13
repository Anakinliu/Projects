//#include <stdlib.h>
//#include <stdio.h>
//int  main(void)
//{
//	int *p;
//	int n;
//	int i, j, temp;
//	printf("输入数组长度\n");
//	scanf("%d", &n);
//	p = malloc(sizeof(int)*n);
//	printf("输入数组：\n");
//	for (int i = 0; i < n; i++)
//		scanf("%d", p + i);
//	printf("进行升序排序\n");
//	for (i=0; i < n - 1; i++)
//	{
//		for (j=0; j<n-i-1; j++)
//			if (*(p + j) > *(p + j+1))
//			{
//				temp = *(p + j);
//				*(p + j) = *(p + j+1);
//				*(p + j+1) = temp;
//				
//			}
//	}
//	printf("排序后\n");
//	for (int i = 0; i < n; i++)
//		printf("%d", *(p + i));
//
//
//
//	free(p);
//
//	system("pause");
//
//
//
//}