共享栈(两个栈共享一个存储空间)
top1是栈1
top2是栈2

int stack[maxSize];		//共享栈
int top1=-1;			//初始化top1指针在最左边
int top2=maxSize;		//初始化top2指针在最右边
int top[2]={-1,maxSize};//top数组首先来存储两个栈顶元素

入栈操作
stack[++top[0]]=x;		//s1入栈 指针首先往右移动一个位置，入栈
stack[--top[1]]=x;		//s2入栈 指针首先往左移动一个位置，入栈
