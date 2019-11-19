//定义结构体
typedef struct BTNode
{
	int data;
	BTNode *lchild;
	BTNode *rchild;
}BTNode;

A->lchild=B;
B->rchild=C;

B->lchild=D;
B->rchild=NULL;

C->lchild=E;
C->rchild=NULL;
