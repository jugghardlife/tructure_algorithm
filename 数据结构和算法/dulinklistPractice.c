//#include <stdio.h>
//#include <stdlib.h>
//#define charNum 26 
//typedef int ElemType;
//typedef struct DualNode
//{
//	ElemType data;
//	struct DualNode *prior;
//	struct DualNode *next;
//}DualNode,*DuLinkList;
//
//DuLinkList CreateLinkList()
//{	
//	/*char a[26][1]={{"a"},{"b"},{"c"},{"d"},{"e"},{"f"},{"g"},{"h"},{"i"},{"j"},{"k"},{"l"},{"m"},{"n"},{"o"},{"p"},{"q"},{"r"},{"s"},{"t"},{"u"},{"v"},{"w"},{"x"},{"y"},{"z"}};*/
//	int a[26]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26};
//	int i=0;
//	DuLinkList head=NULL;
//	/*DuLinkList end=NULL;*/
//	DuLinkList r,s;
//	r=head;
//	for(i=0;i<charNum;i++)
//	{
//		s=(DuLinkList)malloc(sizeof(DualNode));
//		s->data=a[i];
//		if(NULL==head/*&&end=NULL*/)
//		{
//			head=s;
//			/*end=s;*/
//		}
//		else
//		{
//			r->next=s;
//			s->prior=r;
//		}
//		r=s;
//	}
//	r->next=head;
//	head->prior=r;
//	return head;
//}
//
////Ïú»Ù¹¤×÷
//void Destorylist(DuLinkList *list)
//{
//	DuLinkList ptr=*list;
//	DuLinkList buff[charNum];
//	int i=0;
//
//	while(i<charNum)
//	{
//		buff[i++]=ptr;
//		ptr=ptr->next;
//	}
//
//	for(i=0;i<charNum;++i)
//	{
//		free(buff[i]);
//	}
//	*list=NULL;
//}
//
//int main()
//{	
//	int i=0;
//	int x=0;
//	int j=0;
//	DuLinkList p;
//	p=CreateLinkList();
//	scanf("%d",&j);
//
//	for(x=0;x<j;x++)
//	{	
//		p=p->prior;
//	}
//
//	while(i<charNum)
//	{
//		printf("%d ",p->data);
//		p=p->next;
//		i++;
//	}
//	
//	Destorylist(&p);
//
//	system("pause");
//	return 0;
//}