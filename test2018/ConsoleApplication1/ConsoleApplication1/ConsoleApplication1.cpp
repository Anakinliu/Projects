// ConsoleApplication1.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

void t1(int *xp, int *yp) 
{
	*xp += *yp;
	*xp += *yp;
}

void t2(int *xp, int *yp)
{
	*xp += 2 * *yp;
}

int main()
{
	printf("hello 2018\n");
	int x = 6;
	int y = 6;
	int *xp = &x;
	int *yp = &y;
	t1(xp, yp);
	printf("x=%d y=%d\n", x, y);
	x = 6;
	y = 6;
	printf("%d %d\n", *xp, *yp);
	t2(xp, yp);
	printf("x=%d y=%d\n", x, y);
    return 0;
}

