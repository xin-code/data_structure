//定义一个引用型子串 &substr
//定义Str str其中str为目标串
//int pos,int len其中pos为取目标串的起点||其中len为取目标串的长度

int 求子串(Str &substr,Str str,int pos,int len)
{
	if(pos<0||pos>=str.length||len<0||len>str.length-pos)		//如果取目标串长度或起点不可能事件
		return 0;												//失败
	if(substr.ch)												//初始化子串
	{
		free(sbustr.ch);
		sbustr.ch=NULL;
	}
	if(len==0)													//如果取目标串的长度为0（空串）
	{
		substr.ch=NULL;
		substr.length=0;
		return 1;												//成功 （因为什么都没有取到）
	}
	else														//如果取目标串的长度不为0，有实质内容
	{
		substr.ch=(char *)malloc(sizeof(char)*(len+1));			//为子串申请空间
		int i=pos;												//i用来确定目标串里的起点位置
		int j=0;												//j用来确定子串第一个位置
		while(i<pos+len)										//i<起点+长度
		{
			substr.ch[j]=str.ch[i];								//目标串i起点位置赋值给子串j起点位置
			++i;												//i后移一位（循环）
			++j;												//j后移一位（循环）
		}
		substr.ch[j]='\0';										//结束标记赋给子串最后一个位置后	
		substr.length=len;										//子串的长度就为取串的长度
		return 1;												//成功
	}
}