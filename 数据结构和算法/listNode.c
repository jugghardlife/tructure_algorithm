//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//typedef int data_t;
//typedef struct Node
//{	
//	data_t data;
//	struct Node *next;
//}Node, *LinkList;
//
////��
////����ͷ
//LinkList CreateEmptyLinklist()
//{
//	LinkList p;
//	p = (LinkList)malloc(sizeof(Node));
//	if(p == NULL)
//	{
//		perror("CreateEmptyLinklist error!\n");
//		exit(0);
//	}
//	p->next = NULL;
//}
//
////a.ͷ�巢 
//LinkList CreateListHead(LinkList L, int n)
//{
//	LinkList p;
//	int i;
//	srand(time(0));
//	
//	for(i = 0; i<n; i++)
//	{
//		p = (LinkList)malloc(sizeof(Node));	
//		p->data = rand()%10 + 1;
//		p->next = L->next;
//		L->next = p;
//	}
//	return L;
//}
//
////b.β�巢
//LinkList CreateListTail(LinkList L, int n)
//{
//	LinkList p, r;
//	int i;
//	srand(time(NULL));
//	
//	r = L;
//	for(i = 0; i<n; i++)
//	{
//		p = (LinkList)malloc(sizeof(Node));
//		p->data = rand()%10 + 1;
//		r->next = p;
//		r = p;
//	}
//	r->next = NULL;
//	return L;
//}
//
////����
//int ListInsert(LinkList L, int i, data_t e)
//{	
//	LinkList p, r;
//	int j = 1;
//	p = L;
//	while(p != NULL && j< i)
//	{
//		p = p->next;
//		j++;
//	}
//	if(p == NULL)
//	{
//		printf("%d position is error!\n", i);
//		return -1;	
//	}
//	r = (LinkList)malloc(sizeof(Node));
//	r->data = e;
//	r->next = p->next;
//	p->next = r;
//
//	return 1;
//
//}
//
//
////ɾ
////a.ɾ��ĳ���ڵ�
//int ListDelete(LinkList L, int i, data_t *e)
//{
//	int j;
//	LinkList p, q;
//	if(L->next == NULL)//�п�
//	{
//		printf("LinkList is empty!\n");
//		return -1;
//	}
//	p = L;
//	j = 1;
//	while(p->next != NULL && j< i)
//	{
//		p = p->next;
//		j++;
//	}
//	q = p->next;
//	if(p == NULL)
//	{
//		printf("%d position is error!\n", i);
//		return -1;
//	}
//	*e = p->data;
//	p->next = q->next;
//	//free(q);
//	p = q;
//	free(q);
//	return 1;
//}
//
////b.ɾ��ȫ��
//int ClearList(LinkList L)
//{
//	LinkList p, q;
//	p = L->next;
//	while(p != NULL)
//	{	
//		q = p->next;
//		free(q);
//		p = q;
//	}
//	L->next = NULL;
//	return 1;
//}
//
////��
////a.��ĳ��Ԫ��
//int GetElem(LinkList L, int i, data_t *data)
//{
//	LinkList p, r;
//	int j = 1;
//	p = L;
//	while(p != NULL)
//	{
//		p = p->next;
//		j++;
//	}
//	if(p != NULL)
//	{
//		printf("%d position is error!\n", i);
//		return -1;
//	}
//	*data = p->data;
//	return 1;
//}
//
//
////b.������
//int PrintList(LinkList L)
//{
//	LinkList p, r;
//	p = L->next;
//	while(p != NULL)
//	{
//		printf("%d ", p->data);
//		p = p->next;
//	}
//	printf("\n");
//	return 1;
//}
//
//int main(int argc, const char *argv[])
//{
//	/*
//	LinkList head1, head2;
//	head1 = CreateEmptyLinklist();	
//	head2 = CreateEmptyLinklist();
//	*/
//
//    LinkList head1,head2;
//    int i;
//    data_t data=12;
//    head1=CreateEmptyLinklist();
//    head2=CreateEmptyLinklist();
//    printf("head1\n");
//    head1=CreateListHead(head1,10);
//    PrintList(head1);
//	printf("head2\n");
//    head2=CreateListTail(head2,10);
//    PrintList(head2);
//
//	scanf("%d",&i);
//    printf("Insert head1 %d position, data is %d\n",i,data);
//    ListInsert(head1,i,data);
//    PrintList(head1);
//    scanf("%d",&i);
//    ListDelete(head1,i,&data);
//    printf("Delete head1 %d position, data is %d\n",i,data);
//    PrintList(head1);
//
//	/*
//	LinkList adjmax = Adjmax(head1);
//    printf("Adjmax data is %d, Adjmax data next data is %d\n",adjmax->data,adjmax->next->data);
//	ListReverse(head1);
//	printf("Reserve head1:\n");
//	PrintList(head1);
//	*/
//    if(ClearList(head1)== 1)
//    {
//        printf("head1 Clear success\n");
//    }
//    if(ClearList(head2)== 1)
//    {
//        printf("head2 Clear success\n");
//    }
//	return 0;
//}
