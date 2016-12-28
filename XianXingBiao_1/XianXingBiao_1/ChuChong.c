//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//typedef struct {
//	int *p;
//	int length;
//} SS;
//void recreat(SS *s)
//{
//	int i;
//	int *p;
//	p = (int *)malloc(s->length * sizeof(int));
//	for (i = 0; i < s->length; i++)
//	{
//		*(p + i) = *(s->p + i);
//	}
//	s->p = p;
//}
//void  creatList(SS *s)
//{
//	int arrlen;
//	int i;
//	scanf("%d", &arrlen);//数组元素个数
//	s->length = arrlen;//目前数组长度
//	s->p = (int *)malloc(arrlen * sizeof(int));//分配内存
//	//得到数组首地址
//
//	for (i = 0; i < arrlen; i++)
//	{
//		scanf("%d", (s->p + i));//依次输入元素
//	}
//}
//void lessLength(SS *s)//数组长度减去1个元素的大小
//{
//	s->p = (int *)(s->p, (s->length - 2*sizeof(int)));
//
//}
//void printarr(SS s)
//{
//	for (int i = 0; i < s.length; i++)
//	{
//		printf("%d ", *(s.p + i));
//	}
//}
///*-------------------------------------------------*/
//int main(void)
//{
//	void DeleteIndex(SS *s);
//	SS s1;
//	creatList(&s1);
//	DeleteIndex(&s1);
//	recreat(&s1);
//	printarr(s1);
//	free(s1.p);
//	return 0;
//}
///*------------------------------------------------------*/
//void DeleteIndex(SS *s)
//{
//	void Delete(int *arr, int AAIndex, int arrlength);//这句最好ctrl+v复制！！！！0.0
//	int i;
//	int j;
//	int reallength = s->length;
//	for (i = 0; i < s->length; i++)
//	{
//		for (j = i + 1; j < s->length; j++)
//		{
//			if (*(s->p + i) == *(s->p + j))//找到重复元素，下标 i
//			{
//				Delete(s->p, j,s->length);
//				/*-------------此处数组长度应该减去1---------------*/
//				s->length--;
//			}
//		}
//	}
//}
//void Delete(int *arr,int AAIndex,int arrlength)//AAIndex是要删除元素的下标
//{
//	int temp;//交换时暂存用
//	for (; AAIndex <= arrlength - 2; AAIndex++)
//	{
//		temp = *(arr + AAIndex);
//		*(arr + AAIndex) = *(arr + AAIndex + 1);
//		*(arr + AAIndex + 1) = temp;
//	}
//}
