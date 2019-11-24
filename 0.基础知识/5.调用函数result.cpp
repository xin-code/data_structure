#include <stdio.h>
int	add(int a,int b)	//定义一个add加法函数
{
	return a+b;
}

void main()
{
	int result=add(1,2);	//调用add函数
	printf("输出结果为：%d\n",add(1,2));	//输出时，传入结果方法一
	printf("输出结果为：%d\n",result);		//输出时，传入结果方法二
}