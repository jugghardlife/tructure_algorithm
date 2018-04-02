//#include <stdlib.h>
//#include <stdio.h>
//#include <time.h>
//
//#define ok 1
//#define error 0
//#define TRUE 1
//#define FALSE 0
////判断链表中有没有环
//typedef int Status;
//typedef int ElemType;
//
//typedef struct Node
//{
//	ElemType data;
//	struct Node *next;
//}Node,*LinkList;
//
////初始化带头结点的空链表
//Status InitList(LinkList *L)
//{
//	*L=(LinkList)malloc(sizeof(Node));//产生头结点
//	if(!(*L))
//	{
//		return error;
//	}
//
//	(*L)->next=NULL;//指针为空
//
//	return ok;
//}
//
////初始条件，顺序线性表L已存在，操作结束，返回L中数据元素个数
//int ListLength(LinkList L)
//{
//	int i=0;
//	LinkList p=L->next;//p指向第一个结点
//	while(p)
//	{
//		i++;
//		p=p->next;
//	}
//	return i;
//}
//
////随机产生n个元素的值，建立带表头结点的单链表线性L（头插法）
//void CreateListHead(LinkList *L,int n)
//{
//	LinkList p;
//	int i;
//
//	srand(time(0));//初始化随机种子
//	*L=(LinkList)malloc(sizeof(Node));
//	(*L)->next=NULL;                        //建立一个带头结点的单链表
//
//	for(i=0;i<n;i++)
//	{
//		p=(LinkList)malloc(sizeof(Node));     //产生新结点
//		p->data=rand()%100+1;                      //随机生成100以内的数字
//		p->next=(*L)->next;
//		(*L)->next=p;                                           //插入到头表
//	}
//}
//
////随机产生n个元素的值，建立带表头结点的单链线性表（尾插法）
//void CreateListTail(LinkList *L,int n)
//{
//	LinkList p,r;
//	int i;
//
//	srand(time(0));
//	*L=(LinkList)malloc(sizeof(Node));
//	r=*L;
//
//	for(i=0;i<n;i++)
//	{
//		p=(Node *)malloc(sizeof(Node));
//		p->data=rand()%100+1;
//		r->next=p;
//		r=p;
//	}
//
//	r->next=(*L)->next->next;
//}
//
////比较步数的方法
//int HasLoop1(LinkList L)
//{
//	LinkList cur1=L;     //定义结点 cur1
//	int pos1=0;				//cur1的步数
//	
//	while(cur1)					//cur1结点存在
//	{
//		LinkList cur2=L;//定义结点 cur2
//		int pos2=0;          // cur2的步数
//		while(cur2)			//cur2结点不为空
//		{
//			if(cur2==cur1)   // 当cur1与cur2到达同结点时
//			{								
//				if(pos1==pos2) //走过的步数一样
//				{
//					break;				//说明没有环
//				}
//				else
//				{
//					printf("环的位置在第%d个结点处。\n\n",pos2);
//					return 1;            //有环返回1
//				}
//			}
//			cur2=cur2->next;     //如果没发现环，继续下一个结点
//			pos2++;							//cur2步数自增
//		}
//		cur1=cur1->next;          //cur1继续向后一个节点
//		pos1++;								//cur1步数自增
//	}
//	return 0;
//}
//
////利用快慢指针的方法
//int HasLoop2(LinkList L)
//{
//	int step1=1;
//	int step2=2;
//	LinkList p=L;
//	LinkList q=L;
//
//	while(p!=NULL&&q!=NULL&&q->next!=NULL)
//	{
//		p=p->next;
//		if(q->next!=NULL)
//		{
//			q=q->next->next;
//		}
//
//		printf("p:%d,q:%d\n",p,q);
//		if(p==q)
//		{
//			return 1;		
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	LinkList L;
//	Status i;
//	char opp;
//	ElemType e;
//	int find;
//	int tmp;
//
//	/*i=InitList(&L);*/
//	printf("\n1、创建有环链表（尾插法） \n2、创建无环链表（头插法） \n3、判断链表是否有环 \n0、退出\n\n");
//	
//	while(1)
//	{	
//		scanf("%c",&opp);
//		switch(opp)
//		{
//		case '1':
//			CreateListTail(&L,20);
//			printf(" 成功创建有环L（尾插法）\n");
//			printf("\n");
//			break;
//		case '2':
//			CreateListHead(&L,20);
//			printf("完成创建无环L（头插法）\n");
//			printf("\n");
//			break;
//		case '3':
//			printf("方法一:\n\n");
//			if(HasLoop1(L))
//			{
//				printf("结论：链表有环\n\n\n");
//			}
//			else
//			{
//				printf("结论：链表无环\n\n\n");
//			}
//
//			printf("方法二:\n\n");
//			if(HasLoop2(L))
//			{
//				printf("结论：链表有环\n\n\n");
//			}
//			else
//			{
//				printf("结论：链表无环\n\n\n");
//			}
//			printf("\n");
//			break;
//			case '0':
//			exit(0);
//		}
//	}
//	system("pause");
//	return 0;
//}