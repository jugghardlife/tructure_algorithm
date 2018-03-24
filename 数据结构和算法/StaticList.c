//#include <stdio.h>
//#include <stdlib.h>
////静态链表的原理：用数组描述的链表叫做静态链表这种描述方法叫做游标实现法
////静态链表要解决的是:如何用静态模拟动态链表结构的存储空间分配，也是需要的时候申请，不要要的时候释放
////头游标指向第一个没存储数据的下标地址
////尾游标指向第一个有数据的下标地址
//
////注意事项:1、对数组的第一个和最后一个元素做特殊处理，他们的data不存放数据
////2、我们通常把未使用的数组元素称为备用链表
////3、数组的第一个元素，即下标为0的那个元素的cur就存放备用链表的第一结点下标（头游标指向第一个没存储数据的下标地址）
////4、数组最后一个元素，即下标为MAXSIZE-1的cur则存放第一个有数值的元素下标，相当于单链表中的头结点作用。
////5、数组有值的最后一个元素的cur应该是0。
//
////优点：
////1、在插入和删除操作时，只需要修改游标，不需要移动元素。从而改进了在顺序存储结构中的插入和删除
//// 操作需要移动大量元素的缺点。
////缺点：
////1、没有解决连续存储分配（数组）带来的表长难以确定的问题。
////2、失去了顺序存储结构随机存取的特点。
//#define MAXSIZE 1000
//typedef int ElemType;
//typedef int Status;
//
//typedef struct
//{
//	ElemType data;  //数据
//	int cur;
//}Component,StaticLinkList[MAXSIZE];//重载一个结构体数组
//
//Status InitList(StaticLinkList space)//初始化静态链表
//{
//	int i=0;
//	for(i=0;i<(MAXSIZE-1);i++)
//	{
//		space[i].cur=i+1;
//	}
//
//	space[MAXSIZE-1].cur=0;
//
//	return 1;
//}
//
//int Malloc_SLL(StaticLinkList space)
//{
//	int i=space[0].cur;//记录当前的空余分量
//
//	if(space[0].cur)//如果是空的就不执行
//	{
//		space[0].cur=space[i].cur;//把他的下一个分量用来作为备用
//	}
//
//	return i;// 取出当前的空余分量
//}
//
//Status ListInsert(StaticLinkList L,int i,ElemType e)
//{
//	int j,k,l;
//	
//	k=MAXSIZE-1;//数组的最后一个元素
//
//	if(i<1){
//		return 0;
//	}
//	
//	j=Malloc_SLL(L);//j是当前
//
//	if(j)
//	{
//		L[j].data=e;
//		for(l=1;l<=i-1;l++)//查找要插入的位置
//		{
//			k=L[k].cur;
//		}
//		
//		L[j].cur=L[k].cur;
//		L[k].cur=j;
//
//		return 1;
//	}
//
//	return 0;
//}
//
//void Free_SLL(StaticLinkList space,int k)
//{
//	space[k].cur=space[0].cur;
//	space[0].cur=k;
//}
//
//Status ListDelete(StaticLinkList L,int i)
//{
//	int j,k;
//	
//	if(i<1)
//	{
//		return 0;
//	}
//
//	k=MAXSIZE-1;
//
//	for(j=1;j<=i-1;j++)
//	{
//		k=L[k].cur;
//	}
//
//	j=L[k].cur;
//	L[k].cur=L[j].cur;
//
//	Free_SLL(L,j);
//
//	return 1;
//}
//
//Status ListLength( StaticLinkList L)					  
//{
//	int j=0;
//	int i=L[MAXSIZE-1].cur;
//	while(i)
//	{
//		i=L[i].cur;
//		j++;
//	}
//
//	return j;
//}
//
//int main()
//{	
//	int i=3;
//	int j=0;
//	int q=q=999;
//	int w;
//	StaticLinkList space;
//	ElemType e=10;
//	InitList(space);
//	space[999].cur=1;
//	space[0].cur=4;
//	space[1].data=1;
//	space[2].data=2;
//	space[3].data=3;
//	space[3].cur=0;
//	
//	ListInsert(space,i,e);
//	ListDelete(space,2);
//	w=ListLength(space);
//
//	printf("%d\n\n",w);
//	/*for(j=1;j<10;j++)
//	{	
//		q=space[q].cur;
//		printf("%d\n",space[q].data);
//		if(0!=q){
//			continue;
//		}
//		
//	}*/
//
//	while(q=space[q].cur){
//		printf("%d\n",space[q].data);
//	}
//
//	printf("===================\n");
//
//	for(j=0;j<10;j++)
//	{
//		printf("%d\n",space[j].cur);
//	}
//	
//	/*printf("%d",sizeof (space)/sizeof(Component));*/
//	system("pause");
//	return 0;
//}