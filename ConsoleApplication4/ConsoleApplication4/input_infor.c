#include "information.h"
void input_infor(struct infor *q) {



	printf("\n个人信息填写：\n");
	printf("\n邮箱：");
	scanf("%s", &q->cla);
	printf("\n姓名：");
	scanf("%s", &q->nam);
	printf("\nQQ：");
	scanf("%d", &q->num);


}