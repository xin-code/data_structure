//二叉树的存储结构-链式存储结构
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