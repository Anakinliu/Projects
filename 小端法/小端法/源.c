#include <stdio.h>
# include <limits.h> //printf INT_MAX...
#include <stdint.h> //int16_t   define  an  integer with 16bit 
typedef unsigned char * byte_pointer;

void show_bytes(byte_pointer start, int len) {
	int i;
	for (i = 0; i < len; i++) {
		printf("%.2x", start[i]);
		printf("\n");
	}

}


void show_int(int16_t x) {
	show_bytes((byte_pointer)&x, sizeof(int16_t));
}

void show_float(float x) {
	show_bytes((byte_pointer)&x, sizeof(float));
}

void show_pointer(void *x) {
	show_bytes((byte_pointer)&x, sizeof(void *));
}

int main(void)
{
	//show_int(12345);
	//show_bytes((byte_pointer)"abcdef", 6);

	/*printf("%d\n", INT_MAX);
	printf("%d\n", INT_MIN);
	printf("%ld\n", UCHAR_MAX);
	printf("%lld\n", ULONG_MAX);*/

	int16_t x = 12345;
	show_int(x);
}