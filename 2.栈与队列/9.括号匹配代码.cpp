判断括号是否匹配
int 是否匹配(char left,char right)
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

int 括号(char 表达式[])
{
	char s[maxSize];
	int top=-1;
	for(int i=0;表达式[i]='\0',++i)
	{
		if(表达式[i]=='('||表达式[i]=='['||表达式[i]=='{'|)
			s[++top]=表达式[i];
		if(表达式[i]==')'||表达式[i]==']'||表达式[i]=='}'|)
		{
			if(top==-1)
				return 0;
			char left=s[top--];
			if(是否匹配(left,表达式[i])==0)
				return 0;
		}
	}
	if(top>-1)
		return 0;
		return 1;
}
