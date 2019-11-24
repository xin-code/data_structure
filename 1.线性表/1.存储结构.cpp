//顺序存储结构 
//用数组表示 
//从0到length-1是已经存储数值的 从0到maxSize的是总共能容纳的数量

int A[maxSize];		//定义数组为A大小为maxSize
int length = 0;		//初始化

//链式存储结构
typedef struct Lnode
{
	int data;
	struct Lnode *next;
}Lnode;		//定义链式存储结构结构体

Lnode *L;
L=(Lnode *)malloc(sizeof(Lnode));	//申请存储空间
A->next=B;
B->next=C;
C->next=D;
