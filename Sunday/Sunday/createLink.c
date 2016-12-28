#include <stdio.h>
#include <stdlib.h>
typedef struct {
	int data;
	struct LNode *next;
}LNode;

void CreateLink(LNode *head) {
	LNode *s;
	int x;
	scanf("%d", &x);
	s = (LNode *)malloc(sizeof(LNode));
	s->data = x;
	//s->next = head->next;
	head->next = s;
	//scanf("%d", &x);
}
int main() {
	LNode *x;//Õ∑÷∏’Î
	x = (LNode *)malloc(sizeof(LNode));
	CreateLink(x);
}