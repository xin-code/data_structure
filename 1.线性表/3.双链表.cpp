typedef struct DLnode
{
	int data;
	struct DLnode *prior;
	struct DLnode *next;
}DLnode;	//����һ��˫����ṹ��
DLnode *L;
L=(DLnode *)malloc(sizeof(DLnode));	//����洢�ռ�
A->next=B; B->next=C; C->next=D;
D->prior=C; C->prior=B; B->prior=A;

��ͷ����˫����
//�п�����:
Head->next==NULL;

����ͷ����˫����
//�п�����:
Head==NULL;