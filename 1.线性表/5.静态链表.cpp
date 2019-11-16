typedef struct
{
	int data;
	int next;
}SLnode;	//定义静态链表结构体
SLnode SLink[maxSize];
int p = Ad0;		//定义一个指针
SLink[p].data;		//p->data;
SLink[p].next;		//p->next;


//在p后插入节点q;
SLink[q].next=SLink[p].next;	//q->next=p->next;
SLink[p].next=q;				//p->next=q;