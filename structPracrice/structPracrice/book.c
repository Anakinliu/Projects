///*book.c--仅包含一本书*/
//#include <stdio.h>
//#include <string.h>
//#define MAXTITL 40
//#define MAXAUTL 30
//#define MAXBKS 100
//struct book {
//	char title[MAXTITL];
//	char author[MAXAUTL];
//	float value;
//};              /*结构板块结束*/
//int main(void)
//{
//	struct book library[MAXBKS];  /*将library声明为book类型变量*/
//	int count = 0;
//	int index;
//
//	printf("please enter the book title.\n");
//	printf("press [enter] at the start of a lint to stop.\n");
//	while (count < MAXBKS&&gets(library[count].title) != NULL
//		&&library[count].title[0] != '\0')
//	{
//		printf("Now enter the author.\n");
//		gets(library[count].author);
//		printf("Now enter the value.\n");
//		scanf("%f", &library[count++]. value);
//		while (getchar() != '\n')
//			continue;
//		if (count < MAXBKS)
//			printf("Enter the next title.\n");
//	}
//	if (count > 0)
//	
//	{
//		printf("Here is the list of your books:\n");
//		for (index = 0; index < count; index++)
//			printf("%s by %s:$%.2f\n", library[index].title,
//				library[index].author, library[index].value);
//	}
//	else
//		printf("No books ?Too bad.\n");
//	return 0;
//
//	/*gets(library.title);
//	printf("please enter the author.\n");
//	gets(library.author);
//	printf("now enter the value.\n");
//	scanf("%f", &library.value);
//	printf("%s by %s:$%.2f.\n", library.title, library.author, library.value);
//	printf("%s :<<%s>>($%.2f).\n", library.author, library.title, library.value);
//	printf("Done,\n");
//	printf("%d", x);
//    return 0;*/
//}