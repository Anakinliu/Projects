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
//LinkedList merge(LinkedList head1, LinkedList head2) {//简单合并
//	if (head1 == NULL) {
//		return head2;
//	}
//	if (head2 == NULL) {
//		return head1;
//	}
//	LinkedList res, p;
//	if (head1->data < head2->data) {
//		res = head1;
//		head1 = head1->next;
//	}
//	else {
//		res = head2;
//		head2 = head2->next;
//	}
//	p = res;
//
//	while (head1 != NULL && head2 != NULL) {
//		if (head1->data < head2->data) {
//			p->next = head1;
//			head1 = head1->next;
//		}
//		else
//		{
//			p->next = head2;
//			head2 = head2->next;
//		}
//		p = p->next;
//	}
//	if (head1 != NULL) {
//		p->next = head1;
//	}
//	else if (head2 != NULL) {
//		p->next = head2;
//	}
//	return res;
//}
//
//LinkedList LinkedListInit()
//{
//	Node *L;
//	L = (Node *)malloc(sizeof(Node));
//	if (L == NULL)
//		printf("Failed to Get memory ");
//	L->next = NULL;
//	return L;
//}
//
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
//
//LinkedList mergeSort(LinkedList head) {
//
//	if (head == NULL || head->next == NULL) {
//		return head;
//	}
//	else {
//		LinkedList fast = head;
//		LinkedList slow = head;
//		while (fast->next != NULL && fast->next->next != NULL) {
//			fast = fast->next->next;
//			slow = slow->next;
//		}
//		fast = slow;
//		slow = slow->next;
//		fast->next = NULL;
//		fast = mergeSort(head);
//		slow = mergeSort(slow);
//		return merge(fast, slow);
//	}
//}
//
//void DeleteFindPre(LinkedList Lc, LinkedList p) {
//	LinkedList pre;
//	pre = Lc->next;
//	while (pre != NULL) {
//		if (pre->next == p) {
//			pre->next = pre->next->next;
//		}
//		pre = pre->next;
//	}
//	//pre->next = pre->next->next;
//}
//
//void DeleteDuplicate(LinkedList Lc) {
//	LinkedList c = LinkedListInit();
//	LinkedList cPre = LinkedListInit();
//	LinkedList p = LinkedListInit();
//	cPre = Lc;
//	int Lclength = 10;
//	int duplicate = 0;
//	c = Lc->next;
//	for (int i = 0; i < 6; i++) {//注意i的最大值
//		duplicate = c->data;
//		p = c->next;
//		while (p != NULL) {
//			if (p->data == duplicate) {
//				DeleteFindPre(Lc, p);
//				//p->next = p->next->next;
//			}
//			p = p->next;
//		}
//		c = c->next;
//	}
//
//}
//
//void printList(LinkedList L) {
//	while ((L = L->next) != NULL) {
//		printf("%d ", L->data);
//	}
//}
//void SimpleCombine(LinkedList La, LinkedList Lb, LinkedList Lc)
//{
//	Node *a = LinkedListInit();
//	Node *b = LinkedListInit();
//	a = La->next;
//	b = Lb->next;
//	//a,b代替La，Lb
//	Node *tail = LinkedListInit();
//	tail = Lc;
//
//	while (a != NULL)
//	{
//		Node *realTail = LinkedListInit();
//		realTail->data = a->data;
//		realTail->next = NULL;
//		tail->next = realTail;
//		tail = realTail;
//		a = a->next;
//	}
//	while (b != NULL)
//	{
//		Node *realTail = LinkedListInit();
//		realTail->data = b->data;
//		realTail->next = NULL;
//		tail->next = realTail;
//		tail = realTail;
//		b = b->next;
//	}
//
//}
//int main()
//{
//	LinkedList La, Lb, Lc;
//	La = LinkedListCreateByInsertTail(5);
//	Lb = LinkedListCreateByInsertTail(4);
//	Lc = LinkedListInit();
//	SimpleCombine(La,Lb,Lc);
//	//DeleteDuplicate(Lc);
//	mergeSort(Lc);
//	printList(Lc);
//	return 0;
//}