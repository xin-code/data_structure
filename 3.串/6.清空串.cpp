int 清空串(Str &str)
{
	if(str.ch)				//如果串内用数值
	{
		free(str.ch);		//释放
		str.ch=NULL;		
	}
	str.length=0;			//串的长度为0
	return 1;				//成功
}