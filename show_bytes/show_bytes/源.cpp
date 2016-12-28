#include <stdio.h>
void show_bytes(char * x) {
	int i = 0;
	while (i<sizeof(int)) {
		printf("%.2x ", x[i]);
		i++;
	}
}
int main() {
	int x = 9;
	
	show_bytes((char *)&x);
	x = 999;
	putchar();
	show_bytes((char *)&x);

}