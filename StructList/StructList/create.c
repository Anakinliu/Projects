//#include <stdio.h>
//#include <stdlib.h>
//
//typedef int ElemType;
//
//typedef struct Node
//{
//	ElemType data;
//	struct Node *next;
//}Node,*LinkedList;
//LinkedList LinkedListInit()
//{
//	Node *L;
//	L = (Node *)malloc(sizeof(Node));
//	if (L == NULL)
//		printf("Failed to Get memory ");
//	L->next = NULL;
//	return L;
//}
//LinkedList hebing(LinkedList La, LinkedList Lb, LinkedList Lc)
//{
//	Node *a = LinkedListInit();
//	Node *b = LinkedListInit();
//	a = La->next;
//	b = Lb->next;
//	//a,b代替La，Lb
//	Node *tail = LinkedListInit();
//	tail = Lc;
//	while (a != NULL&&b != NULL)
//	{
//		Node *realTail = LinkedListInit();
//		if (a->data < b->data)
//		{
//			//括号！！！！！！！！！！！！！！！
//			realTail->data = a->data;
//			realTail->next = NULL;
//			tail->next = realTail;
//			tail = realTail;
//			a = a->next;
//		}
//		else {
//			realTail->data = b->data;
//			realTail->next = NULL;
//			tail->next = realTail;
//			tail = realTail;
//			b = b->next;
//		}
//	}
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
//	return Lc;
//}
////初始化单链表
//
//
////头插法建立单链表
//LinkedList LinkedListCreateByInsertHead(int length)
//{
//	Node *L;
//	L = LinkedListInit();//申请空间
//	L->next = NULL;//初始化空链表
//
//	ElemType x;//data
//	int i = 0;
//	for (;i<length;i++)
//	{
//		scanf("%d", &x);
//		Node *p;
//		p = (Node *)malloc(sizeof(Node));
//		p->data = x;
//		p->next = L->next;
//		L->next = p;
//	}
//	return L;//返回表头
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
//	LinkedList c;
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
//		
//		
//		return hebing(head, slow, c);
//	}
//}
//
//int main()
//{
//	LinkedList La,Lb,Lc;
//	int LaLength = 0;
//	int LbLength = 0;
//	//-------------
//	//scanf("%d", &LaLength);
//	//La = LinkedListCreateByInsertTail(4);
//	//scanf("%d", &LbLength);
//	Lb = LinkedListCreateByInsertTail(5);
//	//---------------
//	mergeSort(Lb);
//	//Lc = LinkedListInit();
//	/*hebing(La, Lb, Lc);
//	while ((Lc =Lc->next)!= NULL) {
//		printf("%d ", Lc->data);
//	
//	}*/
//	return 0;
//}