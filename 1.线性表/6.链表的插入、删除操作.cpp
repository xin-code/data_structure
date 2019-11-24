//含有头结点的单链表中结点插入(p后面插入s)
s->next=p->next;
p->next=s;

//含有头结点的单链表中结点删除(s)
p->next=s->next;
free(s);

//在含有头结点的表头插入s
s->next=head->next;
head->next=s;

//在含有头结点的表头删除s
head->next=s->next;
free(s);

//在不含有头结点的表头插入s
s->next=head;
head=s;

//在不含有头结点的表头删除s
head=s->next;
free(s);

//双链表的插入(p后面插入s)
s->next=p->next;
s->prior=p;
p->next=s;
s->next->prior=s;


//双链表的删除s 
p->next=s->next;		//当只有s一个结点时,s->prior->next=s->next;
s->next->prior=p;		//当只有s一个结点时,s->next->prior=s->prior;
free(s);
