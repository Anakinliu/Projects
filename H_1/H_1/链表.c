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
////��������
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
//		if (n == 1) head = p1;    //p1��ָ���¿��ٵĽ��
//		else p2->next = p1;
//		p2 = p1;    //p2ָ�������е����һ������
//		p1 = (struct student *)malloc(LEN); //�����µĽ�㣬����ʹp1ָ����
//		scanf("%d %f", &p1->num, &p1->score);
//	}
//	p2->next = NULL;
//	return (head);
//}
////ɾ�����
//struct student *del(struct student  *head, long num)
//{
//	struct student *p1, *p2;
//
//	if (head == NULL) { printf("\nlist null!\n"); goto end; }
//	p1 = head;
//	while (num != p1->num && p1->next != NULL)   //p1ָ������Ҫ�ҵĽ�㣬���Һ��滹�н��
//	{
//		p2 = p1;
//		p1 = p1->next;      //p1����һ��������
//	}       //p1����һ�����
//	if (num == p1->num)     //�ҵ���
//	{
//		if (p1 == head)  head = p1->next;    //��p1ָ������׽�㣬�ѵڶ������ĵ�ַhead
//
//		else p2->next = p1->next;      //or ����һ�����ĵ�ַ����ǰһ������ַ
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
////����ѧ����Ϣ
//struct student *insert(struct student *head, struct student *stud)
//{
//	struct student *p0, *p1, *p2;
//	p1 = head;         //ʹp1ָ���һ�����
//	p0 = stud;        //p0ָ��Ҫ����Ľ��
//	if (head == NULL)     //ԭ���������ǿձ�
//	{
//		head = p0, p0->next = NULL; //ʹp0ָ��Ľ����Ϊͷ���
//	}
//	else
//	{
//		while ((p1->num>p1->num) && (p1->next != NULL))
//		{
//			p2 = p1;     //ʹp2ָ��ղ�p1ָ��ļ�����
//			p1 = p1->next;    //p1����һ�����
//		}
//		if (p0->num <= p1->num)
//		{
//			if (head == p1)  head = p0;   //�嵽ԭ����һ�����֮ǰ
//			else p2->next = p0;        //�嵽p2ָ��Ľ��֮��
//			p0->next = p1;
//		}
//		else
//		{
//			p1->next = p0; p0->next = NULL;    //�嵽���Ľ��֮��
//		}
//	}
//	n = n + 1;                            //�������1
//	return (head);
//}
////�������
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
////main����
//void main()
//{
//	struct student *head, stu;
//	long del_num;
//	printf("Input records:\n");
//	head = create();        //������������ͷָ��
//	print(head);          //���ȫ�����
//
//	printf("\nInput the deleted number:\n");
//	scanf("%ld", &del_num);       //����Ҫɾ����ѧ��
//	while (del_num != 0)
//	{
//		head = del(head, del_num);      //ɾ���������ͷָ��
//		print(head);                       //���ȫ�����
//		printf("Input the deleted number:\n");
//		scanf("%ld", &del_num);
//	}
//
//	//printf("\nInput the inserted record:\n");
//	//stu = (struct student *)malloc(LEN);
//	//scanf("%d %f", &stu->num, &stu->score);     //����Ҫ����Ľ��
//	//{
//	//	head = insert(head, &stu);                 //����һ����㣬����ͷָ���
//	//	print(head);                                     //���ȫ�����
//	//	printf("\nInput the inserted record:\n");
//	//	stu = (struct student *)malloc(LEN);
//	//	scanf("%d %f", &stu->num, &stu->score);
//	//}
//}