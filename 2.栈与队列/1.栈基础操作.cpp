ջ
//˳��ջ

��ʼ��ջ
int stack[maxSize];
int top=-1;
����ʼ��ջ��ָ�벢��һ��ȫ����-1

��ջ����
stack[++top]=1;			//����������ȡֵ
stack[++top]=2;

��ջ����
x=stack[top--];			//��ȡֵ�����Լ�
x=stack[top--];

�ٴ���ջ����
stack[++top]=5;			//����������ȡֵ
stack[++top]=6;
stack[++top]=7;

ջ�գ�
top==-1;Ϊ��

ջ����
top==maxSize-1;Ϊ��


//��ջ
��ʼ����ͷ���ĵ�����
LNode *head=(LNode *)malloc(sizeof(LNode));		//����headͷ���ָ��
head->next=NULL;
LNode *top=NULL;

����A��ջ������
top=(LNode *)malloc(sizeof(LNode));				//����top���ָ��
top->next=NULL;
top->data='A';									//������
top->next=head->next;							//'�������'
head->next=top;

����B��ջ������
top=(LNode *)malloc(sizeof(LNode));
top->next=NULL;
top->data='B';
top->next=head->next;
head->next=top;

����B��ջ������
x=top->data;									//�Ȱѳ�ջԪ��ȡ��
head->next=top->next;							//'ɾ������'
free(top);										//�ͷŵ�
top=head->next;

ջ�գ�
head->next==-NULL;Ϊ��

ջ����
��ջ��״̬
