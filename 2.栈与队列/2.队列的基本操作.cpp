����
//˳�����

��ʼ������
int queue[maxSize];
int front=0;
int rear=0;
//��Ϊfront��rear����ָ�������±�Ϊ0�Ķ�ͷԪ��

��Ӳ���
queue[++rear]=1;			//����������ȡֵ
queue[++rear]=2;

���Ӳ���
x=queue[++front];			//����������ȡֵ
x=queue[++front];

Ϊ���������������ɼ��������
//���
rear=(rear+1)%maxSize;
queue[rear]=x;

//����
front=(front+1)%maxSize;
x=queue[front];


//����
��ʼ������
typedef struct
{
  LNode *front;
  LNode *rear;
}queue;

ջ��״̬����ջ��״̬
ջ��״̬��
head->next==NULL  //Ϊ�棬ջ��