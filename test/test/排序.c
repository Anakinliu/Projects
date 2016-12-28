//#include <stdio.h>
//#include <math.h>
//#define M 10
//
//void pai(int *p)
//{
//	int i, j;
//	//printf("%d", *(p+1));
//	for (i = 0; i<M - 1; i++)
//	{//n个数要进行n-1趟比较
//		for (j = 0; j < M - i; j++)
//			if (*(p+j)<*(p+1+j))
//			{
//				int t = *(p + 1+j);
//				*(p + 1+j) = *(p+j);
//				*(p+j) = t;
//			}
//	}
//}
//int main(void)
//{
//	int i, arr[10] = { 10,25,90,80,70,35,65,40,55,5 };
//	int *p = arr;
//	pai(p);
//	for (i = 0; i < M; i++)
//		printf("%-5d", arr[i]);
//		
//	/*pai(arr);*/
//	
//	system("pause");
//}