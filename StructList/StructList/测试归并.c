//#include <stdio.h>
//#include <stdlib.h>
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
//	for (; i<length; i++)
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
////尾插法
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
//
//LinkedList merge(LinkedList head1, LinkedList head2)
//{
//	if (head1 == NULL)return head2;
//	if (head2 == NULL)return head1;
//	LinkedList res, p;
//	if (head1->data < head2->data)
//	{
//		res = head1; head1 = head1->next;
//	}
//	else { res = head2; head2 = head2->next; }
//	p = res;
//
//	while (head1 != NULL && head2 != NULL)
//	{
//		if (head1->data < head2->data)
//		{
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
//	if (head1 != NULL)p->next = head1;
//	else if (head2 != NULL)p->next = head2;
//	return res;
//}
//LinkedList sortList(LinkedList head) {
//	// IMPORTANT: Please reset any member data you declared, as
//	// the same Solution instance will be reused for each test case.
//	//链表归并排序
//	if (head == NULL || head->next == NULL)return head;
//	else
//	{
//		//快慢指针找到中间节点
//		LinkedList fast = head, slow = head;
//		while (fast->next != NULL && fast->next->next != NULL)
//		{
//			fast = fast->next->next;
//			slow = slow->next;
//		}
//		fast = slow;
//		slow = slow->next;
//		fast->next = NULL;
//		fast = sortList(head);//前半段排序
//		slow = sortList(slow);//后半段排序
//		return merge(fast, slow);
//	}
//
//}
// merge two sorted list to one
//int main() {
//	LinkedList La, Lb, Lc;
//	int LaLength = 0;
//	int LbLength = 0;
//	//-------------
//	//scanf("%d", &LaLength);
//	La = LinkedListCreateByInsertTail(5);
//	//scanf("%d", &LbLength);
//	Lb = LinkedListCreateByInsertTail(4);
//	//---------------
//	Lc = LinkedListInit();
//	SimpleCombine(La, Lb, Lc);
//	sortList(Lc);
//	//DeleteDuplicate(Lc);
//	//printf("%d", Lc->next->data);
//	while ((Lc = Lc->next) != NULL) {
//		printf("%d ", Lc->data);
//	}
//	return 0;
//}