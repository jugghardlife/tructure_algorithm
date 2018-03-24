//#include <iostream>
//using namespace std;
//
//#define MAXSIZE 20
//typedef int ElemType;
//typedef int Status;
//
//typedef struct
//{
//	ElemType data[MAXSIZE];
//	int length;
//} SqList;
//
//Status GetElem(SqList L,int i,ElemType* e)
//{
//	if(L.length==0 || i<1 || i>L.length)
//	{	
//		return 0;
//	}
//	*e=L.data[i];
//
//	return 1;
//}
//
//Status ListInsert(SqList* L,int i,ElemType e)
//{
//	int k;
//	if(L->length==MAXSIZE)
//	{	
//		printf("³¬¹ýsize");
//		return 0;
//	}
//	if(i<0 || i>=L->length)
//	{
//		printf("³¬¹ýsize");
//		return 0;
//	}
//	if(i<L->length)
//	{
//		for(k=L->length;k>i;k--)
//		{
//			L->data[k]=L->data[k-1];
//		}
//	}
//	L->data[i]=e;
//	L->length++;
//	return 1;
//}
//
//Status RemoveList(SqList* L,int i,ElemType*e)
//{
//	int k;
//
//	if(L->length==0)
//	{
//		return 0;
//	}
//
//	if(i<1 || i>L->length)
//	{
//		return 0;
//	}
//	
//	*e=L->data[i-1];
//
//	if(i<L->length)
//	{
//		for(k=i;k<L->length;k++)
//		{
//			L->data[k-1]=L->data[k];
//		}
//	}
//
//	L->length--;
//
//	return 0;
//}
//int main()
//{	
//	int j=0;
//	ElemType e=4;
//	SqList L={{1,2,3,4,5,6,7},{7}};
//	int i=3;
//	//GetElem(L,i,&e);
//
//	RemoveList(&L,i,&e);
//
//	//printf("%d\n",L.data[2]);
//	for(j=0;j<L.length;j++)
//	{
//		printf("%d\n",L.data[j]);
//	}
//	printf("====================\n");
//	printf("%d\n",L.length);
//	//Status RemoveList(L,i);
//	system("pause");
//	return 0;
//}