计算中缀表达式(一串数字和一些符号进行求解最终结果)
需要两个辅助栈
一个放数字s1
一个放符号s2

//char 数组[]这个是题目给出的那串表达式
float 计算中缀表达式(char 数组[])
{
	float	s1[maxSize];	//初始化s1
	int top1=-1;
	float	s2[maxSize];	//初始化s2
	int top2=-1;
	while(数组[i]!='\0')	//当数组[i]不是最后一个结束标记的时候
	{
		if('0'<=数组[i]&&数组[i]<='9')	//如果是数字
		{
			s1[++top1]=数组[i]-'0';		//取得表达式的值：字符型数据-字符型'0'的值 就位该位置上数据的值
			/*
			例如：字符0-字符0=数值0；
				  字符9-字符0=数值9；
			*/
			++i;						//i后移一位（自左往右移动）
		}
		else if(数组[i]=='(')			//数组表达式中出现[i]为左括号'('
		{
			s2[++top2]='(';				//左括号入s2数组内
			++i;						//i后移一位（自左往右移动）
		}
		else if(数组[i]=='+'||数组[i]=='-'||数组[i]=='*'||数组[i]=='/')		//如果为+-*/
		{
			if(top2==-1||s2[top2]=='('||getPriority(数组[i]>getPriority(s2[top2]))	//判断优先级若入栈的优先级大于栈内优先级则入栈
			{
				s2[++top2]=数组[i];		//数组表达式i位置入s2符号栈内
				++i;					//i后移一位（自左往右移动）
			}
			else
			{
				int flag=调用函数two(s1,top1,s2,top2); //如果没有达到（优先级若入栈的优先级大于栈内优先级则入栈）的话，取出来s1的栈顶元素进行运算
				int(flag==0)						  //如果flag为0
					return 0;						 //返回失败标记
			}
		}
		else if(数组[i]==')')			//数组表达式中出现[i]为右括号'）'
		{
			while(s2[top2]!='(')		//s2存放符号数组不是左括号
			{
				int flag=调用函数two(s1,top1,s2,top2);	//取出来s1的栈顶元素进行运算
					int(flag==0)					 //如果flag为0
					return 0;						 //返回失败标记
			}
			--top2;		//s2存放符号的数组头指针降低一位
			++i;		//数组表达式往右移动一位
		}
	}
	while(top2!=-1)		//当s2存放符号头指针不为空
	{
		int flag=调用函数two(s1,top1,s2,top2);//取出来s1的栈顶元素进行运算
		int(flag==0)					 //如果flag为0
		return 0;						 //返回失败标记
	}
	return s1[top1];					//计算完成返回到s1的头指针所指的位置
}

int 调用函数(float s1[],int &top1,char s2[],int &top2)
{
	float 操作数1,操作数2,result;
	char op;
	int flag;
	操作数2=s1[top1--];
	操作数1=s1[top1--];
	op=s2[top2--];
	flag=调用运算(操作数1,op,操作数2,result);
	if(flag==0)
		std::cout<<"ERROR"<<std::end1;
	s1[++top1]=result;
	return flag;
}
