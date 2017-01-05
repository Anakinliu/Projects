//#include <stdio.h>
//#define H 3
//#define L 3
//#define True 1
//#define False 0
//int HMax(int *arr)
//{
//	//得到这一行的最大值
////    printf("%d\n", *(2+arr) );
//	int i, j;
//	int temp;
//	for (i = 0; i < H - 1; i++)
//	{
//		for (j = i + 1; j < H; j++)
//		{
//			if (*(arr +j)>* (arr + i))
//			{
//				temp = *(arr + j);
//				*(arr + j) = *(arr + i);
//				*(arr + i) = temp;
//			}
//		}
//	}
//	return*arr;
//}
//int HMaxIndex(int HMax,int *cpyarr)//传递进来这一行的最大值，复制的数组
//{
//	//得到这一行中最大值的下标
//	int i;
//	for (i = 0; i < H; i++)
//	{
//		if (HMax == cpyarr[i])
//			return i;
//		//得到这一行中最大值的下标
//	}
//}
//int IsLMin(int HMax,int *cpyarr,int HMaxIndex)//传递进来: 某行最大值，复制的数组，某行最大值下标
//{
//	//此函数寻找最大值所在列中是否有比最大值小的，有则返回False，无则返回列标
//	int i;
//	for (i = HMaxIndex ; i < L * H; i = i + L)//从这个最大值所在行往下寻找
//	{
//		if (HMax > *(cpyarr + i))
//		{
//			return False;//列中含有比最大值小的，返回False
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
//			//输入二维数组
//			cpyarr[i][j] = arr[i][j];
//		}
//	}
//	for (i = 0; i < H; i++)
//	{
//		int HM = HMax(*(arr + i));
//		int HMI = HMaxIndex(HM, *(cpyarr + i));
//		int ILM = IsLMin(HM, *cpyarr, HMI);
////		IsLMin(int HMax, int *cpyarr, int HMaxIndex)//传递进来: 某行最大值，复制的数组，某行最大值下标
//		if (ILM)
//		{
//			printf("%d ", HM);
//			printf("%d %d\n", i + 1, HMI + 1 );
//		}
//	}
//}