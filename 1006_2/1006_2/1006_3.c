//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>
//#define True 1
//#define False 0
//int IsSu(int n)
//{
//	if (n <= 1)
//		return False;
//	for (int i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//			return False;
//	}
//	return True;
//}
//int main()
//{
//	    int n,k;//n是元素个数，k是抽取的元素个数
//		scanf("%d%d", &n, &k);
//	    int i, j, z;
//		int sum = 0;
//		int *arr;
//		arr = (int *)malloc(n * sizeof(int));
//		for (i = 0; i < n; i++)
//		{
//			scanf("%d", &arr[i]);
//		}
//		for (j = 0; j <= n - k; j++)
//		{
//			for (z = 0, sum = 0; z <= n - k - j; z++)
//			{
//				for (int t = j; t <= n - k + z; t++)
//				{
//					sum = sum + arr[t];
//				}
//			/*	if (IsSu(sum))
//				{
//					printf("%d\n", sum);
//				}*/
//				if (IsSu(sum))
//				{
//					printf("%d", sum);
//				}
//			}
//		}
//}