//#include <stdlib.h>
//#include <stdio.h>
////��׺���ʽת��Ϊ��׺���
////�ܽ���򣺴����ұ�����׺���ʽ��ÿ�����ֺͷ��ţ��������־�ֱ����������Ƿ��ţ�
////���ж�����ջ�����ŵ����ȼ��������������ȼ�����ջ�����ţ���ջ��Ԫ�����γ�ջ�������
////ֱ�����������Ż�ջ�ղŽ��ȴ����Ǹ���������ջ��
//
//#define STACK_INIT_SIZE        20
//#define STACKINCREMENT 10
//#define MAXBUFFER              10
//
//typedef char ElemType;
//typedef struct
//{
//	ElemType *base;
//	ElemType *top;
//	int stackSize;
//}sqStack;
//
//InitStack(sqStack *s)
//{
//	s->base=(ElemType *)malloc(STACK_INIT_SIZE * sizeof(ElemType));
//	if(!s->base)
//	{
//		exit(0);
//	}
//	s->top=s->base;
//	s->stackSize=STACK_INIT_SIZE;
//}
//
//Push(sqStack *s,ElemType e)
//{
//	if(s->top-s->base==s->stackSize)
//	{
//		s->base=(ElemType *)realloc(s->base,(s->stackSize+STACKINCREMENT)*sizeof(ElemType));
//		if(!s->base)
//		{
//			exit(0);
//		}
//		s->top=s->base+s->stackSize;
//		s->stackSize=s->stackSize+STACKINCREMENT;
//	}
//	*(s->top)=e;
//	s->top++;
//}
//
//Pop(sqStack *s,ElemType *e)
//{
//	if(s->top==s->base)
//	{
//		return ;
//	}
//	*e=*--(s->top);
//}
//
//int StackLen(sqStack s)
//{
//	return (s.top-s.base);
//}
//
//int main()
//{
//	sqStack s;
//	char c;
//	ElemType e;
//	int len=0;
//	int i=0;
//	InitStack(&s);
//	printf("��������׺���ʽ����#��Ϊ������־��");
//	
//	scanf("%c",&c);
//	
//	while('#'!=c)
//	{
//		while(c>='0'&&c<='9')
//		{
//			printf("%c",c);
//			scanf("%c",&c);
//			if(c<'0' || c>'9')
//			{
//				printf(" ");
//			}
//		}
//		if(')'==c)
//		{
//			Pop(&s,&e);
//			while('('!=e)
//			{
//				printf("%c ",e);
//				Pop(&s,&e);
//			}
//		}
//		else if('+'==c || '-'==c)
//		{
//			if(!StackLen(s))
//			{
//				/*Push(&s,c);*/
//			}
//			else
//			{
//				do
//				{ 
//					Pop(&s,&e);
//					if('('==e)
//					{
//						Push(&s,e);
//					}
//					else
//					{
//						printf("%c ",e);
//					}
//				}while(StackLen(s)&&'('!=e);
//			}
//			Push(&s,c);
//		}
//		else if('*'==c || '/'==c || '('==c)
//		{
//			Push(&s,c);
//		}
//		else if('#'==c)
//		{
//			break;
//		}
//		else 
//		{
//			printf("\n���������ʽ����!\n");
//			return -1;
//		}
//
//		scanf("%c",&c);
//	}
//
//	while(StackLen(s))
//	{
//		Pop(&s,&e);
//		printf("%c ",e);
//	}
//
//	system("pause");
//	return 0;
//}