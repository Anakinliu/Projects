#include <stdio.h>
#include <time.h>
#include <math.h>
#define MAXN 100
#define O 100000
clock_t start, end;
/*clock捕捉从程序开始运行到clock()被调用所消耗的时间
这个时间的单位是clock tick,即“时间打点”的数目。
常数CLK_TCK:机器时钟每秒走的“时间打点”数
此常数随机器而异*/
double duration;//“时间打点”的数目 除以 每秒走的“时间打点”数

double f1(int n, double a[], double x)
//求解多项式
//n是多项式阶数
//a[]存放系数
//x就是未知数
//f2也是如此
{
	int i;
	double p = a[0];
	for (i = 1; i <= n; i++)
		p += (a[i] * pow(x, i));
	return p;
}
double f2(int n, double a[], double x)
{
	//秦九韶算法
	int i;
	double p = a[n];
	for (i = n; i >0; i--)
		p = (a[i-1] +x*p);
	return p;
}
int main()
{
	/*clock()在time,h内，clock_t是clock()函数返回的变量类型*/
	int i;
	double a[MAXN];
	for (i = 0; i < MAXN; i++)
	{
		a[i] = (double)i;
	}
	start = clock();//从main到此语句“时间打点”的数目。
	for (i = 0; i < O; i++)
		f1(MAXN, a, 1.1);
	end = clock();//从main到此语句“时间打点”的数目。
	duration = ((double)(end - start)) / CLK_TCK/O ;
	printf("程序运行时间%e\n", duration);
	printf("ticks=%lf\n", (double)end - start);

	start = clock();
	for (i = 0; i < O; i++)
		f2(MAXN, a, 1.1);
	end = clock();
	duration = ((double)(end - start)) / CLK_TCK/O;
	printf("程序运行时间%e\n", duration);
	printf("ticks=%lf\n", (double)end - start);
	system("pause");
	return 0;
}