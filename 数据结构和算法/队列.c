//#include <stdio.h>
//#include <stdlib.h>
//
////���У���queue����ֻ������һ�˽��в��������������һ�˽���ɾ�����������Ա�
////��ջ�෴��������һ���Ƚ��ȳ�(First In First Out,FIFO)�����Ա�
////��ջ��ͬ���ǣ�����Ҳ��һ����Ҫ�����Խṹ��ʵ��һ������ͬ����Ҫ˳����������Ϊ������
////���мȿ���������ʵ�֣�Ҳ������˳���ʵ�֡���ջ�෴���ǣ�ջһ��������˳�����ʵ�֣�
////���ж����ǳ���������ʵ�֣����Ϊ������
//
//typedef char ElemType;
//
////�����еĽṹ
//typedef struct QNode 
//{
//	ElemType data;
//	struct QNode *next;
//}QNode,*QueuePrt;
//
//typedef struct 
//{
//	QueuePrt front,rear;  // ��ͷ����βָ��
//}LinkQueue;
//
////���ǽ���ͷָ��ָ�������е�ͷ��㣬����βָ��ָ���ն˽�㣨ע��ͷ��㲻�Ǳ�Ҫ�ģ���Ϊ�˷�����������Ǽ��ϣ�
////�ն���ʱ��front��ͷָ�룩��rear��βָ�룩��ָ��ͷ��㡣
//
////����һ������Ҫ�����������һ�����ڴ��д���һ��ͷ��㣬
////���ǽ����е�ͷָ���βָ�붼ָ��������ɵ�ͷ��㣬��Ϊ
////��ʱ�ǿն���
//
//void initQueue(LinkQueue *q)
//{
//	q->front=q->rear=(QueuePrt)malloc(sizeof(QNode));
//	if(!q->front)
//	{
//		exit(0);
//	}
//	q->front->next=NULL;
//}
//
////����в���
//InsertQueue(LinkQueue *q,ElemType e)
//{
//	QueuePrt p;
//	p=(QueuePrt)malloc(sizeof(QNode));
//	if(p==NULL)
//	{
//		exit(0);
//	}
//	p->data=e;
//	p->next=NULL;
//	q->rear->next=p;
//	q->rear=p;
//}
//
////�����в���
////�����в���ʱ�������еĵ�һ��Ԫ���Ƴ�����ͷָ�벻�����仯���ı�ͷָ���nextָ�뼴�ɡ�
//
//DeleteQueue(LinkQueue *q,ElemType *e)
//{
//	QueuePrt p;
//	if(q->front==q->rear)
//	{
//		return;
//	}
//	p=q->front->next;
//	*e=p->data;
//	q->front->next=p->next;
//	if(q->rear==p)
//	{
//		q->rear=q->front;
//	}
//	free(p);
//}
//
////����һ������
////���������н������ڴ�Ķ�̬������˵�һ�����в�������ʱӦ��������ʱ���ٵ���
////��������ռ���ڴ�ռ�
//
//DestroyQueue(LinkQueue *q)
//{
//	while(q->front)
//	{
//		q->rear=q->front->next;
//		free(q->front);
//		q->front=q->rear;
//	}
//}
//
//int main()
//{
//	LinkQueue q;
//	QueuePrt s;
//	char c;
//	ElemType e;
//	initQueue(&q);
//	scanf("%c",&c);
//	while('#'!=c)
//	{
//		InsertQueue(&q,c);
//		scanf("%c",&c);
//	}
//
//	s=q.front->next;
//	while(s)
//	{
//		printf("%c",s->data);
//		s=s->next;
//	}
//	
//	DestroyQueue(&q);
//
//
//	system("pause");
//	return 0;
//}