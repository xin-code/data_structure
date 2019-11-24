//顺序表逆置
for(int i=left,j=right;i<j;++i,--j)
{
	temp=a[i];
	a[i]=a[j];
	a[j]=temp;
}

//链表逆置
while(p->next!=q)		//该代码需要3个指针 p是最开头的结点 q为最后一个结点 t为辅助结点
{
	t=p->next;			//t指针指向p的后继结点
	p->next=t->next;	//使t的后继赋值给p的后继（类似删除操作，只不过并没有删除）
	t->next=q->next;	//此时t跑到最后，所以q的后继就变成了t的后继
	q->next=t;			//t变成最后一个结点位置
}
