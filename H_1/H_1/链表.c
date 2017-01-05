//#include <stdio.h>
//#include<malloc.h>
//#define LEN sizeof(struct student )
//#define NULL 0
//struct student
//{
//	int num;
//	float score;
//	struct student *next;
//};
//int n;
////建立链表
//struct student *create(void)
//{
//	struct student *head, *p1, *p2;
//	n = 0;
//	p1 = p2 = (struct student *)malloc(LEN);
//	scanf("%d %f", &p1->next, &p1->score);
//	head = NULL;
//	while (p1->num != 0)
//	{
//		n = n + 1;
//		if (n == 1) head = p1;    //p1是指向新开辟的结点
//		else p2->next = p1;
//		p2 = p1;    //p2指向链表中的最后一个基点
//		p1 = (struct student *)malloc(LEN); //开辟新的结点，并且使p1指向他
//		scanf("%d %f", &p1->num, &p1->score);
//	}
//	p2->next = NULL;
//	return (head);
//}
////删除结点
//struct student *del(struct student  *head, long num)
//{
//	struct student *p1, *p2;
//
//	if (head == NULL) { printf("\nlist null!\n"); goto end; }
//	p1 = head;
//	while (num != p1->num && p1->next != NULL)   //p1指向不是所要找的结点，并且后面还有结点
//	{
//		p2 = p1;
//		p1 = p1->next;      //p1后移一个及诶单
//	}       //p1后移一个结点
//	if (num == p1->num)     //找到了
//	{
//		if (p1 == head)  head = p1->next;    //若p1指向的是首结点，把第二个结点的地址head
//
//		else p2->next = p1->next;      //or 将下一个结点的地址赋给前一个结点地址
//		printf("delete:%d\n", num);
//		n = n - 1;
//		free(p1);
//	}
//	else  printf("%dnot been found !\n", num);
//end:
//	return(head);
//
//
//}
////插入学生信息
//struct student *insert(struct student *head, struct student *stud)
//{
//	struct student *p0, *p1, *p2;
//	p1 = head;         //使p1指向第一个结点
//	p0 = stud;        //p0指向要插入的结点
//	if (head == NULL)     //原来的链表是空表
//	{
//		head = p0, p0->next = NULL; //使p0指向的结点作为头结点
//	}
//	else
//	{
//		while ((p1->num>p1->num) && (p1->next != NULL))
//		{
//			p2 = p1;     //使p2指向刚才p1指向的及诶按
//			p1 = p1->next;    //p1后移一个结点
//		}
//		if (p0->num <= p1->num)
//		{
//			if (head == p1)  head = p0;   //插到原来第一个结点之前
//			else p2->next = p0;        //插到p2指向的结点之后
//			p0->next = p1;
//		}
//		else
//		{
//			p1->next = p0; p0->next = NULL;    //插到最后的结点之后
//		}
//	}
//	n = n + 1;                            //结点数加1
//	return (head);
//}
////输出链表
//void print(struct student *head)
//{
//	struct student *p;
//	p = head;
//	if (head != NULL)
//		do
//		{
//			printf("%d %f\n", p->num, p->score);
//			p = p->next;
//
//		} while (p != NULL);
//}
////main函数
//void main()
//{
//	struct student *head, stu;
//	long del_num;
//	printf("Input records:\n");
//	head = create();        //建立链表，返回头指针
//	print(head);          //输出全部结点
//
//	printf("\nInput the deleted number:\n");
//	scanf("%ld", &del_num);       //输入要删除的学号
//	while (del_num != 0)
//	{
//		head = del(head, del_num);      //删除后链表的头指针
//		print(head);                       //输出全部结点
//		printf("Input the deleted number:\n");
//		scanf("%ld", &del_num);
//	}
//
//	//printf("\nInput the inserted record:\n");
//	//stu = (struct student *)malloc(LEN);
//	//scanf("%d %f", &stu->num, &stu->score);     //输入要插入的结点
//	//{
//	//	head = insert(head, &stu);                 //插入一个结点，返回头指针的
//	//	print(head);                                     //输出全部结点
//	//	printf("\nInput the inserted record:\n");
//	//	stu = (struct student *)malloc(LEN);
//	//	scanf("%d %f", &stu->num, &stu->score);
//	//}
//}