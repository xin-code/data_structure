˳���Ĳ���
//����һ��˳���
int sqList[maxSize]={1,2,3,4,...,n};
int length = n;

//int sqList[]:��˳�����������
//length:����˳����ȵ����ͱ��� &�����ͼ�Ϊ�ɸı���
//����λ��p
//����Ԫ��e
int inserElem(int sqList[], int &length,int p,int e)
{
	if(p<0||p>length||length==maxSize)		//�жϲ������¼�
		return 0;							//ʧ�ܷ���0
	for(int i=length-1;i>=p;--i)			//��˳�����pλ�ò���һ��Ԫ���Ǵ����һ��Ԫ����������ֱѭ����p
	sqList[i+1]=sqList[i];					//��ֵ����iλ�ø�ֵ��i+1λ��
	sqList[p]=e;							//�Ѳ���Ԫ��e��ֵ��p����λ��
	++length;								//����������+1
	return 1;								//�ɹ�����1
}

˳����ɾ��
//����һ��˳���
int sqList[maxSize]={1,2,3...,n};
int length=n;
//int sqList[]:��˳�����������
//length:����˳����ȵ����ͱ��� &�����ͼ�Ϊ�ɸı���
//ɾ��λ��p
//&e��ɾ��λ��p��ֵȡ����
int deleElem(int sqlist[],int &length,int p;int &e)
{
	if(p<0||p>length-1)						//�жϲ������¼�
		return 0;							//ʧ�ܷ���0
	e=sqList[p];							//����&e��ɾ��λ��p��ֵȡ����
	for(int i=length-1;i<=p;i++)			//��˳�����pλ��ɾ��һ��Ԫ����p+1��λ����ǰ���θ���
		sqList[i]=sqList[i+1];				//���ǲ���
		--length;							//����������-1
		return 1;							//�ɹ�����1
}
