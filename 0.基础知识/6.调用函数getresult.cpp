/*
#include<stdio.h>
int add(int a,int b)
{
	return a+b;
}
void main()
{
	int result=add(1,2);
	printf("结果是：%d",result);
}
*/


/*
#include<stdio.h>
int result = 0;
void getResult(int r)
{
	++r;
}
void main()
{
	getResult(result);
	printf("得到的结果是:%d\n",result);
}
//这是对result直接取值，即result=0; 
//并没有对取到循环里的值
*/


#include<stdio.h>
int result = 0;
void getResult(int &r)		//这里的r是一个形参 是什么无所谓
{
	++r;
}
void main()
{
	getResult(result);		//这里的是调用getResult函数,然后把result传入r中,然后进行自增1操作
	printf("得到的结果是:%d\n",result);		//所以结果是1
}
