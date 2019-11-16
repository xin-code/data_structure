typedef struct School
{
	int age;
	float weight;
	char sex;
	struct School *front;	//定义头指针
	struct School *rear;	//定义尾指针
}School;	//定义一个School类型的结构体
#include <stdio.h>
void main()
{
	School sch;
	sch.age=18;
	sch.weight=140.2;
	sch.sex='w';
	printf("年龄:%d\n体重:%f\n性别:%c\n",sch.age,sch.weight,sch.sex);		//输出
}