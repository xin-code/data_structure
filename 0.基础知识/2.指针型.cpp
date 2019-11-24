//指针型:存放变量地址的变量类型

#include <stdio.h>
void main()
{
	int *p;		//定义一个指针p
	int j;		//定义一个整形
	p = &j;		//把j的地址传递给p
	printf("输出a的地址为:%d",p);	//输出指针P的地址
}