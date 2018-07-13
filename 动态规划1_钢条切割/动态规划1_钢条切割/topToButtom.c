#include <stdio.h>
int pirce[41] = { 0, 1, 5, 8, 9, 10, 17, 17, 20, 24, 30, 1, 5, 8, 9, 10, 17, 17, 20, 24, 30, 1, 5, 8, 9, 10, 17, 17, 20, 24, 30, 1, 5, 8, 9, 10, 17, 17, 20, 24, 30 };
int max(int a, int b) {
	return a > b ? a : b;
}
int CUT_ROD(int *p_array, int n) {
	if (n == 0) {
		return 0;
	}
	int q = -1;
	for (int i = 1; i <= n; i++) {
		q = max(q, p_array[i] + CUT_ROD(p_array, n - i));
	}
	return q;
}
int main() {
	int result = CUT_ROD(pirce, 40);
	printf("result: %d\n", result);
	return 0;
}