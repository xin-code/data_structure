�ж������Ƿ�ƥ��
int �Ƿ�ƥ��(char left,char right)
{
	if(left=='('&&right==')')
		return 1;
	else if(left=='['&&right==']')
		return 1;
	else if(left=='{'&&right=='}')
		return 1;
	else
		return 0;
}

int ����(char ���ʽ[])
{
	char s[maxSize];
	int top=-1;
	for(int i=0;���ʽ[i]='\0',++i)
	{
		if(���ʽ[i]=='('||���ʽ[i]=='['||���ʽ[i]=='{'|)
			s[++top]=���ʽ[i];
		if(���ʽ[i]==')'||���ʽ[i]==']'||���ʽ[i]=='}'|)
		{
			if(top==-1)
				return 0;
			char left=s[top--];
			if(�Ƿ�ƥ��(left,���ʽ[i])==0)
				return 0;
		}
	}
	if(top>-1)
		return 0;
		return 1;
}
