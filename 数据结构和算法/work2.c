//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct node 
//{
//	int data;
//	struct node *next;
//}node,*linklist;
//
//linklist CreateLinkList(int num)
//{
//	linklist head=NULL;
//	linklist s,r;
//	int i;
//
//	r=head;
//
//	for(i=1;i<=num;i++)
//	{
//		s=(linklist)malloc(sizeof(node));
//		s->data=i;
//		if(head==NULL)
//		{
//			head=s;
//		}
//		else
//		{
//			r->next=s;
//		}
//		r=s;
//	}
//	r->next=head;
//
//	return head;
//}
//
////Ïú»Ù¹¤×÷
//void Destorylist(linklist *list,int num)
//{
//
//	linklist ptr=*list;
//	linklist buff[13];
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
//	int num;
//	int i;
//	int j=0;
//	linklist p;
//	linklist q;
//	scanf("%d",&num);
//	p=CreateLinkList(num);
//	while(j<num){
//		for(i=0;i<num;i++)
//		{
//			printf("%d ",p->data);
//			p=p->next;
//		}
//		p=p->next;
//		j++;
//		printf("\n");
//	}
//	
//	printf("%d\n",p);
//	Destorylist(&p,num);
//	printf("%d",p);
//	system("pause");
//	return 0;
//}