#include <stdio.h>
int main()
{
	int x[4][3] = { {1,5,3} ,{27,5,6} ,{7,8,9} ,{10,11,12} };
	int (*p)[3] = x;//"p"��"x"��ȫ�ȼۣ���ָ���ά�����ָ��
	//int y = 9;
	int *q = x;
	printf("%d=%d", *(1+p),*(3+q));
	system("pause");
}