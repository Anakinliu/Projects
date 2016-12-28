//#include <stdio.h>
//#include <stdlib.h>
//
//typedef int ElemType;
//
//typedef struct Node
//{
//	ElemType data;
//	struct Node *next;
//}Node, *LinkedList;
//
////初始化单链表
//LinkedList LinkedListInit()
//{
//	Node *L;
//	L = (Node *)malloc(sizeof(Node));
//	if (L == NULL)
//		printf("Failed to Get memory ");
//	L->next = NULL;
//	return L;
//}
//LinkedList LinkedListCreateByInsertTail(int length) {
//	Node *L;
//	L = LinkedListInit();
//	Node *tail = LinkedListInit();
//	tail = L;
//	int x = 0;
//	for (int i = 0; i < length; i++) {
//		Node *realTail = LinkedListInit();//括号！！！！！！！！！！！！！！！
//		scanf("%d", &x);
//		realTail->data = x;
//		realTail->next = NULL;
//		tail->next = realTail;
//		tail = realTail;
//	}
//	return L;
//}
//LinkedList rever(LinkedList head) {
//	LinkedList p1, p2, p3;
//	if (head == NULL || head->next == NULL) {
//		return head;
//	}
//	p1 = head;
//	p2 = p1->next;
//	while (p2!=NULL)
//	{
//		p3 = p2->next;
//		p2->next = p1;
//		p1 = p2;
//		p2 = p3;
//	}
//	head->next = NULL;
//	head = p1;
//	
//	return head;
//}
//void printRever(LinkedList L) {
//	//头结点的数据不打印
//	while ((L ->next) != NULL) {
//		printf("%d ", L->data);
//		L = L->next;
//	}
//	printf("\n");
//}
//int main() {
//	LinkedList a = LinkedListInit();
//	a = LinkedListCreateByInsertTail(6);
//	a = rever(a);
//	printRever(a);
//	return 0;
//}