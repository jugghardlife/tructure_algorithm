//#include <stdio.h>
//#include <stdlib.h>
//
////����˳��洢�ṹ
////һ��������n��Ԫ�أ���˳��洢�Ķ����轨��һ������n
////�Ĵ��浥Ԫ�����Ѷ��е�����Ԫ�ش洢�������ǰn����Ԫ��
////�����±�Ϊ0��һ�����Ƕ�ͷ
//
////����һ��ѭ������
//#define MAXSIZE 100
//
//typedef struct
//{
//	ElemType *base;   //���ڴ���ڴ�������ַ
//									 // ������Ҳ������������
//	int front;
//	int rear;
//}cycleQueue;
//
////��ʼ��һ��ѭ������
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
////����в���
//InsertQueue(cycleQueue *q,ElemType e)
//{
//	if((q->rear+1)%MAXSIZE==q->front)  // ��������
//	{
//		return ;  
//	}
//	q->base[q->rear]=e;
//	q->rear=(q->rear+1)%MAXSIZE;
//}
//
////�����в���
//DeleteQueue(cycleQueue *q,ElemType *e)
//{
//	if(q->front==q->rear)  //����Ϊ��
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