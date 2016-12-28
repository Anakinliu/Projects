#include <stdio.h>
#include <stdlib.h>
typedef struct poly {
	int a;//系数
	int b;//指数
	struct poly *next;
}poly, *ppoly;
void InitPoly(poly *s) {
	s = (ppoly)malloc(sizeof(poly));
	s->next = NULL;
	s->a = 0;
	s->b = 0;
}

void CreatPoly(ppoly s) {
	int a, b;
	ppoly p;
	InitPoly(p);
	p = s;
	while (1) {
		scanf("%d%d", &a, &b);
		if (a == 0 || b == 0) {
			break;
		}
		ppoly r;
		InitPoly(r);
		r->a = a;
		r->b = b;
		p->next = r;
		p = r;
	}
}
void printit(ppoly s) {
	s = s->next;
	while (s != NULL) {
		printf("%d  %d\n", s->a, s->b);
		s = s->next;
	}
}
ppoly Add(ppoly a, ppoly b, ppoly c) {
	ppoly aa;
	InitPoly(aa);
	ppoly bb;
	InitPoly(bb);
	aa = a->next;
	bb = b->next;
	ppoly p;//
	InitPoly(p);//
	p = c;//
	ppoly r;//
	while (aa != NULL&&bb != NULL) {
		while (bb != NULL) {
			if (aa->b == bb->b) {
				InitPoly(r);
				r->a = aa->a + bb->b;//系数相加
				r->b = aa->b;//指数不变
			}
			bb = bb->next;
		}
		p->next = r;
		p = r;
		aa = aa->next;
	}
	return p;
}
int main() {
	poly s;
	InitPoly(&s);
	CreatPoly(&s);
	return 0;
}