#include <stdio.h>

int fib(int N) {
	if (N == 0) {
		return 0;
	}
	if (N == 1) {
		return 1;
	}
	return fib(N - 1) + fib(N - 2);
}

int main(void) {
	for (int i = 0; i < 100; i++) {
		printf ("%-4d %d\n",i, fib(i));
	}
	return 0;
}