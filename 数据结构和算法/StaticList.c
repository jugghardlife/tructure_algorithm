//#include <stdio.h>
//#include <stdlib.h>
////��̬�����ԭ�����������������������̬���������������������α�ʵ�ַ�
////��̬����Ҫ�������:����þ�̬ģ�⶯̬����ṹ�Ĵ洢�ռ���䣬Ҳ����Ҫ��ʱ�����룬��ҪҪ��ʱ���ͷ�
////ͷ�α�ָ���һ��û�洢���ݵ��±��ַ
////β�α�ָ���һ�������ݵ��±��ַ
//
////ע������:1��������ĵ�һ�������һ��Ԫ�������⴦�����ǵ�data���������
////2������ͨ����δʹ�õ�����Ԫ�س�Ϊ��������
////3������ĵ�һ��Ԫ�أ����±�Ϊ0���Ǹ�Ԫ�ص�cur�ʹ�ű�������ĵ�һ����±꣨ͷ�α�ָ���һ��û�洢���ݵ��±��ַ��
////4���������һ��Ԫ�أ����±�ΪMAXSIZE-1��cur���ŵ�һ������ֵ��Ԫ���±꣬�൱�ڵ������е�ͷ������á�
////5��������ֵ�����һ��Ԫ�ص�curӦ����0��
//
////�ŵ㣺
////1���ڲ����ɾ������ʱ��ֻ��Ҫ�޸��α꣬����Ҫ�ƶ�Ԫ�ء��Ӷ��Ľ�����˳��洢�ṹ�еĲ����ɾ��
//// ������Ҫ�ƶ�����Ԫ�ص�ȱ�㡣
////ȱ�㣺
////1��û�н�������洢���䣨���飩�����ı�����ȷ�������⡣
////2��ʧȥ��˳��洢�ṹ�����ȡ���ص㡣
//#define MAXSIZE 1000
//typedef int ElemType;
//typedef int Status;
//
//typedef struct
//{
//	ElemType data;  //����
//	int cur;
//}Component,StaticLinkList[MAXSIZE];//����һ���ṹ������
//
//Status InitList(StaticLinkList space)//��ʼ����̬����
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
//	int i=space[0].cur;//��¼��ǰ�Ŀ������
//
//	if(space[0].cur)//����ǿյľͲ�ִ��
//	{
//		space[0].cur=space[i].cur;//��������һ������������Ϊ����
//	}
//
//	return i;// ȡ����ǰ�Ŀ������
//}
//
//Status ListInsert(StaticLinkList L,int i,ElemType e)
//{
//	int j,k,l;
//	
//	k=MAXSIZE-1;//��������һ��Ԫ��
//
//	if(i<1){
//		return 0;
//	}
//	
//	j=Malloc_SLL(L);//j�ǵ�ǰ
//
//	if(j)
//	{
//		L[j].data=e;
//		for(l=1;l<=i-1;l++)//����Ҫ�����λ��
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