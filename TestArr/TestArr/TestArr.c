//#include <stdio.h>
//int main(void)
//{
//	int zippo[4][2] = { {1,2},{3,4},{5,6},{7,8} };
//	printf("zippo = %d\n",* *(zippo+1));
//
//	printf("&zippo[0] = %d\n",&zippo[0]);
//
//	printf("zippo[0] = %d\n", *(zippo[0]+1));
//
//	printf("&zippo[0][0] = %p\n", &zippo[0][0]);
//
//	if (zippo == zippo[0]) {
//		printf("\ntrue\n");
//	}
//
//	printf("下面输出说明zippo与zippo[0]都是指针");
//	printf("zippo = %d\n", zippo);
//
//	printf("zippo[0] = %d\n", zippo[0]);
//
//	int x = 9;
//	int *p = &x;
//	p = &zippo[1][1]; 
//	//p = zippo[1][1]会出错
//	p = zippo[1];
//	//p = &zippo[1]会出错，zippo[1]是地址
//	printf("p = %d", p);
//
//
//	printf("\n%p\n", *(zippo + 2));
//	printf("%p\n", &zippo[2]outlook@@@);
//
//}