//#include <stdio.h>
//#include <math.h>
//double dis(double x1, double y1, double x2, double y2)
//{
//
//	return (double)sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
//
//}
//double areas(double x1,double y1,double x2,double y2,double x3,double y3)
//{
//	
//	double	a, b, c, s, area;
//	
//	a = dis(x1, y1, x2, y2);
//	b = dis(x1, y1, x3, y3);
//	c = dis(x2, y2, x3, y3);
//	s = (a + b + c) / 2;
//	area = sqrt(s*(s - a)*(s - b)*(s - c));
//	printf("area=%.2lf\n", area);
//	return area;
//}
//
//int main(void)
//{
//	double x1=1, y1=1, x2=4, y2=5, x3=2, y3=9;
//	double s;
//	printf("三角形三点x1=1, y1=1, x2=4, y2=5, x3=2, y3=9\n");
//	/*printf("请输入三点的坐标：");
//	scanf("%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3);*/
//	double areas(x1, y1, x2, y2, x3, y3);
//	s= areas(x1, y1, x2, y2, x3, y3);
//	printf("面积是%.2lf\n", s);
//	system("pause");
//	
//}