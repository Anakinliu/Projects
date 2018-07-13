///*funds3.c--把结构作为参数传递*/
//#include <stdio.h>
//#define fundlen 50
//struct funds {
//	char bank[fundlen];
//	double bankfund;
//	char save[fundlen];
//	double savefund;
//};
//
//double sum(struct funds moolah);/*参数是一个结构*/
//int main(void)
//{
//	struct funds stan = {
//		"garlic-meon bank",
//		3024.70,
//		"lucky's saving and loan",
//		9273.11
//	};
//	printf("stan has a total of $%.2f.\n", sum(stan));
//	struct funds cpystan = stan;
//	printf("stan has a total of $%.2f.\n", sum(cpystan));
//
//
//	return 0;
//}
//double sum(struct funds moolah)
//{
//	return (moolah.bankfund + moolah.savefund);
//}