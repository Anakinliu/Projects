// 数据结构复习.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "struct.h" // 我自己的头文件

/*
	头插入法对将一个Node指针插入一个Node链表
	para@head: Node链表的头指针
	para@node: 待插入的Node指针
*/
void headInsert(Node* head, Node* node) {
	node->next = head->next;
	head->next = node;
}

int main()
{
	head->id = 0;
	int i = 0;
	while (i < 100) {
		// 必须使用指针类型, 否则会一直使用同一个node, 造成循环
		Node* node = (Node*)(malloc(sizeof(Node)));
		node->id = i;
		headInsert(head, node);
		i++;
	}
	Node node = *(head->next);
	/*printf("id: %d\n", node.id);*/
	while (node.next != NULL) {
		printf("id: %d\n", node.id);
		node = *(node.next);
	}
    return 0;
}

