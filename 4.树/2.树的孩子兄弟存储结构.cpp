//定义结构体
typedef struct BTNode
{
	int data;
	BTNode *child;
	BTNode *brother;
}BTNode;

A->child=B;
B->child=E;
C->child=D;

A->brother=NULL;
B->brother=C;
D->brother=NULL;