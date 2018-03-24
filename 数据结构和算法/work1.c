//#include <stdlib.h>
//#include <stdio.h>
//#include <time.h>
//
//typedef int data_t;
//typedef int Status;
//typedef int ElemType;
//typedef struct Node
//{
//	data_t data;
//	struct Node *next;
//}Node, *LinkList;
//
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
//int PrintList(LinkList L)
//{
//	LinkList p, r;
//	p = L->next;
//	while(p != NULL)
//	{
//		printf("%d \n", p->data);
//		p = p->next;
//	}
//	printf("\n");
//	return 1;
//}
//
//Status GetMidNode(LinkList L,ElemType *e)
//{
//	LinkList search,mid;
//	mid=search=L;
//	while (search->next!=NULL)
//	{
//		if(search->next->next!=NULL)
//		{
//			search=search->next->next;
//			mid=mid->next;
//		}
//		else
//		{
//			search=search->next;
//		}
//	}
//
//	*e=mid->data;
//
//	return 1;
//}
//
//int main(void)
//{
//	ElemType* e;
//	LinkList head;
//	head=CreateEmptyLinklist();
//	head=CreateListHead(head,20);
//	GetMidNode(head,&e);
//	printf("%d\n",e);
//	PrintList(head);
//	system("pause");
//	return 0;
//}