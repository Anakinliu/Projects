//#include <stdio.h>
//#include <ctype.h>
//#include <time.h>
//#define SPACE ' '
//clock_t start, end;
//double SumTime;
//int MaxSubseqSum(int A[], int N)
//{
//	int Thissum = 0, Maxsum = 0;
//	int i;
//	for (i = 0; i < N; i++)
//	{
//		Thissum += A[i];
//		if (Thissum > Maxsum)
//		{
//			Maxsum = Thissum;
//		}
//		else if (Thissum < 0)
//			Thissum = 0;
//	}
//	
//	return Maxsum;
//}
//int main()
//{
//	int n = 8;
//	int A[8] = {-2,1,9,-6,2,-9,10,1};
//
//	//printf("%d", CLK_TCK);
//
//
//	start = clock();
//	MaxSubseqSum(A, n);
//	end = clock();
//	SumTime = ((double)(end - start)) / CLK_TCK;
//	printf("%f", SumTime);
//	system("PAUSE");
//	return 1;
//}