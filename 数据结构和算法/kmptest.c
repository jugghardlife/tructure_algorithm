//#include <stdlib.h>
//#include <stdio.h>
////KMP �㷨
////K����Ҳ����KMP�㷨�зǳ�������next����
////����һ�������ܡ������飬��Ϊ��ָ����ģʽƥ�䴮��һ�����õڼ�����Ԫ��
////ȥ����ƥ��
//
////i(��׺)=
////j(ǰ׺)=
////NEXT���飺��ģʽƥ�䴮T�����ʱ��NEXT�����Ӧ��Ԫ��ָ��
////Ӧ����T�����ĸ�Ԫ�ؽ�����һ�ֵ�ƥ�䡣
//
//typedef char* String;
//
//void get_next(String T,int *next)
//{
//	int j=0;
//	int i=0;
//	next[1]=0;
//	while(i<T[0])
//	{
//		if(0==j || T[i]==T[j])
//		{
//			i++;
//			j++;
//			next[i]=j;
//		}
//		else
//		{
//		j=next[j];
//		}
//	}
//}
//
//int main()
//{
//	char str[255]=" ababaaaba";
//	int next[255];
//	int i=1;
//
//	str[0]=9;
//
//	get_next(str,next);
//
//	for(i=1;i<10;i++)
//	{
//		printf("%d",next[i]);
//	}
//
//	system("pause");
//	return 0;
//}