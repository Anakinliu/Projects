//#include <stdio.h>
//#include <stdlib.h>
//typedef struct poly {
//	int a;//ϵ��
//	int b;//ָ��
//	struct poly *next;
//}poly, *ppoly;
//ppoly InitPoly() {
//	ppoly s;
//	s = (ppoly)malloc(sizeof(poly));
//	s->next = NULL;
//	s->a = 0;
//	s->b = 0;
//	return s;
//}
//
//void LinkedListCreateByInsertTail(ppoly L) {
//	poly *tail = InitPoly();
//	tail = L;
//	int a = 1;
//	int b = 1;
//	scanf("%d%d", &a, &b);
//	while (a != 0 || b != 0) {
//		
//		poly *realTail = InitPoly();//���ţ�����������������������������
//		realTail->a = a;
//		realTail->b = b;
//		realTail->next = NULL;
//		tail->next = realTail;
//		tail = realTail;
//		scanf("%d%d", &a, &b);
//	}
//}
//
//void printit(ppoly s) {
//	s = s->next;
//	while (s != NULL) {
//		printf("%dx%d ", s->a, s->b);
//		s = s->next;
//	}
//}
//int Have(ppoly aa, ppoly bpoly) {//bb�е�ĳһ���ָ����aa��û��
//	ppoly aaa = InitPoly();
//	aaa = aa;
//	int x = bpoly->b;//ָ��
//	while (aaa != NULL) {
//		if (aaa->b == x) {
//			return 1;//��
//		}
//		aaa = aaa->next;
//	}
//	if (aaa == NULL) {
//		return 0;
//	}
//	return 0;
//}
//ppoly addBeforeOneEle(ppoly c, ppoly b, ppoly a) {//��c����ʽ�У�bǰ����a
//	ppoly cc = InitPoly();
//	cc = c;
//	
//	while (cc ->next!= NULL) {
//		if (cc->next->b == b->b) {
//			a->next = cc->next;
//			cc->next = a;
//			break;
//		}
//		cc = cc->next;
//	}
//	return cc;
//}
//ppoly AddXX(ppoly c, ppoly xx) {//����С˳�����xx
//	ppoly cc = InitPoly();
//	cc = c;
//	c = c->next;
//	
//	while (c->next != NULL) {
//		if ((c->b) > (xx->b) ) {
//			xx->next = c->next;
//			c->next = xx;
//			break;
//		}
//		else if ((xx->b) > (c->b)) {
//			//----------------------
//			cc = addBeforeOneEle(cc, c, xx);
//			break;
//		}
//		c = c->next;
//	}
//	return cc;
//}
//void Add(ppoly a, ppoly b, ppoly c) {
//	ppoly aa = InitPoly();
//	ppoly bb = InitPoly();
//	ppoly xx = InitPoly();
//	
//	aa = a->next;
//	bb = b->next;
//	ppoly p = InitPoly();//
//	p = c;//
//	int is = 0;
//	while (aa != NULL) {
//		is = 0;
//		ppoly r = InitPoly();
//		while (bb != NULL) {
//			if (aa->b == bb->b) {
//				r->a = aa->a + bb->a;//ϵ�����
//				r->b = aa->b;//ָ������
//				is = 1;
//			}
//			bb = bb->next;
//		}
//		//if (is == 0) {
//		
//		//}
//		if (is) {
//			p->next = r;
//			p = r;
//		}
//		else {//a�е�b��û��
//			r->a = aa->a;
//			r->b = aa->b;
//			p->next = aa;
//			p = aa;
//		}
//		aa = aa->next;
//		bb = b->next;
//	}
//	xx = b->next;
//	while (xx != NULL) {
//		if (Have(c, xx) == 0) {
//			//c��û������ָ������
//			c = AddXX(c, xx);
//		}
//		xx = xx->next;
//	}
//}
//
//int main() {
//	ppoly a = InitPoly();
//	ppoly b = InitPoly();
//	ppoly c = InitPoly();
//	LinkedListCreateByInsertTail(a);
//	LinkedListCreateByInsertTail(b);
//	Add(a, b, c);
//	printit(c);
//
//
//	return 0;
//}