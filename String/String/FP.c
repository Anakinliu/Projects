#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int slen(char *s) {
	char *p = s;
	int length = 0;
	while (*(p+length) != '\0') {
		length++;
	}
	return length;
}
int KmpSearch(char* s, char* p,int next[])
{
	int i = 0;
	int j = 0;
	int sLen = slen(s);
	int pLen = slen(p);
	while (i < sLen && j < pLen)
	{
		//①如果j = -1，或者当前字符匹配成功（即S[i] == P[j]），都令i++，j++      
		if (j == -1 || s[i] == p[j])
		{
			i++;
			j++;
		}
		else
		{
			//②如果j != -1，且当前字符匹配失败（即S[i] != P[j]），则令 i 不变，j = next[j]      
			//next[j]即为j所对应的next值        
			j = next[j];
		}
	}
	if (j == pLen)
		return i - j;
	else
		return -1;
}

void GetNext(char* p, int next[])
{
	int pLen = slen(p);
	if (pLen > 20) { next = (int *)malloc(sizeof(int)*pLen); }
	next[0] = -1;
	int k = -1;
	int j = 0;
	while (j < pLen - 1)
	{
		//p[k]表示前缀，p[j]表示后缀  
		if (k == -1 || p[j] == p[k])
		{
			++k;
			++j;
			next[j] = k;
		}
		else
		{
			k = next[k];
		}
	}
}
char* getPofS(char *s,int index) {
	if (index<1 || index>slen(s)) {
		printf("index error");
		return NULL;
	}
	char *p = malloc(0);
	int i = 0;
	while (*(s + index ) != '\0') {
		*(p+i) = *(s + index - 1);
		i++;
		//*(p + slen(s) - index) = '\0';
		index++;
	}
	*(p + i) = '\0';
	return p;
}
int main() {
	char *p = malloc(0);
		char *s = malloc(0);
		char x;
		int next[20]  ;
		int i = 0;
		int index;
		while ((x = getchar()) != '\n') {
			*(s + i) = x;
			i++;
		}
		*(s + i) = '\0';
			i = 0;
			while ((x = getchar()) != '\n') {
				*(p+i) = x;
				i++;
			}
			*(p + i) = '\0';
			scanf("%d", &index);
		    s =  getPofS(s, index);
		GetNext(p, next);
		int result = KmpSearch(s, p, next);
		
		//	int len = slen(p);
		//		/*for (i = 0; i < 90; i++) {
		//			printf("%d  ", next[i]);
		//		}*/
		//		printf("%d ", len);
		printf("%d", result);
		return 0;
}
