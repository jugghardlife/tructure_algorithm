//#include <stdio.h>
//#include <stdlib.h>
////‘º…™∑ÚŒ Ã‚
//typedef struct node
//{
//	int data;
//	struct node *next;
//}node;
//
//node *create(int n)
//{
//	int i=1;
//	node *s;
//	node *p=NULL,*head;
//	head=(node *)malloc(sizeof(node));
//	p=head;
//	
//	
//
//	if(0!=n)
//	{
//		while(i<=n)
//		{
//			s=(node *)malloc(sizeof(node));
//			s->data=i++;
//			p->next=s;
//			p=s;
//		}
//		s->next=head->next;
//	}
//	
//	free(head);
//
//	return s->next;
//}
//
//int main(void)
//{
//	int m=11;
//	int n=3;
//	int i;
//	node *p=create(m);
//	node *temp;
//
//	m%=n;
//
//	while(p!=p->next)
//	{
//		for(i=0;i<m-1;i++)
//		{
//			p=p->next;
//		}
//		
//		printf("%d->",p->next->data);
//		temp=p->next;
//		p->next=temp->next;
//	
//		free(temp);
//
//		p=p->next;
//	}
//
//	printf("%d\n",p->data);
//
//	system("pause");
//	return 0;
//}