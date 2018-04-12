//#include <stdio.h>
//#include <stdlib.h>
////迭代  while    do...while   for    用迭代的时候是大概了解全部情况
////递归不能确定到底有多少东西的时候使用  效率会低  现实中能用迭代就用迭代
//int main()
//{
//	//int i;                          //迭代
//	//int a[40];
//
//	//a[0]=0;
//	//a[1]=1;
//	//printf("%d %d",a[0],a[1]);
//
//	//for(i=2;i<40;i++)
//	//{
//	//	a[i]=a[i-1]+a[i-2];
//	//	printf(" %d ",a[i]);
//	//}
//
//	int Fib(int i)
//	{
//		if(i<2)
//		{
//			return i==0?0:1;
//		}
//
//		return Fib(i-1)+Fib(i-2);
//	}
//
//	system("pause");
//	return 0;
//}