//����һ�����Ըı��������&str�ܴ�
//����s1����s2��
int ������(Str &str,Str s1,Str s2)
{
	if(str.ch)													//��ʼ��
	{
		free (str.ch);
		str.ch=NULL;
	}
	str.ch=(char *)malloc(sizeof(char)*(s1.length+s2.length+1));//����ռ�'s1.length+s2.length+1'��+1������Ϊ�������\0
	if(!str.ch)
		return 0;
	int i=0;													//i����ʶ��s1�Ƿ�Ϊ�� iΪ0
	while(i<s1.length)											//���s1�ĳ��Ȳ�Ϊ0
	{
		str.ch[i]=s1.ch[i];										//��s1�����ݸ����ܴ�
		++i;													//i����һλ
	}
	int j=0;
	while(j<=s2.length)
	{
		str.ch[i+j]=s2.ch[j];									//��s2�����ݸ����ܴ����ܴ���λ���Ǵ�i�����ƶ��ģ�
		++j;
	}
	str.length=s1.length+s2.length;								//�ܴ��ĳ���Ϊs1�ĳ���+s2�ĳ���
	return 1;
}