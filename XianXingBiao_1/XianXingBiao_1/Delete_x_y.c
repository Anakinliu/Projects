//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//typedef struct {
//	int *p;
//	int length;
//	int x;
//	int y;
//} SS;
//void  creatList(SS *s)
//{
//	int arrlen;
//	int i;
//	scanf("%d", &arrlen);//����Ԫ�ظ���
//	s->length = arrlen;//Ŀǰ���鳤��
//	s->p = (int *)malloc(arrlen * sizeof(int));//�����ڴ�
//											   //�õ������׵�ַ
//
//	for (i = 0; i < arrlen; i++)
//	{
//		scanf("%d", (s->p + i));//��������Ԫ��
//	}
//	/*-------------------------------����x,y------------------------*/
//	scanf("%d%d", &s->x,&s->y);
//}
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
//void FindIndex(SS *s)//�õ�x,y���±�
//{
//	int i;
//	for (i = 0; i < s->length; i++)
//	{
//		if (s->x == *(s->p + i))
//		{
//			s->x = i;
//		}
//		if (s->y == *(s->p + i))
//		{
//			s->y = i;
//		}
//	}
//}
//void printarr(SS s)
//{
//	for (int i = 0; i < s.length; i++)
//	{
//		printf("%d ", *(s.p + i));
//	}
//}
//void resetLength(SS *s)
//{
//	s->length = s->length - (s->y - s->x) - 1;
//}
//void freeP(int *s)
//{
//	free(s);
//}
//void inOne(SS *s)
//{
//	void DeleteIndex(SS *s);
//	creatList(s);
//	FindIndex(s);
//	DeleteIndex(s);
//	resetLength(s);
//	recreat(s);
//	printarr(*s);
//	freeP(s->p);
//}
///*------------main top--------------*/
//int main(void)
//{
//	SS s;
//	inOne(&s);
//	return 0;
//}
///*---------------main bottom---------------*/
//void DeleteIndex(SS *s)
//{
//	void Delete(int *s, int AAIndex,int arrlength);
//	int i;
//	int j;
//	for (i = s->x,j = 0; j <= s->y - s->x; j++)
//	{
//				Delete(s->p, i, s->length);
//	}
//}
//void Delete(int *arr, int AAIndex, int arrlength)//AAIndex��Ҫɾ��Ԫ�ص��±�
//{
//	int temp;//����ʱ�ݴ���
//	for (; AAIndex <= arrlength - 2; AAIndex++)
//	{
//		temp = *(arr + AAIndex);
//		*(arr + AAIndex) = *(arr + AAIndex + 1);
//		*(arr + AAIndex + 1) = temp;
//	}
//}