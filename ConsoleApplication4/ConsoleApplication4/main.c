#include "information.h"

int main(void)
{
	int luck;
	int *Q = &luck;
	int sel;//用户按的编号
	int error=0;//按错编号的次数
	char v[10] ="!======!";

	printf("%15s开始%-30s",v,v);
	
	struct infor *p;
	p = &person;
d1:if (error == 3)
	{
		printf("你看不到这句话吗？");
		system("pause");
		return 0;
	}
  
d2:	if (*Q >= 2)
	printf("厉害！\n");

   printf("\n#--------------------------------#\n");
	printf("1.与电脑猜拳----------------------\n");
	printf("2.填补杨辉三角形------------------\n");
	printf("3.谁去拿外卖-----------------------\n");
	printf("4.结束程序------------------------\n");
	printf("#--------------------------------#\n");
		printf("输入数字：");
	scanf("%d", &sel);
	while(sel)
	switch (sel)
	{
	case 1:caiQ(Q); goto d2; 
	case 2:yang(); goto d2; 
	case 3:turn(); goto d2;
	case 4:return 0;
	default:printf("\n请按对应编号!\n"); error++; goto d1;
	}
	
	system("pause");
}

