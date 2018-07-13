#include <stdio.h>
#include <stdlib.h>
typedef struct Node 
{
	int data;
	struct Node *next;
}Node, *ListPointer;

ListPointer creat()
{
	Node *L;
	L = (Node *)malloc(sizeof(Node));
	L->next = NULL;
	return L;
}
ListPointer ListCreated(int length)
{
	Node *L;
	L = (Node *)malloc(sizeof(Node));
	L->next = NULL;
	Node *r;
	r = L;
	int x;
	int i = 0;
	while (i < length)
	{
		scanf("%d", &x);
		Node *p;
		p = (Node *)malloc(sizeof(Node));
		p->data = x;
		r->next = p;
		r = p;
		i++;
	}
	r->next = NULL;
	L->data = length;
	return L;
}
int main()
{
	int counts;
	//int replaceIndex;
	int insertNumber;
	scanf("%d", &counts);
	Node *p = ListCreated(counts);
	//Node *a = p;
	//Node *pre = p;
//	scanf("%d", &replaceIndex);
    scanf("%d", &insertNumber);
	//for (int i = 1; i < replaceIndex; i++)
	//{
	//	pre = pre->next;
	//}
	//pre->next = pre->next->next;
	/*Node *s;
	s = (Node *)malloc(sizeof(Node));
	s->data = insertNumber;
	s->next = pre->next;
	pre->next = s;*/
	//p->data--;
	Node *b = p;
	for (int i = 0; i < p->data ; i++)
	{
		b = b->next;
		if (b->data == insertNumber)
		{
			printf("%d", i + 1);
		}
		//printf("%d ", b->data);
	}
}