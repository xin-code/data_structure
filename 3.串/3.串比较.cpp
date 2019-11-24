int 串比较(Str s1,Str s2)						//定义两个串 s1和s2
{
	for(int i=0;i<s1.length&&i<s2.length;++i)	//s1与s2较小的串
		if(s1.ch[i]!=s2.ch[i])					//s1和s2第一个字符不等时
			return s1.ch[i]-s2.ch[i];			//返回 s1第一个字符的ASCⅡ减去s2的第一个字符的ASCⅡ 如果为正数，则s1大于s2串
		return s1.length-s2.length;				//为0 s1=s2;为正 s1>s2;为负 s1<s2
}