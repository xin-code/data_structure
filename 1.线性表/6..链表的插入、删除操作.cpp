//����ͷ���ĵ������н�����(p�������s)
s->next=p->next;
p->next=s;

//����ͷ���ĵ������н��ɾ��(s)
p->next=s->next;
free(s);

//�ں���ͷ���ı�ͷ����s
s->next=head->next;
head->next=s;

//�ں���ͷ���ı�ͷɾ��s
head->next=s->next;
free(s);

//�ڲ�����ͷ���ı�ͷ����s
s->next=head;
head=s;

//�ڲ�����ͷ���ı�ͷɾ��s
head=s->next;
free(s);

//˫����Ĳ���(p�������s)
s->next=p->next;
s->prior=p;
p->next=s;
s->next->prior=s;


//˫�����ɾ��s 
p->next=s->next;		//��ֻ��sһ�����ʱ,s->prior->next=s->next;
s->next->prior=p;		//��ֻ��sһ�����ʱ,s->next->prior=s->prior;
free(s);