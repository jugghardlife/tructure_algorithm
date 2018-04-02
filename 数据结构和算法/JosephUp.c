//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct node
//{
//	int data;
//	int psw;
//	struct node *next;
//}node;
//
//node *create()
//{
//	int i=1;
//	int item;
//	node *s;
//	node *p=NULL,*head;
//	head=(node *)malloc(sizeof(node));
//	p=head;
//		while(1)
//		{
//
//		scanf("%d",&item);
//
//			if (0 == item)
//		{
//			break;
//		}
//
//			s=(node *)malloc(sizeof(node));
//			s->psw=item;
//			s->data=i++;
//			p->next=s;
//			p=s;
//		}
//		s->next=head->next;
//		free(head);
//		return s;
//}
//
//int main()
//{
//	int m;
//	int n;
//	int i=0;
//	//node *pHead = NULL;
//	node *temp=create();
//	node *p=temp;
//	node *w=temp->next;
//	m=temp->data;
//	n=temp->psw;
//	m%=n;
//	while(w!=w->next)
//	{
//		/*printf("%d %d",w->next->data,w->next->psw);*/
//		
//
//		for(i=0;i<m-1;i++)
//		{
//			w=w->next;
//		}
//
//		printf("%d->",w->next->data);
//		p=w->next;
//		w->next=p->next;
//		free(p);
//		w=w->next;
//	}
//	system("pause");
//	return 0;
//}