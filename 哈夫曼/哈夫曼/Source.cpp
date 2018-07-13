#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
	int flag;
	unsigned int weight;
	unsigned int parent, lchild, rchild;
}HTNode, *HuffmanTree;		//动态分配数组存储哈夫曼树
typedef char * * HuffmanCode;//动态分配数组存储哈夫曼编码表
void Select(HuffmanTree &HT, int i1, int *s1, int *s2) {
	//在HT[1...i-1] 选择parent为0且weight 最小的两个结点，其序号为s1，s2.
	HuffmanTree p = HT;//其实直接用HT也行
	int flag = 0;
	int temp = 0;
	int index = 0;
	for (int i = 1; i <= i1; i++) {
		if (p[i].flag == 1) {
			continue;
		}
		if (p[i].parent != 0) {
			continue;
		}
		flag = 0;
		for (int j = 1; j <= i1; j++) {
			if (p[j].flag == 1) {
				continue;
			}
			if (p[j].parent != 0) {
				continue;
			}
			if (p[i].weight > p[j].weight) {
				flag = 1;//不是最小的
			}
		}
		if (flag == 0) {
			index = i;
			*s1 = i;
			p[i].flag = 1;
			temp = p[i].weight;
			p[i].weight = 2147483647;
			break;
		}
	}

	//求s2
	for (int i = 1; i <= i1; i++) {
		if (p[i].flag == 1) {
			continue;
		}
		if (p[i].parent != 0) {
			continue;
		}
		flag = 0;
		for (int j = 1; j <= i1; j++) {
			if (p[j].flag == 1) {
				continue;
			}
			if (p[j].parent != 0) {
				continue;
			}
			if (p[i].weight > p[j].weight) {
				flag = 1;//不是最小的
			}
		}
		if (flag == 0) {
			*s2 = i;
			p[i].flag = 1;
			break;
		}
	}
	p[index].weight = temp;
}
void HuffmanCoding(HuffmanTree &HT, HuffmanCode &HC, int *w, int n) {
	//	w存放n个字符的权值(均>0)，构造哈夫曼树HT,并求出n个字符的哈夫曼编码HC
	if (n <= 1) {
		return;
	}
	int flag = 0;
	int m = 2 * n - 1;
	HT = (HuffmanTree)malloc((m + 1) * sizeof(HTNode));		//0号单元未用
	HuffmanTree p = HT;
	int i = 1;
	for (; i <= m; ) {
		p[i].weight = *w;		//weight依序赋值
		p[i].lchild = 0;
		p[i].rchild = 0;
		p[i].parent = 0;
		p[i].flag = 0;
		i++;
		w++;		//weight依序赋值
	}
	for (i = n + 1; i <= m; i++) {		//建立哈夫曼树
		int a, b;
		int *s1 = &a;
		int *s2 = &b;
		Select(HT, i - 1, s1, s2);
		flag = 0;

		/*if ((HT[b].lchild != 0 || HT[b].rchild != 0) &&flag == 0&& HT[a].lchild == 0 && HT[a].rchild == 0) {
		int temp = a;
		a = b;
		b = temp;
		}*/
		HT[a].parent = i;
		HT[b].parent = i;
		HT[i].lchild = a;
		HT[i].rchild = b;
		HT[i].weight = HT[a].weight + HT[b].weight;
	}

	//		---从叶子到根逆向求每个字符的哈夫曼编码---
	HC = (HuffmanCode)malloc((n + 1) * sizeof(char *));	//分配n个字符编码的头指针向量
	char * cd = (char *)malloc(n * sizeof(char));	//分配求编码的工作空间
	cd[n - 1] = '\0';		//编码结束符
	for (i = 1; i <= n; i++) {	//逐个字符求哈夫曼编码
		int start = n - 1;		//编码结束符的位置
		int c = i, f = HT[i].parent;
		for (; f != 0; c = f, f = HT[f].parent) {		//从叶子到根逆向求编码
			if (HT[f].lchild == c) {
				cd[--start] = '0';
			}
			else {
				cd[--start] = '1';
			}
		}
		HC[i] = (char *)malloc((n - start) * sizeof(char));	//为第i个字符编码分配空间
		strcpy(HC[i], &cd[start]);
	}
	free(cd);
}
int main() {
	HuffmanTree HT;
	HuffmanCode HC;
	int n = 0;
	int i = 0;
	int w[6] = { 0 ,0 ,0 ,0 ,0 ,0 };
	scanf("%d", &n); //结点个数
	for (i = 0; i < n; i++) {
		scanf("%d", &w[i]); //输入结点值
	}


	//int w[11] = { 2,3,4,4,5,7,0,0,0,0,0 };
	//int n = 6;
	//int w[15] = { 29,23,14,11,8,7,5,3,0,0,0,0,0,0,0 };
	//int n = 8;
	HuffmanCoding(HT, HC, w, n);
	for (i = 1; i <= n; i++) {

		printf("%s\n", HC[i]);
	}
	return 0;
}