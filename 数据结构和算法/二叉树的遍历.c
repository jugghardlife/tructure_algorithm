//#include <stdlib.h>
//#include <stdio.h>
////�������ı���(traversing binary tree)��ָ�Ӹ�������,
////����ĳ�ִ������η��ʶ����������н�㣬ʹ��ÿ�����
////������һ���ҽ�������һ��
////�������ı�������ͬ�����Խṹ�����Խṹ���Ҳ����
////��Ϊ˳��ѭ����˫��ȼ򵥵ı�����ʽ
////�������ı�����ʽ���Ժܶ࣬��Ҫ��Ϊ����:
////ǰ���������������Ϊ�գ���ղ������أ������ȷ��ʸ�
////					  ��㣬Ȼ��ǰ���������������ǰ�������������
////�������������Ϊ�գ���ղ������أ�����Ӹ���㿪ʼ��
//						  //ע�Ⲣ�����ȷ��ʸ���㣩���������������
//						  // ��������Ȼ���Ƿ��ʸ���㣬��������������
//						  // ����
////�������:����Ϊ�գ���ղ������أ������������Ҷ����
////					�ķ�ʽ�����������������������ʸ����
//					
////�������������Ϊ�գ���ղ������أ���������ĵ�һ�㣬Ҳ����
//							//�����ӿ�ʼ���ʣ����϶������������ڲ��У�����
//							//���ҵ�˳��Խ���������
////���Ľڵ�֮�䲻����Ψһ��ǰ���ͺ�������Ĺ�ϵ���ڷ���
////һ��������һ�������ʵĽ�������Ų�ͬ��ѡ�񡣾���
////���ǵ�������������;��һ��̤�����̽��䡣
//
//typedef char ElemType;
//
//typedef struct BiTNode
//{
//	ElemType data;
//	struct BiTNode *lchild,*rchild;
//}BiTNode,*BiTree;
//
////����һ�Ŷ�����,Լ���û�����ǰ������ķ�ʽ��������
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
////���ʶ��������ľ������
//void visit(ElemType c,int level)
//{
//	printf("%cλ�ڵ�%d��\n",c,level);
//}
//
////����������
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