//#include <stdio.h>
//#include <stdlib.h>
////ѭ�����������������ն˽���ָ����ɿ�ָ���Ϊָ��ͷ��㣬
////��ʹ�����������γ�һ����������ͷβ��ӵĵ������Ϊ��ѭ������
////��ʵ�������ĵ��������Ҫ���������ѭ�����жϿ�����������ϣ�
////ԭ���ж�head->next�Ƿ�Ϊnull����������head->next�Ƿ����head
//
////����洢�ṹ�Ķ���
//
//typedef struct ClinkList
//{
//	int data;
//	struct ClinkList *next;
//}node;
//
//
////����
//
////��ʼ��ѭ������
//
//void ds_inte(node **pNode)
//{
//	int item;
//	node *temp;
//	node *target;
//
//	printf("����ڵ��ֵ������0��ɳ�ʼ��\n");
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
//			//ѭ��������ֻ��һ�����
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
//				//�ҵ�nextָ���һ�����Ľ��
//				for (target = (*pNode); target->next != (*pNode); target = target->next);
//				
//				//����һ���µĽ��
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
//// ����ڵ�
//
//void ds_insert(node **pNode,int i)
//{
//	node *temp;
//	node *target;
//	node *p;
//	int item;
//	int j=1;
//
//	printf("����Ҫ�������ֵ:");
//	scanf("%d",&item);
//
//	if(i==1)
//	{
//		//�²���Ľ����Ϊ��һ�����
//		temp=(node *)malloc(sizeof(struct ClinkList));
//
//		if(!temp)
//		{
//			exit(0);
//		}
//		temp->data=item;
//
//		//Ѱ�ҵ����һ�����
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
////ɾ�����
//
//void ds_delete(node **pNode, int i)
//{
//	node *target;
//	node *temp;
//	int j = 1;
//
//	if (1==i)
//	{
//		//ɾ�����ǵ�һ�����
//		//�ҵ����һ�����
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
////���ؽ������λ��
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
//		return 0;//���в����ڸ�Ԫ��
//	}
//	else
//	{
//		return i;
//	}
//}
//
////����
//
//void ds_traverse(node *pNode)
//{
//	node *temp;
//	temp = pNode;
//	printf("�����е�Ԫ��\n");
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
//	printf("1����ʼ������\n\n2��������\n\n3��ɾ�����\n\n4�����ؽ��λ��\n\n5����������\n\n0���˳� \n\n��ѡ����Ĳ���");
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
//			printf("������Ҫ�������λ��;");
//				scanf("%d",&find);
//				ds_insert(&pHead,find);
//				printf("\n");
//				ds_traverse(pHead);
//			break;
//		case '3':
//			printf("������Ҫɾ���Ľ��λ�á�");
//			scanf("%d", &find);
//			ds_delete(&pHead,find);
//			printf("ɾ����%d������:\n", find);
//			ds_traverse(pHead);
//			printf("\n");
//			break;
//		case '4':
//			printf("��Ҫ��ֵ�ڵڼ�����㣿");
//			scanf("%d", &find);
//			printf("Ԫ��%d����λ��:%d\n", find, ds_search(pHead, find));
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