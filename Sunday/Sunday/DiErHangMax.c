//#include <stdio.h>
//#define H 3
//#define L 3
//#define True 1
//#define False 0
//int HMax(int *arr)
//{
//	//得到这一行的最大值
//	//    printf("%d\n", *(2+arr) );
//	int i, j;
//	int temp;
//	for (i = 0; i < H - 1; i++)
//	{
//		for (j = i + 1; j < H; j++)
//		{
//			if (*(arr + j)>* (arr + i))
//			{
//				temp = *(arr + j);
//				*(arr + j) = *(arr + i);
//				*(arr + i) = temp;
//			}
//		}
//	}
//	return*arr;
//}
//int HMaxIndex(int HMax, int *cpyarr)//传递进来这一行的最大值，复制的数组
//{
//	int i;
//	for (i = 0; i < H; i++)
//	{
//		if (HMax == cpyarr[i])
//			return i;
//		//得到这一行中最大值的下标
//	}
//}
////int arrtest(int *cpyarr)
////{
////	printf("%d\n", *(cpyarr + 6));
////}
//int main(void)
//{
//	int  arr[H][L];
//	int cpyarr[H][L];
//	int i, j;
//	int temp;
//	for (i = 0; i < H; i++)
//	{
//		for (j = 0; j < L; j++)
//		{
//			scanf("%d", &arr[i][j]);
//			//输入二维数组
//			cpyarr[i][j] = arr[i][j];
//		}
//	}
//	                                          printf("%d",HMax(*(cpyarr + 2)));                 //Ok
//
//
//
//
//
//	//arrtest(*cpyarr);
//}