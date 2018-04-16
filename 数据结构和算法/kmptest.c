//#include <stdlib.h>
//#include <stdio.h>
////KMP 算法
////K数组也就是KMP算法中非常著名的next数组
////这是一个“智能”的数组，因为他指导着模式匹配串下一步改用第几个好元素
////去进行匹配
//
////i(后缀)=
////j(前缀)=
////NEXT数组：当模式匹配串T适配的时候，NEXT数组对应的元素指导
////应该用T串的哪个元素进行下一轮的匹配。
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