/*
#include<stdio.h>
int add(int a,int b)
{
	return a+b;
}
void main()
{
	int result=add(1,2);
	printf("����ǣ�%d",result);
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
	printf("�õ��Ľ����:%d\n",result);
}
//���Ƕ�resultֱ��ȡֵ����result=0; 
//��û�ж�ȡ��ѭ�����ֵ
*/


#include<stdio.h>
int result = 0;
void getResult(int &r)		//�����r��һ���β� ��ʲô����ν
{
	++r;
}
void main()
{
	getResult(result);		//������ǵ���getResult����,Ȼ���result����r��,Ȼ���������1����
	printf("�õ��Ľ����:%d\n",result);		//���Խ����1
}
