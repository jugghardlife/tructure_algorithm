//#include <stdio.h>
//#include <stdlib.h>
////循环链表：将单链表中终端结点的指针端由空指针改为指向头结点，
////就使整个单链表形成一个环，这种头尾相接的单链表成为单循环链表。
////其实虚幻链表的单链表的主要差异就在于循环的判断空链表的条件上，
////原来判断head->next是否为null，现在则是head->next是否等于head
//
////链表存储结构的定义
//
//typedef struct ClinkList
//{
//	int data;
//	struct ClinkList *next;
//}node;
//
//
////操作
//
////初始化循环链表
//
//void ds_inte(node **pNode)
//{
//	int item;
//	node *temp;
//	node *target;
//
//	printf("输入节点的值，输入0完成初始化\n");
//
//	while (1)
//	{
//		scanf("%d",&item);
//		/*fflush(stdin);*/
//
//		if (0 == item)
//		{
//			return;
//		}
//
//		if (NULL == (*pNode))
//		{
//			//循环链表中只有一个结点
//			*pNode = (node*)malloc(sizeof(struct ClinkList));
//			if (!(*pNode))
//			{
//				exit(0);	
//			}
//			(*pNode)->data = item;
//			(*pNode)->next = *pNode;
//		}
//			else
//			{
//				//找到next指向第一个结点的结点
//				for (target = (*pNode); target->next != (*pNode); target = target->next);
//				
//				//生成一个新的结点
//				temp = (node *)malloc(sizeof(struct ClinkList));
//
//				if (!temp)
//				{
//					exit(0);
//				}
//
//				temp->data = item;
//				temp->next = *pNode;
//				target->next = temp;
//			}
//		}
//}
//
//// 插入节点
//
//void ds_insert(node **pNode,int i)
//{
//	node *temp;
//	node *target;
//	node *p;
//	int item;
//	int j=1;
//
//	printf("输入要插入结点的值:");
//	scanf("%d",&item);
//
//	if(i==1)
//	{
//		//新插入的结点作为第一个结点
//		temp=(node *)malloc(sizeof(struct ClinkList));
//
//		if(!temp)
//		{
//			exit(0);
//		}
//		temp->data=item;
//
//		//寻找到最后一个结点
//
//		for(target=(*pNode);target->next!=(*pNode);target=target->next);
//		temp->next=(*pNode);
//		target->next=temp;
//		*pNode=temp;
//	}
//	else 
//	{
//		target=*pNode;
//		for(;j<(i-1);++j)
//		{
//			target=target->next;
//		}
//		
//		temp=(node *)malloc(sizeof(struct ClinkList));
//
//		if(!temp)
//		{
//			exit(0);
//		}
//		temp->data=item;
//		p=target->next;
//		target->next=temp;
//		temp->next=p;
//	}
//}
//
////删除结点
//
//void ds_delete(node **pNode, int i)
//{
//	node *target;
//	node *temp;
//	int j = 1;
//
//	if (1==i)
//	{
//		//删除的是第一个结点
//		//找到最后一个结点
//
//		for (target = *pNode; target->next != *pNode; target = target->next);
//
//		temp = *pNode;
//		*pNode = (*pNode)->next;
//		target->next = *pNode;
//		free(temp);
//	}
//	else
//	{
//		target = *pNode;
//
//		for (; j < i - 1; ++j)
//		{
//			target = target->next;
//		}
//
//		temp = target->next;
//		target->next=temp->next;
//		free(temp);
//	}
//}
//
////返回结点所在位置
//int ds_search(node *pNode,int elem)
//{
//	node *target;
//	int i = 1;
//	for (target = pNode; target->data != elem&&target->next != pNode; ++i)
//	{
//		target = target->next;
//	}
//
//	if (target->next == pNode)
//	{
//		return 0;//表中不存在该元素
//	}
//	else
//	{
//		return i;
//	}
//}
//
////遍历
//
//void ds_traverse(node *pNode)
//{
//	node *temp;
//	temp = pNode;
//	printf("链表中的元素\n");
//	do
//	{
//		printf("%d  ",temp->data);
//	} while ((temp=temp->next)!=pNode);
//	
//	printf("\n");
//}
//
//int main(void)
//{
//	node *pHead = NULL;
//	char opp;
//	int find;
//
//	printf("1、初始化链表\n\n2、插入结点\n\n3、删除结点\n\n4、返回结点位置\n\n5、遍历链表\n\n0、退出 \n\n请选择你的操作");
//	while (1)
//	{
//		scanf("%c", &opp);
//		switch (opp)
//		{
//		case '1':
//			ds_inte(&pHead);
//			printf("\n");
//			ds_traverse(pHead);
//			break;
//		case '2':
//			printf("输入需要插入结点的位置;");
//				scanf("%d",&find);
//				ds_insert(&pHead,find);
//				printf("\n");
//				ds_traverse(pHead);
//			break;
//		case '3':
//			printf("输入需要删除的结点位置。");
//			scanf("%d", &find);
//			ds_delete(&pHead,find);
//			printf("删除第%d个结点后:\n", find);
//			ds_traverse(pHead);
//			printf("\n");
//			break;
//		case '4':
//			printf("你要查值在第几个结点？");
//			scanf("%d", &find);
//			printf("元素%d所在位置:%d\n", find, ds_search(pHead, find));
//			break;
//		case '5':
//			ds_traverse(pHead);
//			printf("\n");
//			break;
//		case '0':
//			exit(0);
//		}
//	}
//
//	system("pause");
//	return 0;
//}