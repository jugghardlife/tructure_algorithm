//#include <stdio.h>
//#include <stdlib.h>
////双向链表练习
//#define ok 1
//#define error 0
//#define num 26
//
//typedef char ElemType;
//typedef int Status;
//typedef struct DualNode
//{
//	ElemType data;
//	 struct DualNode *prior;
//	  struct DualNode *next;
//}DualNode,*DuLinkList;
//
//Status InitList(DuLinkList *L)
//{
//	int i=0;
//	DualNode *p,*q;
//	*L=(DuLinkList)malloc(sizeof(DualNode));
//	
//	if(!(*L))
//	{
//		return error;
//	}
//
//	(*L)->next=(*L)->prior=NULL;
//	p=(*L);
//
//	for(i=0;i<26;i++)
//	{
//		q=(DualNode *)malloc(sizeof(DualNode));
//		if(!q)
//		{
//			return error;
//		}
//		
//		q->data='A'+i;
//		q->prior=p;
//		q->next=p->next;
//		p->next=q;
//
//		p=q;
//	}
//	p->next=(*L)->next;
//	(*L)->next->prior=p;
//	return ok;
//}
//
//void Caeser(DuLinkList *L,int i)
//{
//	if(i>0)
//	{
//		do
//		{
//			(*L)=(*L)->next;
//		}while(--i);
//	}
//
//	if(i<0)
//	{
//		(*L)=(*L)->next;
//		do
//		{
//			(*L)=(*L)->prior;
//		}while(i++);
//	}
//}
//
////销毁工作
//void Destorylist(DuLinkList *list)
//{
//	DuLinkList ptr=*list;
//	DuLinkList buff[num];
//	int i=0;
//
//	while(i<num)
//	{
//		buff[i++]=ptr;
//		ptr=ptr->next;
//	}
//
//	for(i=0;i<num;++i)
//	{
//		free(buff[i]);
//	}
//	*list=NULL;
//}
//
//int main()
//{
//	DuLinkList L;
//	int i,n;
//
//	InitList(&L);
//
//	printf("请输入一个整数：");
//
//	scanf("%d",&n);
//	printf("\n");
//	Caeser(&L,n);
//	for(i=0;i<26;i++)
//	{
//		L=L->next;
//		printf("%c",L->data);
//	}
//	
//
//	Destorylist(&L);
//	system("pause");
//	return 0;
//}