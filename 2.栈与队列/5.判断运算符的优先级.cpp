判断运算符的优先级
int getPriority(char op)	//定义一个字符型op用来接收运算符
{
	if(op=='+'||op=='-')	//如果op接收的为+和-符号
		return 0;			//返回0
	else					//如果op接收的为*和/符号
			return 1;		//返回1
	}