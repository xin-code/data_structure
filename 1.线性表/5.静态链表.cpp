typedef struct
{
	int data;
	int next;
}SLnode;	//���徲̬����ṹ��
SLnode SLink[maxSize];
int p = Ad0;		//����һ��ָ��
SLink[p].data;		//p->data;
SLink[p].next;		//p->next;


//��p�����ڵ�q;
SLink[q].next=SLink[p].next;	//q->next=p->next;
SLink[p].next=q;				//p->next=q;