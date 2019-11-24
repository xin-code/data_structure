中缀转前缀
//char 中缀[]定义一个中缀表达式数组
//char s2[]定义另一个栈s2用来存储转换后的结构（结果栈）
//s2的栈顶指针
void 中缀转后缀(char 中缀[],char s2[],int &top2)
{
	char s1[maxSize];						//辅助栈s1的初始化
	int top=-1;
	int i=length-1;							//从右往左开始
	while (i>=0)							//保证i位置有元素
	{
		if('0'<=中缀[i]&&中缀[i]<='9')		//如果中缀在0~9之间的数字（判断是否为数字字符）则
		{
			s2[++top2]=中缀[i];				//中缀表达式中的i位置存入s2结果栈中
			--i;							//i往左移动一位
		}
		else if(中缀[i]=='）')				//如果中缀表达式i位置上自右往左移动过程中出现'）'右括号则
		{
			s1[++top1]=='）';				//左括号存入辅助栈内
			--i;
			else if(中缀[i]=='+'||中缀[i]=='-'||中缀[i]=='*'||中缀[i]=='/)			//如果出现+-*/四则运算
			{
				if(top1==-1||s1[top1]=='）'||getPriority(中缀[i])>=getPriority(s1[top1]))		//如果出现辅助栈为空或者辅助栈的栈顶指针还是'）'或者中缀表达式中的符号优先级大于等于辅助栈内的优先级则
				{
					s1[++top1]=中缀[i];												//继续存入。中缀表达式中i位置存入辅助栈内
					--i;															//i往左移动一位
				}
				else
					s2[++top2]=s1[top1--];	//否则（前面情况不成立（没有出现辅助栈为空或者辅助栈的栈顶指针还是'）'或者中缀表达式中的符号优先级大于等于辅助栈内的优先级））
			}								//直接存入存储栈内
			else if(中缀[i]=='（')			//如果中缀i位置出现'（'左括号
			{
				while (s1[top1]!='）')		//左右括号之间的元素全部出栈
					s2[++top2]=s1[top1--];
				--top1;
				--i;
			}
		}	
		while(top1！=-1)					//当辅助栈栈顶元素不为空时
			s2[++top2]=s1[top--];			//s1辅助栈的栈顶元素（先把这个值赋给存储栈，再自减）赋给s2存储栈（先给s1辅助栈过来的元素一个空间，再指向栈顶元素）
	}
}
