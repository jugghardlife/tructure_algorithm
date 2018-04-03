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

////初始化一个栈
void initStack(sqStack *s)
{
	s->base=(ElemType *)malloc(STACK_INIT_SIZE*sizeof(ElemType));
	if(!s->base)
	{
		exit(0);
	}
	s->top=s->base;//最开始，栈顶就是栈底
	s->stackSize=STACK_INIT_SIZE;
}

//压栈，入栈
void Push(sqStack *s,ElemType e)
{
	//如果栈满，追加空间
	if(s->top-s->base>=s->stackSize)
	{
		s->base=(ElemType *)realloc(s->base,(s->stackSize+SATCKINCREMENT)*sizeof(ElemType));
		if(!s->base)
		{
			exit(0);
		}
//		s->top=s->base+s->stackSize;									//设置栈顶
//		s->stackSize=s->stackSize+SATCKINCREMENT;	//设置栈的最大容量
	}
	*(s->top)=e;
	s->top++;
}

//弹栈
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

//二进制转化为十进制的公式
//（XnXn-1....X3X2X1）=X1*2^0+X2*2^1+.......+Xn*2^(n-1)

int main()
{
	ElemType c;
	sqStack s;
	int len,i,sum=0;
	initStack(&s);
	
	printf("请输入二级制数，输入#符号表示结束！\n");
	scanf("%c",&c);

	while(c!='#')
	{
		Push(&s,c);
		scanf("%c",&c);
	}

	getchar();  //防止获取到"\n"的值

	len=StackLen(s);
	printf("栈的当前容量是：%d\n",len);

	for(i=0;i<len;i++)
	{
		Pop(&s,&c);
		sum=sum+(c-48)*pow(2,i);
	}
	printf("转化为十进制数是：%d\n",sum);
	system("pause");
	return 0;
}