#include <stdio.h>
float a = 0, b = 0;
void yuns(char c,float *r)
{
	if (c == '+')
		*r = a + b;
	if (c == '-')
		*r = a - b;
	if (c == '*')
		*r = a * b;
	if (c == '/')
		*r = a / b;
}
int m()

{
	int i, j;
	float r;
	char x[99];
	gets(x);
	for (i = 1; i < 99; i = i + 2)
	{

	}

	/*float r=0;
	float *p;
	p = &r;
	char c;
	printf("      ji suan qi      \n");
	scanf("%f", &a);
	scanf("%c", &c);
	scanf("%f", &b);
	getchar();
	yuns(c, p);

	a = r;

	scanf("%c", &c);
	scanf("%f", &b);
	yuns(c, p);
	printf("%f", r);




	getchar();


	*/
	getch();




}