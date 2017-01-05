//#include <stdio.h>
//#include <stdlib.h>
//#define N 3
//struct date 
//{
//	int month;
//	int year;
//	int day;
//};
//int main()
//{
//	struct date d;
//	int sum=0;
//	printf("\ninput date\n");
//	scanf("%d%d%d", &d.year, &d.month, &d.day);
//
//
//	switch (d.month)
//	{
//	case 1:sum = 0; break;
//	case 2:sum = 31; break;
//	case 3:sum = 59; break;
//	case 4:sum = 90; break;
//	case 5:sum = 120; break;
//	case 6:sum = 151; break;
//	case 7:sum = 181; break;
//	case 8:sum = 212; break;
//	case 9:sum = 243; break;
//	case 10:sum = 273; break;
//	case 11:sum = 314; break;
//	case 12:sum = 334; break;
//	default:printf("date error"); break;
//
//	}
//	sum = sum + d.day;
//	if ((d.year % 400 == 0 || (d.year % 4 == 0 && d.year % 100 != 0)) && d.month > 2)
//	{
//		sum = sum + 1;
//	}
//	printf("It's %dth day.", sum);
//	system("pause");
//}