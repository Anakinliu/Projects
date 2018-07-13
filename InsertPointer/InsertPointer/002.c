#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 5
int main(void)
{
	char * mesg = "Don't be fool ! ";
	char copy[9];
	gets(copy);
//	copy = mesg;

	printf("mesg = %s; copy = %p\n;%p\n",mesg, &copy,"eee");
//	printf("mesg = %p; copy = %p\n;", mesg, copy);

}