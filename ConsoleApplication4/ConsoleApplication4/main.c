#include "information.h"

int main(void)
{
	int luck;
	int *Q = &luck;
	int sel;//�û����ı��
	int error=0;//�����ŵĴ���
	char v[10] ="!======!";

	printf("%15s��ʼ%-30s",v,v);
	
	struct infor *p;
	p = &person;
d1:if (error == 3)
	{
		printf("�㿴������仰��");
		system("pause");
		return 0;
	}
  
d2:	if (*Q >= 2)
	printf("������\n");

   printf("\n#--------------------------------#\n");
	printf("1.����Բ�ȭ----------------------\n");
	printf("2.����������------------------\n");
	printf("3.˭ȥ������-----------------------\n");
	printf("4.��������------------------------\n");
	printf("#--------------------------------#\n");
		printf("�������֣�");
	scanf("%d", &sel);
	while(sel)
	switch (sel)
	{
	case 1:caiQ(Q); goto d2; 
	case 2:yang(); goto d2; 
	case 3:turn(); goto d2;
	case 4:return 0;
	default:printf("\n�밴��Ӧ���!\n"); error++; goto d1;
	}
	
	system("pause");
}

