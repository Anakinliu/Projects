//#include <stdio.h>
//#include <stdlib.h>
//#define STACK_INIT_SIZE 100
//#define STACK_INCREMENT 10
//typedef struct aStack {
//	char *base;
//	char *top;
//	int size;
//}SqStack, *LinkStack;
//int InitStack(LinkStack S) {
//	S->base = (char *)malloc(STACK_INIT_SIZE * sizeof(char));
//	if (!S->base) {
//		exit(-1);//�����ڴ�ʧ��
//	}
//	S->top = S->base;//��ʼʱջ����ջ��
//	S->size = STACK_INIT_SIZE;
//	return 1;
//}
//
//char GetTop(SqStack *S) {
//	if (S->top == S->base) {
//		return -1;
//	}
//	//��ջ�ǿգ�*x��ջ��Ԫ��
//	//*(S.top - 1)
//	return *(S->top - 1);
//}
//
//int Push(SqStack *S, char e) {
//	//����eΪ�µ�ջ��
//	if (S->top - S->base >= S->size) {
//		S->base = (char *)realloc(S->base, (S->size + STACK_INCREMENT) * sizeof(char));
//
//		if (!S->base) {
//			exit(-1);
//		}
//		S->top = S->base + S->size;//�����һ��
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
////int DecimalToOctal(int DecimalNumber) {
////	SqStack t;
////	InitStack(&t);
////	int n = DecimalNumber;
////	if (n < 0) {
////		return -1;
////	}
////	int remainer = 0;
////	while (n != 0) {//������Ϊ0ʱ����
////		remainer = n % 8;
////		Push(&t, remainer);
////		n = n / 8;
////	}
////	/*Pop(&t);
////	int top = 0;
////	top = GetTop(t);*/
////	while ((t.top) != (t.base)) {
////		printf("%d", GetTop(t));
////		t.top--;
////	}
////}
//
//
//void mate(LinkStack s) {
//
//	s->base = (char *)malloc(STACK_INIT_SIZE);
//	//if (!s->base) {
//	//	exit(-1);//�����ڴ�ʧ��
//	//}
//	s->top = s->base;//��ʼʱջ����ջ��
//	s->size = STACK_INIT_SIZE;
//	int is = 1;
//	char c;
//	while ((c = getchar()) != '#') {
//		if (c == '(' || c == '[') {
//			Push(s, c);
//		}
//		else if ((s->base == s->top) && (c != '(' || c != '[')) {
//			is = 0;
//			break;
//		}
//		else {
//			if (c == ')' && GetTop(s) == '(') {
//				Pop(s);
//			}
//			else if (c == ')' && GetTop(s) != '(') {
//				is = 0;
//				break;
//			}
//		}
//		if (c == ']' && GetTop(s) == '[') {
//			Pop(s);
//		}
//		else if (c == ']' && GetTop(s) != '[') {
//			is = 0;
//			break;
//		}
//
//	}
//	if (is) {
//		printf("1\n");
//	}
//	else {
//		printf("0\n");
//	}
//
//}
//int main()
//{
//	SqStack s;//��֪��Ϊɶ��ֻ���ýṹ���Ͷ������ýṹ��ָ����
//	InitStack(&s);
//	mate(&s);
//	//DecimalToOctal(1348);
//}
//
