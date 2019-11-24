子表达式求值
//定义操作数1和操作数2
//用来接收符号的字符型op
//用来改变结果的result
int 求值(float 操作数1,char op,float 操作数2,float &result)
{
	if(op=='+')
		result=操作数1+操作数2;
	if(op=='-')
		result=操作数1-操作数2;
	if(op=='*')
		result=操作数1*操作数2;
	if(op=='/')						//注意除法的特殊性
	{
		if(fabs(操作数2)<MIN)		//fabs:对操作数2进行求绝对值	MIN:几乎为0的数		操作数2的绝对值比0还要小的话
		{
			return 0;				//失败
		}
		else
		{
			result=操作数1/操作数2;
		}
	}
	return 1;						//成功

}