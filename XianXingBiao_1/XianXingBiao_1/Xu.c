//#include<stdio.h>
//#include<stdlib.h>
//typedef struct {
//	int length;
//	int *base;
//}sqlist;
//void creatlist(sqlist *l)
//{
//	scanf("%d", &l->length);
//	l->base = (int *)malloc((l->length) * sizeof(int));
//	int i;
//	for (i = 0; i<l->length; i++)
//	{
//		scanf("%d", (l->base + i));
//
//	}
//}
//void uninlist(sqlist la, sqlist lb, sqlist *lc)
//{
//	lc->base = (int *)malloc((la.length + lb.length) * sizeof(int));
//	int i = 0, j = 0;
//	int k = 0;
//	while (i<la.length&&j<lb.length)
//	{
//		if (la.base[i] <= lb.base[j])
//		{
//			*(k + lc->base) = la.base[i];
//			k++;
//			i++;
//		}
//		else
//		{
//			*(k + lc->base) = lb.base[j];
//			k++;
//			j++;
//		}
//	}
//	while (i<la.length)
//	{
//		*(k + lc->base) = la.base[i];
//		k++;
//		i++;
//
//	}
//	while (j<lb.length)
//	{
//		*(k + lc->base) = lb.base[j];
//		k++;
//		j++;
//
//	}
//	lc->length = k;
//}
//void printlist(sqlist l)
//{
//	int i;
//	for (i = 0; i<l.length; i++)
//
//		printf("%d ", l.base[i]);
//
//	printf("\n");
//}
//int main()
//{
//	sqlist la, lb, lc;
//	creatlist(&la);
//	creatlist(&lb);
//	uninlist(la, lb, &lc);
//	printlist(lc);
//	return 0;
//}