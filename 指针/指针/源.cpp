#include <stdio.h>
int exchange(int *xp, int y) {
	int x = *xp;
	*xp = y;
	return x;
}
int main(void) {
	int x = 3, y = 4;
	int *p = &x;
	printf("%p\n\n", p);
	//printf("p自身的地址: %0xd\n", p);
	p = p - 16;
	//printf("p自身的地址: %0xd\n", p);
	printf("%p\n", p);
	printf("x的地址:%d\n", &x);
	printf("y的地址:%d\n", &y);
	printf("x的地址 - y的地址:%p\n", &x - &y);
	//y = exchange(&x, y);
	printf("x = %d, y = %d\n", x, y);
}