#include<stdio.h>
#include<malloc.h>

typedef struct poly {
	int a;
	struct poly *next;
}poly, *spoly;

void creatpoly1(spoly &s)
{
	int m = 1;
	poly *r, *p;
	s = (spoly)malloc(sizeof(poly));
	s->next = NULL;
	while (m != 7)
	{
		r = s;
		scanf("%d", &m);
		p = (spoly)malloc(sizeof(poly));
		p->a = m;
		if (r->next == NULL)
		{
			p->next = r->next;
			r->next = p;
			break;
		}
		while (p->a>r->next->a)
		{
			if (r->next == NULL)
			{
				p->next = r->next;
				r->next = p;
				break;
			}
			r = r->next;
		}
		if (p->a<r->next->a)
		{
			p->next = r->next;
			r->next = p;
		}
	}
}

void creatpoly2(spoly &s)
{
	int m = 1;
	poly *r, *p;
	s = (spoly)malloc(sizeof(poly));
	s->next = NULL;
	while (m != 6)
	{
		r = s;
		scanf("%d", &m);
		p = (spoly)malloc(sizeof(poly));
		p->a = m;
		if (r->next == NULL)
		{
			p->next = r->next;
			r->next = p;
			break;
		}
		while (p->a>r->next->a)
		{
			if (r->next == NULL)
			{
				p->next = r->next;
				r->next = p;
				break;
			}
			r = r->next;
		}
		if (p->a<r->next->a)
		{
			p->next = r->next;
			r->next = p;
		}
	}
}

void addpoly(spoly s1, spoly s2, spoly &s3)
{
	poly *p, *q, *s, *r;
	s3 = (spoly)malloc(sizeof(poly));
	s3->next = NULL;
	r = s3;
	p = s1->next;
	q = s2->next;
	while (p&&q)
	{
		if (p->a<q->a)
		{
			s = (spoly)malloc(sizeof(poly));
			s->a = p->a;
			s->next = r->next;
			r->next = s;
			r = s;
			p = p->next;
		}
		else
		{
			if (p->a>q->a)
			{
				s = (spoly)malloc(sizeof(poly));
				s->a = q->a;
				s->next = r->next;
				r->next = s;
				r = s;
				q = q->next;
			}
			else
			{
				s = (spoly)malloc(sizeof(poly));
				s->a = q->a;
				s->next = r->next;
				r->next = s;
				r = s;
				q = q->next;
				p = p->next;
			}
		}
	}
	while (p)
	{
		s = (spoly)malloc(sizeof(poly));
		s->a = p->a;
		s->next = r->next;
		r->next = s;
		r = s;
		p = p->next;
	}
	while (q)
	{
		s = (spoly)malloc(sizeof(poly));
		s->a = q->a;
		s->next = r->next;
		r->next = s;
		r = s;
		q = q->next;
	}
}

void printpoly(spoly s)
{
	poly *p;
	p = s->next;
	while (p)
	{
		printf("%d ", p->a);
		p = p->next;
	}
	printf("\n");
}

int main()
{
	spoly s1, s2, s3;
	creatpoly1(s1);
	creatpoly2(s2);
	addpoly(s1, s2, s3);
	printpoly(s3);
	return 0;
}
