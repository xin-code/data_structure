#include <stdio.h>
int	add(int a,int b)	//����һ��add�ӷ�����
{
	return a+b;
}

void main()
{
	int result=add(1,2);	//����add����
	printf("������Ϊ��%d\n",add(1,2));	//���ʱ������������һ
	printf("������Ϊ��%d\n",result);		//���ʱ��������������
}
