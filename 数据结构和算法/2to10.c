#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define STACK_INIT_SIZE 20
#define SATCKINCREMENT 10

typedef char ElemType;

typedef struct
{
	ElemType *base;
	ElemType *top;
	int stackSize;
}sqStack;

////��ʼ��һ��ջ
void initStack(sqStack *s)
{
	s->base=(ElemType *)malloc(STACK_INIT_SIZE*sizeof(ElemType));
	if(!s->base)
	{
		exit(0);
	}
	s->top=s->base;//�ʼ��ջ������ջ��
	s->stackSize=STACK_INIT_SIZE;
}

//ѹջ����ջ
void Push(sqStack *s,ElemType e)
{
	//���ջ����׷�ӿռ�
	if(s->top-s->base>=s->stackSize)
	{
		s->base=(ElemType *)realloc(s->base,(s->stackSize+SATCKINCREMENT)*sizeof(ElemType));
		if(!s->base)
		{
			exit(0);
		}
//		s->top=s->base+s->stackSize;									//����ջ��
//		s->stackSize=s->stackSize+SATCKINCREMENT;	//����ջ���������
	}
	*(s->top)=e;
	s->top++;
}

//��ջ
void Pop(sqStack *s,ElemType *e)
{
	if(s->top==s->base)
	{
		return ;
	}
	*e=*--(s->top);
}

int StackLen(sqStack s)
{
	return (s.top-s.base);
}

//������ת��Ϊʮ���ƵĹ�ʽ
//��XnXn-1....X3X2X1��=X1*2^0+X2*2^1+.......+Xn*2^(n-1)

int main()
{
	ElemType c;
	sqStack s;
	int len,i,sum=0;
	initStack(&s);
	
	printf("�������������������#���ű�ʾ������\n");
	scanf("%c",&c);

	while(c!='#')
	{
		Push(&s,c);
		scanf("%c",&c);
	}

	getchar();  //��ֹ��ȡ��"\n"��ֵ

	len=StackLen(s);
	printf("ջ�ĵ�ǰ�����ǣ�%d\n",len);

	for(i=0;i<len;i++)
	{
		Pop(&s,&c);
		sum=sum+(c-48)*pow(2,i);
	}
	printf("ת��Ϊʮ�������ǣ�%d\n",sum);
	system("pause");
	return 0;
}