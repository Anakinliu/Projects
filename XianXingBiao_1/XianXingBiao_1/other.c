//#include<stdio.h>
//typedef struct {
//	int data[100];
//	int length;
//}sqlist;
//
//void Initlist (sqlist *L)
//{
//	(*L).length = 0;
//}
//void creatlist(sqlist *L)
//{
//	scanf("%d", (*L).length);
//	int i;
//	for (i = 0; i<(*L).length; i++)
//	{
//		scanf("%d", (*L).data[i]);
//	}
//}
//void uninlist(sqlist La, sqlist Lb, sqlist *Lc)
//{
//	int i = 0, j = 0, k = 0;
//	while (i<La.length&&j<Lb.length)
//	{
//		if (La.data[i]<Lb.data[j])
//		{
//			(*Lc).data[k] = La.data[i];
//			k++;
//			i++;
//		}
//		else
//		{
//			(*Lc).data[k] = Lb.data[j];
//			k++;
//			j++;
//		}
//	}
//
//	while (i<La.length)
//	{
//		(*Lc).data[k] = La.data[i];
//		i++;
//		k++;
//	}
//	while (j<Lb.length)
//	{
//		(*Lc).data[k] = Lb.data[j];
//		j++;
//		k++;
//	}
//	(*Lc).length = k;
//}
//void printlist(sqlist L)
//{
//	int i;
//	for (i = 0; i<L.length; i++)
//	{
//		printf("%d", L.data[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	sqlist *La, *Lb, *Lc;
//	Initlist(La);
//	creatlist(La);
//	Initlist(Lb);
//	creatlist(Lb);
//	uninlist(*La, *Lb, Lc);
//	printlist(*Lc);
//	return 0;
//}