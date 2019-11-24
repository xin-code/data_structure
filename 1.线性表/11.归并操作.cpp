二路归并
//两个线性表合并成为一个线性表

顺序表的归并
//int a[]本身给你的第一个需要被归并的数组a
//m为数组a的长度
//int b[]本身给你的第二个需要被归并的数组b
//n为数组b的长度
//int c[]归并完成后的数组
int 顺序表归并(int a[],int m,int b[],int n,int c[])
{
	int i=0;				//i指向a数组的第一个数
	int j=0;				//j指向b数组的第一个数
	int k=0;				//第三个数组尾部位置信息
	while(i<m&&j<n)
	{
		if(a[i]<b[j])		//第一个数组i位置上的小于第二个数组j位置上的时候
			c[k]=a[i];		//则把i这个小一点的数存在c数组中
			k++;			//位置后移
			i++;			//位置后移
		else
			c[k++]=b[j++];	//否则b数组的值赋值给c后，j、k后移
	}//此时至少有一个数组被归并完毕
	while(i<m)
		c[k++]=a[i++];		//直接全部放在c数组k位置后
	while(j<n)
		c[k++]=b[i++];		//直接全部放在c数组k位置后
}

链表的归并
//设置三个链表 ABC为三个头指针
void 链表归并(LNode *A,LNode *B,LNode *&C)		
{
	LNode *p=A->next;		//p指向A的后继结点
	LNode *q=B->next;		//q指向B的后继结点
	LNode *r;				//为C链表设计的新的指针，始终指向C链表的尾部
	C=A;//链表C从A中拿走头结点
	C->next=NULL;			//初始化C链表
	free(B);				//释放掉B的头结点
	r=C;					//r指向C的尾结点
	while(p!=NULL&&q!=NULL)
	{
		if(p->data<=q-data)
		{
			r->next=p;		//p小，插入到r的后面
			p=p->next;		//p后移一位
			r=r->next;		//r后移一位（尾部位置）
		}
		else
		{
			r->next=q;		//q小，插入到r的后面
			q=q->next;		//q后移一位
			r=r->next;		//r后移一位（尾部位置）
		}
	}
	if(p!==NULL)
		r->next=p;
	if(q!==NULL)
		r->next=q;

}

归并出来一条逆序的链表
//新结点的到来插入到头结点之后
//设置三个链表 ABC为三个头指针
void 归并逆序链表（LNode *A,LNode *B,LNode *&C）
{
	LNode *p=A->next;		//p指向A的后继结点
	LNode *q=B->next;		//q指向B的后继结点
	LNode *s;/为C链表设计的新的指针s，始终指向C链表的尾部
	C=A;//链表C从A中拿走头结点
	C->next=NULL;			//初始化C链表
	free(B);				//释放掉B的头结点
	while(p!=NULL&&q!=NULL)
	{
		if(p->data<=q-data)		//新到的结点插入到头结点之后
		{
			s=p;			
			p=p->next;
			s->next=c->next;
			c->next=s;
		}
		else
		{
			s=p;
			q=q->next;
			s->next=c->next;
			c->next=s;
		}
	}
	while(p!==NULL)
	{
		s=p;
		p=p->next;
		s->next=c->next;
		c->next=s;
	}

	while(q!==NULL)
	{
			s=p;
			q=q->next;
			s->next=c->next;
			c->next=s;
	}
}
