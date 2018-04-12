//#include <stdio.h>
//#include <stdlib.h>
//
////队列顺序存储结构
////一个队列有n个元素，则顺序存储的队列需建立一个大于n
////的储存单元，并把队列的所有元素存储在数组的前n个单元，
////数组下标为0的一端则是对头
//
////定义一个循环队列
//#define MAXSIZE 100
//
//typedef struct
//{
//	ElemType *base;   //用于存放内存分配基地址
//									 // 这里你也可以用数组存放
//	int front;
//	int rear;
//}cycleQueue;
//
////初始化一个循环队列
//initQueue(cycleQueue *q)
//{
//	q->base=(ElemType *)malloc(MAXSIZE *sizeof(ElemType));
//	if(!q->base)
//	{
//		exit(0);
//	}
//	q->front=q->rear=0;
//}
//
////入队列操作
//InsertQueue(cycleQueue *q,ElemType e)
//{
//	if((q->rear+1)%MAXSIZE==q->front)  // 队列已满
//	{
//		return ;  
//	}
//	q->base[q->rear]=e;
//	q->rear=(q->rear+1)%MAXSIZE;
//}
//
////出队列操作
//DeleteQueue(cycleQueue *q,ElemType *e)
//{
//	if(q->front==q->rear)  //队列为空
//	{
//		return ;
//	}
//	*e=q->base[q->front];
//	q->front=(q->front+1)%MAXSIZE;
//}
//
//int main()
//{
//
//	system("pause");
//	return 0;
//}