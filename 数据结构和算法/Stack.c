#include <stdio.h>
#include <stdlib.h>
//ջ��һ������Ҫ�����Խṹ��������������ջ��ǰ��
//���������Ա��һ�־�����ʽ
//ջ���ֺ���ȳ������ݽṹӦ���Ƿǳ��㷺�ġ���������
//�������ǵ��������ÿ���һ�Ρ����ˡ������˻ص������һ�������ҳ
//ջ�Ĺٷ�����:��һ������ȳ���Last in first out��дLIFO�������Ա���Ҫ��ֻ�ڱ�β����ɾ���Ͳ������
//��ν��ջ����ʵ����һ����������Ա�˳����������������ڲ�������һЩ�����Ҫ������ƣ�
//ջ��Ԫ�ر��롰����ȳ�����
//ջ�Ĳ���ֻ����������Ա�ı�λ���С�
//����ջ��˵�������β��Ϊջ��ջ����top������Ӧ�ı�ͷ��Ϊջ�ף�bottom����
//ջ�Ĳ��������push����������ջ��Ҳ��Ϊѹջ����ջ�������ӵ����뵯�еĶ�����
//ջ��ɾ��������Pop����������ջ��Ҳ��Ϊ��ջ����ͬ�����е��ӵ����С�
//��Ϊջ�ı�����һ�����Ա����Ա������ִ洢��ʽ����ôջҲ�з�Ϊջ��˳��洢�ṹ��ջ��
// ��ʽ�洢�ṹ��
//�ʼջ�в������κ����ݣ�������ջ����ʱջ����ջ�ס�Ȼ�����ݴ�ջ�����룬ջ��ջ�׷��룬
//����ջ�ĵ�ǰ����������ݳ�ջʱ��ջ��������ջ�����ƣ�����ջ�ĵ�ǰ���� ��С
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
//	int top;    //���ڱ�עջ����λ��
//	int stackSize;
//}

//���ﶨ����һ��˳��洢��ջ��������������Ԫ�أ�base��top��stackSize������
//base��ָ��ջ�׵�ָ�������top��ָ��ջ����ָ�������stackSize֪ʶջ�ĵ�ǰ
//��ʹ�õ����������

////��ʼ��һ��ջ
//initStack(sqStack *s)
//{
//	s->base=(ElemType *)malloc(STACK_INIT_SIZE*sizeof(ElemType));
//	if(!s->base)
//	{
//		exit(0);
//	}
//	s->top=s->base;//�ʼ��ջ������ջ��
//	s->stackSize=STACK_INIT_SIZE;
//}

//ѹջ����ջ
//Push(sqStack *s,ElemType e)
//{
//	//���ջ����׷�ӿռ�
//	if(s->top-s->base>=s->stackSize)
//	{
//		s->base=(ElemType *)realloc(s->base,(s->stackSize+SATCKINCREMENT)*sizeof(ElemType));
//		if(!s->base)
//		{
//			exit(0);
//		}
//		s->top=s->base+s->stackSize;									//����ջ��
//		s->stackSize=s->stackSize+SATCKINCREMENT;	//����ջ���������
//	}
//	*(s->top)=e;
//	s->top++;
//}

//��ջ ����������ջ��ȡ�����ݣ�ջ��ָ����֮���ƵĲ���
//ÿ����ջ�ڵ���һ�����ݣ�ջ�ĵ�ǰ������-1
//�����嵥��
//
//Pop(sqStack *s,ElemType *e)
//{
//	if(s->top==s->base)   //��ջ
//	{
//		return;
//	}
//	*e=*--(s->top);
//}

//���һ��ջ�����ǽ�ջ�е�Ԫ��ȫ�����ϣ���ջ��������ռ䲢�������ı䣨�������٣�
//�������ֻҪ��s->top�����ݸ�ֵ��s->base���ɣ�����s->
int main()
{


	system("pause");
	return 0;
}