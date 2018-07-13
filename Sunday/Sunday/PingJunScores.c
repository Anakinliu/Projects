//#include <stdio.h>
//#define LEN 2
//struct Student {
//	int num;
//	char * name[10];
//	double s1;
//	double s2;
//	double s3;
//};
//int main(void)
//{
//	struct Student S[LEN];
//	double aver[LEN];//存放平均成绩
//	double temp;
//	for (int i = 0; i < LEN ; i++)
//	{
//		scanf("%d%s%lf%lf%lf", &S[i].num, S[i].name, &S[i].s1, &S[i].s2, &S[i].s3);
//		aver[i] = (S[i].s1 + S[i].s2 + S[i].s3) / 3;
//	}
//
//	/*printf("%d\n", S[0].num);
//	printf("%f\n", S[0].s1);*/
//	for (int i = 0; i < LEN; i++) 
//	{
//		printf("%.2lf\n", aver[i]);
//	}
//	for (int i = 0; i < LEN; i++)
//	{
//		for (int j = i; j < LEN; j++)
//		{
//			if (aver[j] < aver[i])
//			{
//				temp = aver[i];
//				aver[i] = aver[j];
//				aver[j] = temp;
//			}
//		}
//	}
//	for (int i = 0; i < LEN; i++)
//	{
//		if ((S[i].s1 + S[i].s2 + S[i].s3) / 3 == aver[LEN - 1])
//		{
//			printf("%s %lf", S[i].name, aver[LEN - 1]);
//		}
//	}
//}