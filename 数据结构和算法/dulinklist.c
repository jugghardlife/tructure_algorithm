//#include <stdio.h>
//#include <stdlib.h>
////双向链表
//
////双向链表插入
////s->next=p;
////s->prior=p->prior;
////p->prior->next=s;
////p->prior=s;     //顺序不要写错
////双向链表删除
////p->prior->next=p->next;
////p->next->prior=p->prior;
////free(p);
//typedef int ElemType;
//typedef struct DualNode
//{
//	ElemType data;
//	struct DualNode *prior;
//	struct DualNode *next;
//}DualNode,*DuLinkList;
//
//int main()
//{
//	system("pause");
//	return 0;
//}