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
//	scanf("%d", &arrlen);//����Ԫ�ظ���
//	s->length = arrlen;//Ŀǰ���鳤��
//	s->p = (int *)malloc(arrlen * sizeof(int));//�����ڴ�
//	//�õ������׵�ַ
//
//	for (i = 0; i < arrlen; i++)
//	{
//		scanf("%d", (s->p + i));//��������Ԫ��
//	}
//}
//void lessLength(SS *s)//���鳤�ȼ�ȥ1��Ԫ�صĴ�С
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
//	void Delete(int *arr, int AAIndex, int arrlength);//������ctrl+v���ƣ�������0.0
//	int i;
//	int j;
//	int reallength = s->length;
//	for (i = 0; i < s->length; i++)
//	{
//		for (j = i + 1; j < s->length; j++)
//		{
//			if (*(s->p + i) == *(s->p + j))//�ҵ��ظ�Ԫ�أ��±� i
//			{
//				Delete(s->p, j,s->length);
//				/*-------------�˴����鳤��Ӧ�ü�ȥ1---------------*/
//				s->length--;
//			}
//		}
//	}
//}
//void Delete(int *arr,int AAIndex,int arrlength)//AAIndex��Ҫɾ��Ԫ�ص��±�
//{
//	int temp;//����ʱ�ݴ���
//	for (; AAIndex <= arrlength - 2; AAIndex++)
//	{
//		temp = *(arr + AAIndex);
//		*(arr + AAIndex) = *(arr + AAIndex + 1);
//		*(arr + AAIndex + 1) = temp;
//	}
//}
