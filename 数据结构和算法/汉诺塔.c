#include <stdio.h>
#include <stdlib.h>

//��ŵ��

void move(int n,char x,char y,char z)
{
	if(1==n)
	{
		printf("%c-->%c\n",x,z);
	}
	else
	{
		move(n-1,x,z,y);                        //��n-1�����Ӵ�x����z�Ƶ�y��
		printf("%c-->%c\n",x,z);   //����n�����Ӵ�x�Ƶ�z��
		move(n-1,y,x,z);                       //��n-1�����Ӵ�y����x�ƶ���z��
	}
}

int main()
{

	int n;
	printf("�����뺺ŵ���Ĳ�����");
	scanf("%d",&n);
	printf("�ƶ��������£�");

	move(n,'x','y','z');

	system("pause");
	return 0;
}