#include <stdio.h>
#include <stdlib.h> 
typedef struct Node {
	int data;
	struct Node * next;
}*LinkNode, Node;

LinkNode Init(int l) {
	LinkNode s = (LinkNode)(malloc(sizeof(Node) * l));
	if (l == 1)
		s->next = NULL;
	return s;
}

void head(LinkNode s, int data) {
	//s是链表头指针，data是要插入的node中的数据
	LinkNode insert = Init(1);
	insert->data = data;
	if (s->next == NULL || s->data == 0) {
		s->next = insert;
		insert->next = NULL;
		s->data++;
	}
	else {
		insert->next = s->next;
		s->next = insert;
		s->data++;
	}
}

void tail(LinkNode s, int data) {
	//s是链表头指针，data是要插入的node中的数据
	LinkNode insert = Init(1);
	insert->data = data;

	LinkNode tempNode1 = Init(1);

	LinkNode tempNode2 = Init(1);

	if (s->next == NULL || s->data == 0) {
		s->next = insert;
		insert->next = NULL;
		s->data++;
	}
	else {
		tempNode1 = s->next;
		tempNode2 = tempNode1->next;
		while (tempNode2 != NULL) {
			tempNode2 = tempNode1->next;
			tempNode1 = tempNode2;
		}
		tempNode1->next = insert;
		insert->next = NULL;
		s->data++;
	}
}

int min(int a, int b) {
	if (a > b) {
		return 1;
	}
	else {
		return 0;
	}
}

void merge(LinkNode a, LinkNode b, LinkNode c) {
	//将两个已经排序的链表a,b放到c
	if (a->next == NULL || b->next == NULL) {
		return;
	}
	LinkNode tempNodea1 = Init(1);

	LinkNode tempNodeb1 = Init(1);
	tempNodea1 = a->next;
	tempNodeb1 = b->next;

	while (tempNodea1 != NULL && tempNodeb1 != NULL) {
		if (tempNodea1->data < tempNodeb1->data) {
			head(c, tempNodea1->data);
			tempNodea1 = tempNodea1->next;
		}
		else {
			head(c, tempNodeb1->data);
			tempNodeb1 = tempNodeb1->next;
		}
	}
	while (tempNodea1 != NULL) {
		head(c, tempNodea1->data);
		tempNodea1 = tempNodea1->next;
	}
	while (tempNodeb1 != NULL) {
		head(c, tempNodeb1->data);
		tempNodeb1 = tempNodeb1->next;
	}
}
void sort(LinkNode a, LinkNode b, LinkNode c) {
	//s是一个乱序的原始链表

}
int main() {
	LinkNode a = Init(3);
	LinkNode b = Init(5);
	LinkNode c = Init(1);
	a->data = 3;
	b->data = 5;
	c->data = 0;

	LinkNode a1 = Init(1);
	LinkNode a2 = Init(1);
	LinkNode a3 = Init(1);
	a1->data = 2;
	a2->data = 4;
	a3->data = 3;

	a->next = a1;
	a1->next = a2;
	a2->next = a3;

	LinkNode b1 = Init(1);
	LinkNode b2 = Init(1);
	LinkNode b3 = Init(1);
	LinkNode b4 = Init(1);
	LinkNode b5 = Init(1);

	b->next = b1;

	b1->data = 7;
	b1->next = b2;

	b2->data = 6;
	b2->next = b3;

	b3->data = 9;
	b3->next = b4;

	b4->data = 8;
	b4->next = b5;

	b5->data = 10;

	merge(a, b, c);
	return 0;
}