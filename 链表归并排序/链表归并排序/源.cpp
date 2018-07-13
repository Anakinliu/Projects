#include <stdio.h>
#include <stdlib.h> 
typedef struct Node {
	int data;
	struct Node * next;
}*LinkNode,Node;

LinkNode Init() {
	return (LinkNode)(malloc(sizeof(Node)));
}

void head(LinkNode s, int data) {
	//s是链表头指针，data是要插入的node中的数据
	LinkNode insert = Init();
	insert->data = data;
	if (s->next == NULL ) {
		s->next = insert;
		insert->next = NULL;
	}
	else {
		insert->next = s->next;
		s->next = insert;
	}
}



void merge(LinkNode a, LinkNode b, LinkNode c) {
	//将两个已经排序的链表a,b放到c
	if (a->next == NULL || b->next == NULL) {
		return;
	}
	LinkNode tempNodea1 = Init();
	
	LinkNode tempNodeb1 = Init();

	//指向第一个节点
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

int main() {
	LinkNode a = Init(2);
	LinkNode b = Init(3);
	LinkNode c = Init(1);
	a->data = 2;
	b->data = 3;
	c->data = 0;

	LinkNode a1 = Init(1);
	LinkNode a2 = Init(1);
	
	a1->data = 2;
	a2->data = 4;

	a->next = a1;
	a1->next = a2;
	
	LinkNode b1 = Init(1);
	LinkNode b2 = Init(1);
	LinkNode b3 = Init(1);

	b->next = b1;

	b1->data = 3;
	b1->next = b2;

	b2->data = 6;
	b2->next = b3;

	b3->data = 9;

	merge(a, b, c);
	return 0;
}