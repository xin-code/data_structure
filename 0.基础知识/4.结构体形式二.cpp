typedef struct School
{
	int age;
	float weight;
	char sex;
	struct School *front;	//����ͷָ��
	struct School *rear;	//����βָ��
}School;	//����һ��School���͵Ľṹ��
#include <stdio.h>
void main()
{
	School sch;
	sch.age=18;
	sch.weight=140.2;
	sch.sex='w';
	printf("����:%d\n����:%f\n�Ա�:%c\n",sch.age,sch.weight,sch.sex);		//���
}