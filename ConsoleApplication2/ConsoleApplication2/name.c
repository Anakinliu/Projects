//#include <stdio.h>
//#include <string.h>
//#define N 3
//struct studen {
//	char name[20];
//	int number;
//	float score;
//}s[N];
//int main(void)
//{
//	int i = 0,j=0;
//
//	
//	 struct studen t;
//	 for (; i < N-1; i++)
//	 {
//		 printf("ÊäÈëµÚ%d¸ö\n",i+1);
//		 scanf("%s%d%f", &s[i].name,&s[i].number,&s[i].score);
//	 }
//	 //xiao dao da pai xu
//	 for (i = 0; i < N - 1; i++)
//	 {
//		 for (j = 0; j < N - i+1 ; j++)
//		 {
//			 if (strcmp(s[j].name, s[j + 1].name) > 0)
//			 {
//				 s[N-1] = s[j];
//				 s[j] = s[j + 1];
//				 s[j + 1] = s[N-1];
//			 }
//
//		 }
//	 }
//	 for (i=0; i < N - 1; i++)
//	 {
//		
//		 printf("\n%s\n%d\n%f\n\n\n", s[i].name, s[i].number, s[i].score);
//	 }
//	 system("pause");
//
//}