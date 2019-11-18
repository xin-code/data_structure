假设str.被赋值的数组原本什么数值都没有
则len和*c是用来赋值的数值
//Str &str串的结构体类型定义一个str变量
//char *ch字符型指针相当于一个数组

int 赋值(Str &str,char *ch)
{
	if(str.ch)				//若str.ch此数组中有值（str.这样的形式都是被赋值的数组）
		free(str.ch);		//则释放掉数组中的值
	int len=0;				//初始化长度(len是用来赋值的数组长度)
	char *c=ch;				//字符型指针的初值为ch(*c是用来赋值数组指向第一个结点的指针)
	while(*c)				//指针c所指的值不为0
	{
		++len;				//长度+1
		++c;				//指针c后移一位
	}
	if(len==0)				//如果用来赋值的数组长度为0（没有除了‘\0’结束标记以外的值）=空串
	{
		str.ch==NULL;		//被赋值的数组就为空串（因为什么都没有赋值过去）
		str.length=0;		//被赋值的数组长度就为0
		return 1;			//返回成功标记1（赋值成功。因为什么都没有赋值）
	}
	else
	{
		str.ch=(char*)malloc(sizeof(char)*(len+1));	//如果用来赋值的不是空串，则申请存储空间（len+1）->结束标记‘\0’
		if(str.ch==NULL)							//如果存储空间满了，不能进行申请的话。malloc就会返回一个NULL值
			return 0;								//失败
		else
		{
			c=ch;									//指针c指向第一个字符
			for(int i=0;i<=len;++i,++c)				//循环
				str.ch[i]=*c;						//指针c的值赋给ch
				str.length=len;						//长度赋给length
				return 1;							//成功
		}
	}
}