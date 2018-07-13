#include <stdio.h>
#include <stdlib.h>
#define nodesCounts 8
/*
ABCDEFGH#
0,1
0,2
0,5
1,3
1,4
2,5
2,6
3,7
4,7
-1,-1*/
typedef struct Linked {
	int index;
	struct Linked * next;
}Linked;
typedef struct Node {
	char data;
	struct Linked * afterNode;
}Node,*NodeArray;
void DFS(NodeArray nodes) {
	//标志数组，不必在结构体中加标志变量
	int Searched[nodesCounts] = {0,0,0,0,0,0,0,0};

}
int main() {
	Node nodes[nodesCounts];
	char c;
	int i = 0;
	while ((c = getchar()) != '#') {
		nodes[i++].data = c;
	}
	int nodeIndex, nextIndex;
	Linked *tempLinked;
	Linked *newLinked;
	scanf("%d,%d", &nodeIndex, &nextIndex);
	//nodes[nodeIndex].afterNode = tempLinked;
	for (int i = 0; i < nodesCounts && nodeIndex != -1; i++) {
		tempLinked = (Linked *)malloc(sizeof(Linked));
		nodes[i].afterNode = tempLinked;
		while (nodeIndex == i ) {
			newLinked = (Linked *)malloc(sizeof(Linked));
			newLinked->index = nextIndex;
			tempLinked->next = newLinked;
			tempLinked = newLinked;
			scanf("%d,%d", &nodeIndex, &nextIndex);
		}
		//不用头节点
		nodes[i].afterNode = nodes[i].afterNode->next;
	}
	
	return 0;
}