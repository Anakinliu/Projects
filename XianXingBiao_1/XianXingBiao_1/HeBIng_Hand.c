//#include <stdio.h>
//#include <stdlib.h>
//int GetElem(int *arr, int index)
//{
//	return *(arr + index);
//}
//int ListInsert(int *p, int arrlen, int index, int n)
//{
//	if (index < 0 && index > arrlen)
//	{
//		return 0;
//	}
//	int i;
//	for (i = arrlen; i > index; i--)
//	{
//		*(p + i) = *(p + i - 1);
//	}
//	*(p + index) = n;
//	return 1;
//}
//int main(void)
//{
//	int ai, bj;
//	int i, j, k;
//	int *pa;
//	int *pb;
//	int *pc;
//	int pa_n;
//	int pb_n;
//	pc = (int *)malloc(sizeof(int) * (pb_n + pa_n));
//
//	scanf("%d", &pa_n);//
//	pa = (int *)malloc(sizeof(int) * (pa_n));
//
//	for (i = 0; i < pa_n; i++)
//	{
//		scanf("%d", (pa + i));//
//	}
//	scanf("%d", &pb_n);//
//	pb = (int *)malloc(sizeof(int) * (pb_n));
//
//	pc = (int *)malloc(sizeof(int) * (pb_n + pa_n + 1));
//	for (i = 0; i < pb_n; i++)
//	{
//		scanf("%d", (pb + i));//
//	}
//
//	i = j = 0;
//	k = 0;
//	for (; j < pb_n && i < pa_n;)
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
//	while (i < pa_n)
//	{
//		ai = GetElem(pa, i++);
//		ListInsert(pc, pa_n + pb_n, k++, ai);
//	}
//	while (j < pb_n)
//	{
//		bj = GetElem(pb, j++);
//		ListInsert(pc, pa_n + pb_n, k++, bj);
//	}
//
//
//	for (i = 0; i < pa_n + pb_n; i++)
//	{
//		printf("%d ", *(pc + i));//
//	}
//
//	free(pa);
//	free(pb);
//	free(pc);
//	return 0;
//}