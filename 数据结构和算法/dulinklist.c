//#include <stdio.h>
//#include <stdlib.h>
////˫������
//
////˫���������
////s->next=p;
////s->prior=p->prior;
////p->prior->next=s;
////p->prior=s;     //˳��Ҫд��
////˫������ɾ��
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