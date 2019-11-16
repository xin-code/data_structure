//定义结构体student
typedef struct
{
	int age;
	float heigh;
	char sex;
}School;		//定义一个School类型的结构体

#include<stdio.h>
void main()
{
	School s;
	s.age=10;
	s.heigh=175.5;
	s.sex='M';
    printf("age:%d\nheigh:%f\nsex:%c\n",s.age,s.heigh,s.sex);//输出
}
