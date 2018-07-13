#include <stdio.h>
#include <time.h>
#include <math.h>
#define MAXN 100
#define O 100000
clock_t start, end;
/*clock��׽�ӳ���ʼ���е�clock()�����������ĵ�ʱ��
���ʱ��ĵ�λ��clock tick,����ʱ���㡱����Ŀ��
����CLK_TCK:����ʱ��ÿ���ߵġ�ʱ���㡱��
�˳������������*/
double duration;//��ʱ���㡱����Ŀ ���� ÿ���ߵġ�ʱ���㡱��

double f1(int n, double a[], double x)
//������ʽ
//n�Ƕ���ʽ����
//a[]���ϵ��
//x����δ֪��
//f2Ҳ�����
{
	int i;
	double p = a[0];
	for (i = 1; i <= n; i++)
		p += (a[i] * pow(x, i));
	return p;
}
double f2(int n, double a[], double x)
{
	//�ؾ����㷨
	int i;
	double p = a[n];
	for (i = n; i >0; i--)
		p = (a[i-1] +x*p);
	return p;
}
int main()
{
	/*clock()��time,h�ڣ�clock_t��clock()�������صı�������*/
	int i;
	double a[MAXN];
	for (i = 0; i < MAXN; i++)
	{
		a[i] = (double)i;
	}
	start = clock();//��main������䡰ʱ���㡱����Ŀ��
	for (i = 0; i < O; i++)
		f1(MAXN, a, 1.1);
	end = clock();//��main������䡰ʱ���㡱����Ŀ��
	duration = ((double)(end - start)) / CLK_TCK/O ;
	printf("��������ʱ��%e\n", duration);
	printf("ticks=%lf\n", (double)end - start);

	start = clock();
	for (i = 0; i < O; i++)
		f2(MAXN, a, 1.1);
	end = clock();
	duration = ((double)(end - start)) / CLK_TCK/O;
	printf("��������ʱ��%e\n", duration);
	printf("ticks=%lf\n", (double)end - start);
	system("pause");
	return 0;
}