#include<stdio.h>
#include<string.h>
#define LEN 10
struct student
{
	int number;
	char name[30];
	int score1, score2, score3;
	int aver;
};

int main()
{
	struct student s[LEN];
	int i, j, max , k;
	for (i = 0; i<LEN; i++)
	{
		scanf("%d%s%d%d%d", &s[i].number, s[i].name, &s[i].score1, &s[i].score2, &s[i].score3);

		//%d%d没有空格！！！

		s[i].aver = (s[i].score1 + s[i].score2 + s[i].score3) / 3;
	}
	max = s[0].aver;
	//初始化在这里
	for (j = 0; j<LEN; j++)
	{
		if (max<s[j].aver)
		{
			max = s[j].aver;
			k = j;
		}
	}
	for (i = 0; i<LEN; i++)
	{
		printf("%d\n", s[i].aver);
	}
	printf("%s %d", s[k].name, s[k].aver);
	return 0;
}


