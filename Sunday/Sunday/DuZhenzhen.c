//#include <stdio.h>
//typedef struct
//{
//	int data[100];
//	int length;
//}sqlist;
////建立一个线性表
//void Initlist(sqlist *l)
////初始化一个线性表。不需要返回值，所以为void，数据类型为sqlist变量为l的初始化函数
//{
//	l->length = 0;
//}
//void creatlist(sqlist *l)
////创建线性表。给线性表的元素赋值
//{
//	int i;
//	scanf("%d", &l->length);
//	for (i = 0; i<l->length; i++)
//	{
//		scanf("%d", &l->data[i]);
//	}
//}
//void hebing(sqlist la, sqlist lb, sqlist *lc)
//{
//
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	while (i < la.length&&j < lb.length)
//	{
//		if (la.data[i] < lb.data[j])
//		{
//			lc->data[k] = la.data[i];
//			i++;
//			k++;
//		}
//		else
//		{
//			lc->data[k] = lb.data[j];
//			j++;
//			k++;
//		}
//	}
//		while (i<la.length)
//		{
//			lc->data[k] = la.data[i];
//			i++;
//			k++;
//		}
//		while (j<lb.length)
//		{
//			lc->data[k] = lb.data[j];
//			k++;
//			j++;
//		}
//		lc->length = k;
//	}
//
//
//
//void printlist(sqlist l)
//{
//	int i;
//	for (i = 0; i<l.length; i++)
//	{
//		printf("%d ", l.data[i]);
//	}
//}
//int main()
//{
//
//	sqlist LA, LB, LC;
//	Initlist(&LA);
//	creatlist(&LA);
//	Initlist(&LB);
//	creatlist(&LB);
//	hebing(LA, LB, &LC);
//	printlist(LC);
//	return 0;
//}
