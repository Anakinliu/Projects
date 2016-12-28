#include <stdio.h>

typedef struct oneStruct {
	int age;
	char name[10];
	struct oneStruct *p1 ;
} oS;

int main(void)
{
	_Bool  x;
	oS * firPoiS;
	oS * secPoiS;

	oS firS;
	oS secS;
	oS thiS;

	firS.p1 = &secS;
	secS.p1 = &thiS;

	secS.p1 = &secS;
	secS.p1->age = 9;

	printf("%d\n", secS.p1->age);
	printf("%d\n", firS.p1->age);
	printf("%p\n", &(firS.p1->age));
	printf("%p\n", &(secS.p1->age));

	return 0;
}