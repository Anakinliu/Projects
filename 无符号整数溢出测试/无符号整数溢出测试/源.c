#include <stdio.h>

int main() {
	// 无符号数超过最大值后会被取模截取
	// 取模的方法来截短可以保证只有最低的32位是有效的
	// 模就是最大值加上一, 就是0x100000000
	unsigned int x = 0xffffffffff;
	printf("x = %u\n", x);
	/*
	当计算表达式中包括了不同宽度的操作数时，较小宽度的操作数被提升到了
	跟较大操作数一样的宽度，然后再进行计算，如果计算结果保存在较小宽度的变量中，结果会被再次截短到较小
	的宽度。
	*/
	int int_y = 0xff;
	printf("y = 0x%x\n", int_y);
	int_y += 1;
	printf("y = 0x%x\n", int_y);
	// 有符号的short计算在超过最大位数时, 会临时提升宽度进行计算, 然后
	// 结果会被再次截短到较小的宽度。
	short short_y = 0xffffff;  //超过0xffff就都取为-1
	printf("y = 0x%x\n", short_y);
	printf("y = %d\n", short_y);
	printf("y = %d\n", short_y + 1); // result is 0
	return 0;
}
