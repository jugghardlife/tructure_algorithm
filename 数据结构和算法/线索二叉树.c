#include <stdlib.h>
#include <stdio.h>

//����������

typedef char ElemType;
typedef enum {Link,Thread} PointerTag;

typedef struct BiThrNode
{
	ElemType data;
	struct BiThrNode *lchild,*rchild;
	PointerTag ltag;
	PointerTag rtag;
}BiThrNode,*BiThrTree;


int main()
{

	system("pause");
	return 0;
}