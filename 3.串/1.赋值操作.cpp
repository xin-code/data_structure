//Str &str���Ľṹ�����Ͷ���һ��str����
//char *ch�ַ���ָ���൱��һ������

int ��ֵ(Str &str,char *ch)
{
	if(str.ch)				//���տ�ʼҪ�洢�Ŀռ����ж���
		free(str,ch);
	int len=0;
	char *c=ch;
	while(*c)
	{
		++len;
		++c;
	}
	if(len==0)
	{
		str,ch==NULL;
		str.length=0;
		return 1;
	}
	else
	{
		str.ch=(char*)malloc(sizeof(char)*(len+1));
		if(str.ch==NULL)
			return 0;
		else
		{
			c=ch;
			for(int i=0;i<=len;++i,++c)
				str.ch[i]=*c'
				str.length=len;
				return 1;
		}
	}
}