#pragma once
struct Node
{
	Node* next = NULL;
	int id = 0;
};

Node* head = (Node*)(malloc(sizeof(Node)));


