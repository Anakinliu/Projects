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
		
		//���Գ�0�Ǽ�����1��ʯͷ��2�ǲ���
		printf("\n��ѡ��:\n");
		printf("1.����  2.ʯͷ  3.��  4.�˳���\n");
		//1 49
		printf("\n���ȭ:");
		if (i == 3)
		{
			printf("\n----Ŷ��û������----\n");
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
		default:printf("��������\n");
		}
		if (player+comput  == 2)
		{
			(*Q)++;
			printf("��Ӯ�ˣ�����������\n");
		}
		else
		{
			
			printf("��Ŷ�������ˣ�����һ�Σ�\n");
		}
		
	}
	
}