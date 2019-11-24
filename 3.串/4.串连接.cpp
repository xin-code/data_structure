//定义一个可以改变的引用型&str总串
//定义s1串和s2串
int 串连接(Str &str,Str s1,Str s2)
{
	if(str.ch)													//初始化
	{
		free (str.ch);
		str.ch=NULL;
	}
	str.ch=(char *)malloc(sizeof(char)*(s1.length+s2.length+1));//申请空间's1.length+s2.length+1'‘+1’是因为结束标记\0
	if(!str.ch)
		return 0;
	int i=0;													//i用来识别s1是否为空 i为0
	while(i<s1.length)											//如果s1的长度不为0
	{
		str.ch[i]=s1.ch[i];										//把s1的内容赋给总串
		++i;													//i后移一位
	}
	int j=0;
	while(j<=s2.length)
	{
		str.ch[i+j]=s2.ch[j];									//把s2的内容赋给总串（总串的位置是从i往后移动的）
		++j;
	}
	str.length=s1.length+s2.length;								//总串的长度为s1的长度+s2的长度
	return 1;
}
