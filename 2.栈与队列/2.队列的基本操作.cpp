队列
//顺序队列

初始化队列
int queue[maxSize];
int front=0;
int rear=0;
//因为front和rear都是指向数组下表为0的队头元素

入队操作
queue[++rear]=1;			//先自增，再取值
queue[++rear]=2;

出队操作
x=queue[++front];			//先自增，再取值
x=queue[++front];

为避免队伍满，而造成假溢出现象
//入队
rear=(rear+1)%maxSize;
queue[rear]=x;

//出队
front=(front+1)%maxSize;
x=queue[front];


//链队
初始化操作
typedef struct
{
  LNode *front;
  LNode *rear;
}queue;

栈满状态：无栈满状态
栈空状态：
head->next==NULL  //为真，栈空