//#include <stdio.h>
//#include <stdlib.h>
//#define STACK_INIT_SIZE 100
//#define STACK_INCREMENT 10
//typedef struct aStack {
//	int *base;
//	int *top;
//	int size;
//}SqStack;
//int InitStack(SqStack *S) {
//	S->base = (int *)malloc(STACK_INIT_SIZE * sizeof(int));
//	if (!S->base) {
//		exit(-1);//分配内存失败
//	}
//	S->top = S->base;//初始时栈顶即栈底
//	S->size = STACK_INIT_SIZE;
//	return 1;
//}
//
//int GetTop(SqStack S) {
//	if (S.top == S.base) {
//		return -1;
//	}
//	//若栈非空，*x即栈顶元素
//	//*(S.top - 1)
//	return *(S.top - 1);
//}
//
//int Push(SqStack *S, int e) {
//	//插入e为新的栈顶
//	if (S->top - S->base >= S->size) {
//		S->base = (int *)realloc(S->base, (S->size + STACK_INCREMENT) * sizeof(int));
//
//		if (!S->base) {
//			exit(-1);
//		}
//		S->top = S->base + S->size;//即最后一个
//		S->size += STACK_INCREMENT;
//	}
//	*S->top = e;
//	S->top++;
//	return 1;
//}
//
//int Pop(SqStack *S) {
//	if (S->top == S->base) {
//		return -1;
//	}
//	--S->top;
//	return 1;
//}
//
//int DecimalToOctal (int DecimalNumber) {
//	SqStack t;
//	InitStack(&t);
//	int n = DecimalNumber;
//	if (n < 0) {
//		return -1;
//	}
//	int remainer = 0;
//	while (n!= 0) {//被除数为0时结束
//		remainer = n % 2;
//		Push(&t, remainer);
//		n = n / 2;
//	}
//	while ((t.top ) != (t.base)) {
//		printf("%d", GetTop(t));
//		t.top--;
//	}
//}
//
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	DecimalToOctal(a*2);
//}
//
