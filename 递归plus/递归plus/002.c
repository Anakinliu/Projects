#include <stdio.h>

void show(int n) {
	if (n == 0) {
		return n;
	}
	int i;
	i = n % 2;
	n = n / 2;
	show(n);
	printf("%d", i);
}

void to_binary(unsigned long n) {
	int r;
	r = n % 2;
	if (n >= 2) {
		to_binary(n / 2);
	}
	putchar(r ? '1' : '0');

}

int main() {
	show(7);
	printf("\n");
	to_binary(7);
}