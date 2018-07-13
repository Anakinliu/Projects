#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
	char x;
	struct Node *next;
}Node,*PNode;
typedef struct LinkedHead {
	PNode head;
	PNode tail;
}LinkedHead,*LinkedHeadPoint;

void Init(Node **p) {//初始化头节点
	(*p) = (Node *)malloc(sizeof(Node));
	(*p)->next = NULL;
}
void InitH(LinkedHead *LH) {//初始化头指针
	//LH = (LHead *)malloc(sizeof(LHead));
	Node *h;
	Init(&h);
	LH->head = h;
	LH->tail = h->next;
}
void pushQueue(LinkedHead *LH) {
	Node *n;
	Node *p;
	Init(&p);
	p = LH->head;
	char input;
	while ((input = getchar()) != '\n') {
		Init(&n);
		n->x = input;
		p->next = n;
		p = n;
		LH->tail = p;
		//n->next = NULL;
	}
}

char outQueueHead(LinkedHead *LH) {
	if (LH->head->next == NULL) {
		return '\0';
	}
	else if (LH->head->next->next == NULL) {
		char res = LH->head->next->x;
		LH->head->next = NULL;
		LH->tail = LH->head;
		return res;
	}
	else {
		//!--------------------------------------------------------!
		/*Node *p;
		Init(&p);*/
		char res = LH->head->next->x;
		//p = LH->head->next;
		LH->head->next = LH->head->next->next;
		//free(LH->head->next);
		//free(LH->head->next);
		//LH->head = p->next;
		//----------------------------!
		return res;
	}
}

char outQueueTail(LinkedHead *LH) {
	Node *p;
	Init(&p);
	p = LH->head;
	if (p->next== NULL) {
		//空队列
		return '\0';
	}
	char res ;
	while (p != NULL) {
		if (p->next == LH->tail) {
			res = LH->tail->x;
			p->next = NULL;
			free(LH->tail);
			LH->tail = p;
		}
		p = p->next;
	}
	return res;
}

int isPaNumber(LinkedHead *LH) {
	/*Node *p;
	Init(&p);*/
	char head;
	char tail;
	if (LH->head->next == LH->tail) {
		return 1;
	}
	while (LH->head->next != NULL) {
		
		head = outQueueHead(&LH);
		tail = outQueueTail(&LH);
		if (head == tail) {
			continue;
		}
		else {
			return 0;
		}
	}
		return 1;
}
int main() {
	//Node p;
	//Init(&p);
	LinkedHead LH;
	InitH(&LH);
	pushQueue(&LH);
	//outQueueTail(&LH);
	//int x = isPaNumber(&LH);
	int x = 1;


	char head;
	char tail;
	while (LH.head->next != NULL) {
		if (LH.head->next == LH.tail && x == 1) {
			x = 1;
			break;
		}
		head = outQueueHead(&LH);
		tail = outQueueTail(&LH);
		
		if (head == tail) {
			x = 1;
			
		}
		else if (head != tail){
			x = 0;
			break;
		}
		if (LH.head == LH.tail && x == 0) {
			//x = 0;
			break;
		}
	}
	




	//while (LH.head != LH.tail)
	//printf("%c",outQueueTail(&LH));
	//printf("%c", outQueueHead(&LH));
	

	/*printf("%c", outQueueTail(&LH));
	printf("%c", outQueueTail(&LH));
	printf("%c", outQueueTail(&LH));*/
	printf("%d", x);
	return 0;
}





