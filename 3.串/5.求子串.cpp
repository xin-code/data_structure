//����һ���������Ӵ� &substr
//����Str str����strΪĿ�괮
//int pos,int len����posΪȡĿ�괮�����||����lenΪȡĿ�괮�ĳ���

int ���Ӵ�(Str &substr,Str str,int pos,int len)
{
	if(pos<0||pos>=str.length||len<0||len>str.length-pos)		//���ȡĿ�괮���Ȼ���㲻�����¼�
		return 0;												//ʧ��
	if(substr.ch)												//��ʼ���Ӵ�
	{
		free(sbustr.ch);
		sbustr.ch=NULL;
	}
	if(len==0)													//���ȡĿ�괮�ĳ���Ϊ0���մ���
	{
		substr.ch=NULL;
		substr.length=0;
		return 1;												//�ɹ� ����Ϊʲô��û��ȡ����
	}
	else														//���ȡĿ�괮�ĳ��Ȳ�Ϊ0����ʵ������
	{
		substr.ch=(char *)malloc(sizeof(char)*(len+1));			//Ϊ�Ӵ�����ռ�
		int i=pos;												//i����ȷ��Ŀ�괮������λ��
		int j=0;												//j����ȷ���Ӵ���һ��λ��
		while(i<pos+len)										//i<���+����
		{
			substr.ch[j]=str.ch[i];								//Ŀ�괮i���λ�ø�ֵ���Ӵ�j���λ��
			++i;												//i����һλ��ѭ����
			++j;												//j����һλ��ѭ����
		}
		substr.ch[j]='\0';										//������Ǹ����Ӵ����һ��λ�ú�	
		substr.length=len;										//�Ӵ��ĳ��Ⱦ�Ϊȡ���ĳ���
		return 1;												//�ɹ�
	}
}