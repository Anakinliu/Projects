#include <stdio.h>
int main() {
	int a;
	printf("%d\n",getchar());
	printf("%d\n", getchar());
	printf("%d", EOF);
	//windows系统Ctrl+Z会被解释成文件结束字符
}