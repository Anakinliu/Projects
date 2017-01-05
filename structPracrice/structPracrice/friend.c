///*friend.c--q嵌套结构的例子*/
//#define LEN 20
//#include <stdio.h>
//const char *msgs[5] =
//{
//	"      thank you for the wonderful evening,",
//	"You certainly prove that a",
//	"is a spectial kind of guy. We must get together",
//	"over a delicious",
//	" and have a few laughs"
//};
//struct names {  //first struct
//	char first[LEN];
//	char last[LEN];
//};
//struct guy {  //second struct
//	struct names handle;  //nest a struct.
//	char favfood[LEN];
//	char job[LEN];
//	float income;
//};
//int main(void)
//{
//	struct guy fellow;    //build a variable.
//	printf("Enter first name.\n");
//	gets(fellow.handle.first);
//	printf("Enter last name.\n");
//	gets(fellow.handle.last);
//	printf("Enter favorite food.\n");
//	gets(fellow.favfood);
//	printf("Enter job.\n");
//	gets(fellow.job);
//	printf("Enter income.\n");
//	while ((scanf("%d", &fellow.income) )== 0)
//		printf("Error,please enter again.\n");
//
//
//	printf("Dear %s, \n\n", fellow.handle.first);
//	printf("%s%s.\n", msgs[0], fellow.handle.first);
//	printf("%s%s\n", msgs[1], fellow.job);
//	printf("%s\n", msgs[2]);
//	printf("%s%s%s", msgs[3], fellow.favfood, msgs[4]);
//	if (fellow.income > 15000)
//		printf("!!");
//	else if (fellow.income > 7500)
//		printf("!");
//	else
//		puts(".");
//	printf("\n%40s%s\n", " ", "See you soon, ");
//	printf("%40s%s\n", " ", "Shalala");
//	return 0;
//
//
//
//
//}