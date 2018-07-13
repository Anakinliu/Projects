//#include <stdlib.h>
//#include <stdio.h>
//int  main(void)
//{
//	int *p;
//	int n;
//	printf("输入数组长度\n");
//	scanf("%d", &n);
//	p = malloc(sizeof(int)*n);
//	printf("输入数组：\n");
//	for (int i = 0; i < n; i++)
//		scanf("%d", p + i);
//	printf("进行升序排序\n");
//	for (int i = 0,j ; i < n - 1; i++)
//	{
//		for(int temp,j=i+1;j<n;j++)
//			if (*(p + i) > *(p + j ))
//			{
//				temp = *(p + i);
//				*(p + i) = *(p + j );
//				*(p + j ) = temp;
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