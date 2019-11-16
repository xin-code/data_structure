//Str &str串的结构体类型定义一个str变量
//char *ch字符型指针相当于一个数组

int 赋值(Str &str,char *ch)
{
	if(str.ch)				//若刚开始要存储的空间内有东西
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