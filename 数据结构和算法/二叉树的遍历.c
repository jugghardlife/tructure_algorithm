//#include <stdlib.h>
//#include <stdio.h>
////二叉树的遍历(traversing binary tree)是指从根结点出发,
////按照某种次序依次访问二叉树中所有结点，使得每个结点
////被访问一次且仅被访问一次
////二叉树的遍历次序不同于线性结构，线性结构最多也就是
////分为顺序、循环、双向等简单的遍历方式
////二叉树的遍历方式可以很多，主要分为四种:
////前序遍历：若二叉树为空，则空操作返回，否则先访问根
////					  结点，然后前序遍历左子树，再前序遍历右子树。
////中序遍历：若树为空，则空操作返回，否则从根结点开始（
//						  //注意并不是先访问根结点），中序遍历根结点的
//						  // 左子树，然后是访问根结点，最后中序遍历右子
//						  // 树。
////后序遍历:若树为空，则空操作返回，否则从左到右先叶后结点
////					的方式遍历访问左右子树，最后访问根结点
//					
////层序遍历：若树为空，则空操作返回，否则从树的第一层，也就是
//							//根结点从开始访问，从上而下逐层遍历，在层中，按从
//							//左到右的顺序对结点逐个访问
////数的节点之间不存在唯一的前驱和后继这样的关系，在访问
////一个结点后，下一个被访问的结点面临着不同的选择。就像
////我们的人生，漫漫长途上一步踏错，满盘皆输。
//
//typedef char ElemType;
//
//typedef struct BiTNode
//{
//	ElemType data;
//	struct BiTNode *lchild,*rchild;
//}BiTNode,*BiTree;
//
////创建一颗二叉树,约定用户遵照前序遍历的方式输入数据
//void CreateBiTree(BiTree *T)
//{
//	char c;
//	scanf("%c",&c);
//	if(' '==c)
//	{
//		*T=NULL;
//	}
//	else
//	{
//		*T=(BiTNode *)malloc(sizeof(BiTNode));
//		(*T)->data=c;
//		CreateBiTree(&(*T)->lchild);
//		CreateBiTree(&(*T)->rchild);
//	}
//}
//
////访问二叉树结点的具体操作
//void visit(ElemType c,int level)
//{
//	printf("%c位于第%d层\n",c,level);
//}
//
////遍历二叉树
//void PreOrderTraverse(BiTree T,int level)
//{
//	if(T)
//	{
//		visit(T->data,level);
//		PreOrderTraverse(T->lchild,level+1);
//		PreOrderTraverse(T->rchild,level+1);
//	}
//}
//
//int main()
//{
//	int level=1;
//	BiTree T=NULL;
//	CreateBiTree(&T);
//	PreOrderTraverse(T,level);
//	system("pause");
//	return 0;
//}