//#include <stdio.h>
//#include <stdlib.h>
//int GetElem(int *arr, int index)//传入数组和要得到元素的下标
//{
//	return *(arr + index);
//}
//int ListInsert(int *p, int arrlen,int index, int n)//在下标是index的元素前插入数n
//{
//	if (index < 0 && index > arrlen )
//	{
//		return 0;
//	}
//	int i;
//	for (i = arrlen   ; i > index; i--)
//	{
//		*(p + i) = *(p + i - 1);
//	}
//	*(p + index) = n;
////	*arrlen = *arrlen + 1;
//	//for (i = 0; i <*arrlen + 1 ; i++)
//	//{
//	//	printf("%d ", *(p + i));//
//	//}
//	//*(p + index) = n;
//	//*(arrlen) = *(arrlen)+1;//数组长度加1
//	return 1;
//}
//int main(void)
//{
//	int ai, bj;
//	int i, j,k;
//	int *pa;
//	int *pb;
//	int *pc;
//	int pa_n;
//	int pb_n;
//	int *pa_len = &pa_n;//插入后pa长度
//	int *pb_len = &pb_n;//插入后pb长度
//	pc = (int *)malloc(sizeof(int) * (pb_n + pa_n));
//
//	scanf("%d", &pa_n);//
//	pa = (int *)malloc(sizeof(int) * ( pa_n));
//	
//	for (i = 0;i < pa_n ; i++)
//	{
//		scanf("%d", (pa + i));//
//	}
//	scanf("%d", &pb_n);//
//	pb = (int *)malloc(sizeof(int) * (pb_n ));
//
//	pc = (int *)malloc(sizeof(int) * (pb_n + pa_n + 1));
//	//目前只能分配较大数组，来解决每次插入后数组长度需要加1
//	for (i = 0; i < pb_n; i++)
//	{
//		scanf("%d", (pb + i));//
//	}
//	//数组输入完毕
//	//	ListInsert(pa, *pa_len, 2, 100);
//	//	for (i = 0; i < pa_n + 1 ; i++)
//	//	{
//	//		printf("%d ", *(pa + i));//
//	//	}
//	i = j = 0;
//	k = 0;
//	for (; j < pb_n && i < pa_n;)//注意此处，j会越界
//	{
//		ai = *(pa + i);
//		bj = *(pb + j);
//		if (ai <= bj)
//		{
//			ListInsert(pc, pa_n + pb_n, k++, ai);
//			i++;
//		}
//		else
//		{
//			ListInsert(pc, pa_n + pb_n, k++, bj);
//			j++;
//		}
//	}
//		while (i < pa_n)
//		{
//			ai = GetElem(pa, i++);
//			ListInsert(pc, pa_n + pb_n, k++, ai);
//		}
//		while (j < pb_n)
//		{
//			bj = GetElem(pb,j++);
//			ListInsert(pc, pa_n + pb_n, k++, bj);
//		}
//	
//
//
////	pa = (int *)calloc(pa_n + 1, sizeof(int));
//
//	//printf("%d", *(pa + 5));
//	//输入pa
//	/*
//	scanf("%d", &pb_n);
//	pb = (int *)malloc(sizeof(int) * pb_n);
//	for (i = 0; i < pb_n; i++)
//	{
//		scanf("%d", (pb + i));
//	}
//	*/
//	//输入pb
//
//	for (i = 0; i < pa_n + pb_n ; i++)
//	{
//		printf("%d ", *(pc + i));//
//	}
////	printf("\n\n%d\n\n", GetElem(pa, 0));
//	free(pa);
//	free(pb);
//	free(pc);
//	return 0;
//}