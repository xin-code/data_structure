栈
//顺序栈

初始化栈
int stack[maxSize];
int top=-1;
※初始化栈顶指针并不一定全部是-1

入栈操作
stack[++top]=1;			//先自增，再取值
stack[++top]=2;

出栈操作
x=stack[top--];			//先取值，在自减
x=stack[top--];

再次入栈操作
stack[++top]=5;			//先自增，再取值
stack[++top]=6;
stack[++top]=7;

栈空：
top==-1;为真

栈满：
top==maxSize-1;为真


//链栈
初始化带头结点的单链表：
LNode *head=(LNode *)malloc(sizeof(LNode));		//申请head头结点指针
head->next=NULL;
LNode *top=NULL;

数据A入栈操作：
top=(LNode *)malloc(sizeof(LNode));				//申请top结点指针
top->next=NULL;
top->data='A';									//数据域
top->next=head->next;							//'插入操作'
head->next=top;

数据B入栈操作：
top=(LNode *)malloc(sizeof(LNode));
top->next=NULL;
top->data='B';
top->next=head->next;
head->next=top;

数据B出栈操作：
x=top->data;									//先把出栈元素取出
head->next=top->next;							//'删除操作'
free(top);										//释放掉
top=head->next;

栈空：
head->next==-NULL;为真

栈满：
无栈满状态