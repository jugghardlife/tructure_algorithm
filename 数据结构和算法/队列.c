//#include <stdio.h>
//#include <stdlib.h>
//
////队列：（queue）是只允许在一端进行插入操作。而在另一端进行删除操作的线性表。
////与栈相反，队列是一种先进先出(First In First Out,FIFO)的线性表
////与栈相同的是，队列也是一种重要的线性结构，实现一个队列同样需要顺序表或链表作为基础。
////队列既可以用链表实现，也可以用顺序表实现。跟栈相反的是，栈一般我们用顺序表来实现，
////而列队我们常用链表来实现，简称为连队列
//
//typedef char ElemType;
//
////链队列的结构
//typedef struct QNode 
//{
//	ElemType data;
//	struct QNode *next;
//}QNode,*QueuePrt;
//
//typedef struct 
//{
//	QueuePrt front,rear;  // 队头，队尾指针
//}LinkQueue;
//
////我们将对头指针指向连队列的头结点，而队尾指针指向终端结点（注：头结点不是必要的，但为了方便操作，我们加上）
////空队列时，front（头指针）和rear（尾指针）都指向头结点。
//
////创建一个队列要完成两个任务：一是在内存中创建一个头结点，
////二是将队列的头指针和尾指针都指向这个生成的头结点，因为
////此时是空队列
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
////入队列操作
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
////出队列操作
////出队列操作时将队列中的第一个元素移出，队头指针不发生变化，改变头指针的next指针即可。
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
////销毁一个队列
////由于链队列建立在内存的动态区，因此当一个队列不再有用时应当把它及时销毁掉，
////以免过多地占用内存空间
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