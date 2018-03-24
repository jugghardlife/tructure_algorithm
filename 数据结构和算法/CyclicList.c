#include <stdlib.h>
#include <stdlib.h>
//循环链表：将单链表中终端结点的指针端由空指针改为指向头结点，
//就使整个单链表形成一个环，这种头尾相接的单链表成为单循环链表。
//其实虚幻链表的单链表的主要差异就在于循环的判断空链表的条件上，
//原来判断head->next是否为null，现在则是head->next是否等于head

//链表存储结构的定义
typedef struct CLinkList
{
	int Data;
	struct CLinkList *next;
}node;

//操作

//初始化循环链表




int main(void )
{
	
	system("pause");
	return 0;
}