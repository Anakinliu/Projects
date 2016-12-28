//#include <stdio.h>
//#define H 3
//#define L 3
//#define True 1
//#define False 0
//int HMax(int *arr)
//{
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
//int HMaxIndex(int HMax, int *cpyarr)
//{
//	int i;
//	for (i = 0; i < H; i++)
//	{
//		if (HMax == cpyarr[i])
//			return i;
//	}
//}
//int IsLMin(int HMax, int *cpyarr, int HMaxIndex)
//{
//
//	int i;
//	for (i = HMaxIndex; i < L * H; i = i + L)
//	{
//		if (HMax > *(cpyarr + i))
//		{
//			return False;
//		}
//	}
//	return True;
//}
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
//			cpyarr[i][j] = arr[i][j];
//		}
//	}
//	for (i = 0; i < H; i++)
//	{
//		int HM = HMax(*(arr + i));
//		int HMI = HMaxIndex(HM, *(cpyarr + i));
//		int ILM = IsLMin(HM, *cpyarr, HMI);
//		if (ILM)
//		{
//			printf("%d ", HM);
//			printf("%d %d\n", i + 1 , HMI + 1);
//		}
//	}
//	return 0;
//}
