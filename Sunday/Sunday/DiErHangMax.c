//#include <stdio.h>
//#define H 3
//#define L 3
//#define True 1
//#define False 0
//int HMax(int *arr)
//{
//	//�õ���һ�е����ֵ
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
//int HMaxIndex(int HMax, int *cpyarr)//���ݽ�����һ�е����ֵ�����Ƶ�����
//{
//	int i;
//	for (i = 0; i < H; i++)
//	{
//		if (HMax == cpyarr[i])
//			return i;
//		//�õ���һ�������ֵ���±�
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
//			//�����ά����
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