线性表
//取最大值
int max=a[0];				//从第一个数开始，使其成为最大值
int maxID=0;				//最大值标记为0
for(int i=0;i<n;++i)		//循环
{
	if(max<a[i])			//如果第一个数小于第i个数
	{
		max=a[i];			//则第i个数为最大值
		maxID=i;			//最大值标记变成i
	}
}

//取最小值
int min=a[0];
int minID=0;
for(int i=0;i<n;++i)
{
	if(min>a[i])
	{
		min=a[i];
		minID=i;
	}
}

链表
//取最大值
LNode *p,*q;				//p一直往下走 q则为记录位置的指针
int max=head->next->data;	//从第一个数的data（数据域）开始，使其成为最大值
q=p=head->next;				//q用来记录最大值的位置
while(p!==NULL)
{
	if(max<p->data)			//如果第一个数的data（数据域）小于第p的data（数据域）
	{
		max=p->data;		//最大值就取p的data（数据域）值
		q=p;				//q就取这个data（数据域）值为当前循环里最大的值
	}
	p=p->next;				//继续往下走
}

//取最小值
LNode *p,*q;
int min=head->next->data;
q=p=head->next;
while(p!==NULL)
{
	if(min>p->data)
	{
		min=p->data;
		q=p;
	}
	p=p->next;
}
