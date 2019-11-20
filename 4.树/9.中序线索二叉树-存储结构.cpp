//中序线索二叉树-存储结构
typedef struct TBTNode
{
	int data;
	int lTag;
	int rTag;
	TBTNode *lchild;
	TBTNode *rchild;
}TBTNode;