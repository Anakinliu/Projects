#include<stdio.h>
#include<stdlib.h>
typedef struct
{
	int *top;
	int *base;
	int listsize;
}stacklist;
void initstack(stacklist &s)
{
	s.base = (int *)malloc(sizeof(int) * 100);
	s.top = s.base;
	s.listsize = 100;
}
void pushstack(stacklist &s, int e)
{
	if (s.top == s.base + s.listsize)
	{
		s.base = (int *)realloc(s.base, (s.listsize + 20) * sizeof(int));
		s.top = s.base + s.listsize;
		s.listsize += 20;
	}
	else
		*s.top = e;
	s.top++;
}
void popstack(stacklist &s, int &e)
{
	if (s.top == s.base)
		printf("Õ»Îª¿Õ£¡\n");
	else
		s.top--;
	e = *s.top;

}
void creatstack(stacklist &s, int n)
{
	int i;
	int e;
	initstack(s);
	for (i = 0; i<n; i++)
	{
		scanf("%d", &e);
		pushstack(s, e);
	}



}

void printstack(stacklist &s, int e)
{

	while (s.base != s.top)
	{
		popstack(s, e);
		printf("%d ", e);
	}
	printf("\n");
}



int main()
{
	int e;
	int n;
	stacklist s;
	initstack(s);
	scanf("%d", &n);
	while (n)
	{
		e = n % 2;
		pushstack(s, e);
		n = n / 2;
	}
	printstack(s, e);
	return 0;
}