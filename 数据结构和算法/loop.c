//#include <stdlib.h>
//#include <stdio.h>
//#include <time.h>
//
//#define ok 1
//#define error 0
//#define TRUE 1
//#define FALSE 0
////�ж���������û�л�
//typedef int Status;
//typedef int ElemType;
//
//typedef struct Node
//{
//	ElemType data;
//	struct Node *next;
//}Node,*LinkList;
//
////��ʼ����ͷ���Ŀ�����
//Status InitList(LinkList *L)
//{
//	*L=(LinkList)malloc(sizeof(Node));//����ͷ���
//	if(!(*L))
//	{
//		return error;
//	}
//
//	(*L)->next=NULL;//ָ��Ϊ��
//
//	return ok;
//}
//
////��ʼ������˳�����Ա�L�Ѵ��ڣ���������������L������Ԫ�ظ���
//int ListLength(LinkList L)
//{
//	int i=0;
//	LinkList p=L->next;//pָ���һ�����
//	while(p)
//	{
//		i++;
//		p=p->next;
//	}
//	return i;
//}
//
////�������n��Ԫ�ص�ֵ����������ͷ���ĵ���������L��ͷ�巨��
//void CreateListHead(LinkList *L,int n)
//{
//	LinkList p;
//	int i;
//
//	srand(time(0));//��ʼ���������
//	*L=(LinkList)malloc(sizeof(Node));
//	(*L)->next=NULL;                        //����һ����ͷ���ĵ�����
//
//	for(i=0;i<n;i++)
//	{
//		p=(LinkList)malloc(sizeof(Node));     //�����½��
//		p->data=rand()%100+1;                      //�������100���ڵ�����
//		p->next=(*L)->next;
//		(*L)->next=p;                                           //���뵽ͷ��
//	}
//}
//
////�������n��Ԫ�ص�ֵ����������ͷ���ĵ������Ա�β�巨��
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
////�Ƚϲ����ķ���
//int HasLoop1(LinkList L)
//{
//	LinkList cur1=L;     //������ cur1
//	int pos1=0;				//cur1�Ĳ���
//	
//	while(cur1)					//cur1������
//	{
//		LinkList cur2=L;//������ cur2
//		int pos2=0;          // cur2�Ĳ���
//		while(cur2)			//cur2��㲻Ϊ��
//		{
//			if(cur2==cur1)   // ��cur1��cur2����ͬ���ʱ
//			{								
//				if(pos1==pos2) //�߹��Ĳ���һ��
//				{
//					break;				//˵��û�л�
//				}
//				else
//				{
//					printf("����λ���ڵ�%d����㴦��\n\n",pos2);
//					return 1;            //�л�����1
//				}
//			}
//			cur2=cur2->next;     //���û���ֻ���������һ�����
//			pos2++;							//cur2��������
//		}
//		cur1=cur1->next;          //cur1�������һ���ڵ�
//		pos1++;								//cur1��������
//	}
//	return 0;
//}
//
////���ÿ���ָ��ķ���
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
//	printf("\n1�������л�����β�巨�� \n2�������޻�����ͷ�巨�� \n3���ж������Ƿ��л� \n0���˳�\n\n");
//	
//	while(1)
//	{	
//		scanf("%c",&opp);
//		switch(opp)
//		{
//		case '1':
//			CreateListTail(&L,20);
//			printf(" �ɹ������л�L��β�巨��\n");
//			printf("\n");
//			break;
//		case '2':
//			CreateListHead(&L,20);
//			printf("��ɴ����޻�L��ͷ�巨��\n");
//			printf("\n");
//			break;
//		case '3':
//			printf("����һ:\n\n");
//			if(HasLoop1(L))
//			{
//				printf("���ۣ������л�\n\n\n");
//			}
//			else
//			{
//				printf("���ۣ������޻�\n\n\n");
//			}
//
//			printf("������:\n\n");
//			if(HasLoop2(L))
//			{
//				printf("���ۣ������л�\n\n\n");
//			}
//			else
//			{
//				printf("���ۣ������޻�\n\n\n");
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