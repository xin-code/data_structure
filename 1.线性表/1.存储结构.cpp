//˳��洢�ṹ 
//�������ʾ 
//��0��length-1���Ѿ��洢��ֵ�� ��0��maxSize�����ܹ������ɵ�����
int A[maxSize];		//��������ΪA��СΪmaxSize
int length = 0;		//��ʼ��

//��ʽ�洢�ṹ
typedef struct Lnode
{
	int data;
	struct Lnode *next;
}Lnode;		//������ʽ�洢�ṹ�ṹ��

Lnode *L;
L=(Lnode *)malloc(sizeof(Lnode));	//����洢�ռ�
A->next=B;
B->next=C;
C->next=D;