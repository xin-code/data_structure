typedef struct DLnode
{
	int data;
	struct DLnode *prior;
	struct DLnode *next;
}DLnode;	//定义一个双链表结构体
DLnode *L;
L=(DLnode *)malloc(sizeof(DLnode));	//申请存储空间
A->next=B; B->next=C; C->next=D;
D->prior=C; C->prior=B; B->prior=A;

带头结点的双链表
//判空条件:
Head->next==NULL;

不带头结点的双链表
//判空条件:
Head==NULL;