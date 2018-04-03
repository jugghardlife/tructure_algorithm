//#include <stdio.h>
//#include <stdlib.h>
//栈是一个种重要的线性结构，可以这样讲，栈是前面
//讲过的线性表的一种具体形式
//栈这种后进先出的数据结构应用是非常广泛的。在生活中
//例如我们的浏览器，每点击一次“后退”都是退回到最近的一次浏览网页
//栈的官方定义:是一个后进先出（Last in first out缩写LIFO）的线性表，它要求只在表尾进行删除和插入操作
//所谓的栈，其实就是一个特殊的线性表（顺序表，链表），但是他在操作上有一些特殊的要求和限制：
//栈的元素必须“后进先出”。
//栈的操作只能在这个线性表的表位进行。
//对于栈来说，这个表尾称为栈的栈顶（top），相应的表头称为栈底（bottom）。
//栈的插入操作（push），叫做进栈，也称为压栈，入栈。类似子弹放入弹夹的动作。
//栈的删除操作（Pop），叫做出栈，也称为弹栈。如同弹夹中的子弹出夹。
//因为栈的本质是一个线性表，线性表有两种存储形式，那么栈也有分为栈的顺序存储结构和栈的
// 链式存储结构。
//最开始栈中不含有任何数据，叫做空栈，此时栈顶就栈底。然后数据从栈顶进入，栈顶栈底分离，
//整个栈的当前容量变大。数据出栈时从栈顶弹出，栈顶下移，整个栈的当前容量 变小
//#define STACK_INIT_SIZE 100
//#define SATCKINCREMENT 10
//typedef struct
//{
//	ElemType *base;
//	ElemType *top;
//	int stackSize;
//}sqStack;

//typedef struct 
//{
//	ElemType data[MAXSIZE];
//	int top;    //用于标注栈顶的位置
//	int stackSize;
//}

//这里定义了一个顺序存储的栈，他包含了三个元素：base，top，stackSize。其中
//base是指向栈底的指针变量，top是指向栈顶的指针变量，stackSize知识栈的当前
//可使用的最大容量。

////初始化一个栈
//initStack(sqStack *s)
//{
//	s->base=(ElemType *)malloc(STACK_INIT_SIZE*sizeof(ElemType));
//	if(!s->base)
//	{
//		exit(0);
//	}
//	s->top=s->base;//最开始，栈顶就是栈底
//	s->stackSize=STACK_INIT_SIZE;
//}

//压栈，入栈
//Push(sqStack *s,ElemType e)
//{
//	//如果栈满，追加空间
//	if(s->top-s->base>=s->stackSize)
//	{
//		s->base=(ElemType *)realloc(s->base,(s->stackSize+SATCKINCREMENT)*sizeof(ElemType));
//		if(!s->base)
//		{
//			exit(0);
//		}
//		s->top=s->base+s->stackSize;									//设置栈顶
//		s->stackSize=s->stackSize+SATCKINCREMENT;	//设置栈的最大容量
//	}
//	*(s->top)=e;
//	s->top++;
//}

//出栈 操作就是在栈顶取出数据，栈顶指针随之下移的操作
//每当从栈内弹出一个数据，栈的当前容量就-1
//代码清单：
//
//Pop(sqStack *s,ElemType *e)
//{
//	if(s->top==s->base)   //空栈
//	{
//		return;
//	}
//	*e=*--(s->top);
//}

//清空一个栈，就是将栈中的元素全部作废，但栈本身物理空间并不发生改变（不是销毁）
//因此我们只要将s->top的内容赋值给s->base即可，这样s->base等于s->top,也就表明
//这个栈是空的了。这个原理跟高级格式化只是但单纯地清空文件列表而没有覆盖的原理是一样的
//ClearStack(sqStack *s)
//{
//	s->top=s->base;
//}
//销毁一个栈与清空一个栈不同，销毁一个栈是要释放掉该栈所占据的物理内存空间，因此不要把销毁
//一个栈与清空一个栈这两种操作混淆
//计算栈的当前容量也就是计算栈中元素的个数，因此只要返回s.top-s.base即可。
//注意，栈的最大容量是指该栈占据内存空间的大小，其值是s.stackSize，它与栈的
//当前容量不是一个概念。
//计算栈的当前容量

//int StackLen(sqStack s)
//{
//	return (s.top-s.base);    //指针之间不能相加的可以相减也可以++或者--
//}
//DestroyStack(sqStack *s)
//{
//	int i,len;
//	len=s->stackSize;
//	for(i=0;i<len;i++)
//	{
//		free(s->base);
//		s->base++;
//	}
//	s->base=s->top=NULL;
//	s->stackSize=0;
//}
//int main()
//{
//
//
//	system("pause");
//	return 0;
//}