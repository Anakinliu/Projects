#include "information.h"
void turn()
{
	int n;
	srand((unsigned)time(0));
	n = (int)rand() % 6;
	printf("随机决定宿舍六个人中谁去拿外卖\n");
	printf("这次%d号位去\n", n + 1);
	return 0;

}