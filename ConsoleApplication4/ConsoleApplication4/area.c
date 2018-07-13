#include "information.h"
double dis(int x1, int y1, int x2, int y2)
{

	return (double)sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));

}

void san(int *score)
{
	srand((unsigned)time(0));
	
	int x1, y1, x2, y2, x3, y3;
	double	a, b, c, s, area, res;
	/*x1 = 5;
	x2 = 7;
	x3 = 9;
	y1 = 1;
	y2 = 2;
	y3 = 9;*/
	//jie guo 2
	x1= (int)rand() % 10;
	y1 = (int)rand() % 10;
	x2 = (int)rand() % 10;
	y2 = (int)rand() % 10;
	x3 = (int)rand() % 10;
	y3 = (int)rand() % 10;

	
	printf("\n在XOY内有三点坐标：");
	printf("(%d,%d),(%d,%d),(%d,%d),三点围成的面积是：\n\n", 
		x1, y1, x2, y2, x3, y3);
	printf("答案保留两位小数:");
	
	a = dis(x1, y1, x2, y2);
	b = dis(x1, y1, x3, y3);
	c = dis(x2, y2, x3, y3);
	
	s = (a + b + c) / 2;
	area = sqrt(s*(s - a)*(s - b)*(s - c));
	printf("%lf", area);
	//area==10.5
	scanf("%lf", &res);
	if (res-area> 1e-6||area-res>1e-6)
	{
		
		printf("\n这是小学题目……\n");
	}
	else
		*score = *score+1;
	
	return 0;
}

