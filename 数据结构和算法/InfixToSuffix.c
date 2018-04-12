//#include <stdlib.h>
//#include <stdio.h>
////中缀表达式转换为后缀表达
////总结规则：从左到右遍历中缀表达式的每个数字和符号，若是数字就直接输出，若是符号，
////则判断与其栈顶符号的优先级，是右括号优先级低于栈顶符号，则栈顶元素依次出栈并输出，
////直到遇到左括号或栈空才将等待的那个符号载入栈。
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
//	printf("请输入中缀表达式，以#作为结束标志：");
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
//			printf("\n出错：输入格式错误!\n");
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