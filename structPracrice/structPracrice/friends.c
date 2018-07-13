///*friend.c--q嵌套结构的例子*/
//#define LEN 20
//#include <stdio.h>
//
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
//	struct guy fellow[2] = {
//		{
//			{"Ewen","Villard"},
//			"apple",
//			"programmer",
//			6000.00
//		},
//		{
//			{"quan","liu"},
//			"la tiao ",
//			"student",
//			-2000.00
//		}
//	};
//	struct guy *him;
//	printf("Adress #1 :%p #2 : %p\n", &fellow[0], &fellow[1]);
//	him = &fellow[0];
//	printf("pointer #1 :%p #2 : %p\n", him, him+1);
//	printf("him->income is  $%.2f;(*him).income is $%.2f\n", him->income, (*him).income);
//	him++;
//	printf("him->favfood is %s;him->handle.last is %s\n", him->favfood, him->handle.last);
//	
//	return 0;
//
//
//}