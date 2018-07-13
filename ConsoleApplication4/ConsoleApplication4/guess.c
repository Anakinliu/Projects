#include "information.h"
int caiQ(int *Q)
{
	int comput;
	int chara;
	int player;
	int i = 0;
	for(;i<4; i++)
	{
		srand((unsigned)time(0));
		comput = (int)rand() % 3;
		
		//电脑出0是剪刀，1是石头，2是布。
		printf("\n请选择:\n");
		printf("1.剪刀  2.石头  3.布  4.退出！\n");
		//1 49
		printf("\n请出拳:");
		if (i == 3)
		{
			printf("\n----哦，没机会了----\n");
			return 0;
		}
		scanf("%d%c", &chara);
		//getchar();
		printf("%d", chara);
		switch (chara)
		{
		
		
		case 1:player = 0; break;
		
		case 2:player = 2; break;
		
		case 3:player = 1; break;
		
		case 4:return 0;
		default:printf("错误，重输\n");
		}
		if (player+comput  == 2)
		{
			(*Q)++;
			printf("你赢了！还来不来？\n");
		}
		else
		{
			
			printf("啊哦，你输了，再试一次？\n");
		}
		
	}
	
}