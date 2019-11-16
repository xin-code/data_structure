顺序表的插入
//创建一个顺序表
int sqList[maxSize]={1,2,3,4,...,n};
int length = n;

//int sqList[]:把顺序表传入数组中
//length:描述顺序表长度的整型变量 &引用型即为可改变量
//插入位置p
//插入元素e
int inserElem(int sqList[], int &length,int p,int e)
{
	if(p<0||p>length||length==maxSize)		//判断不可能事件
		return 0;							//失败返回0
	for(int i=length-1;i>=p;--i)			//在顺序表内p位置插入一个元素是从最后一个元素依次往后直循环到p
	sqList[i+1]=sqList[i];					//赋值操作i位置赋值给i+1位置
	sqList[p]=e;							//把插入元素e赋值给p所在位置
	++length;								//整条链表长度+1
	return 1;								//成功返回1
}

顺序表的删除
//创建一个顺序表
int sqList[maxSize]={1,2,3...,n};
int length=n;
//int sqList[]:把顺序表传入数组中
//length:描述顺序表长度的整型变量 &引用型即为可改变量
//删除位置p
//&e把删除位置p的值取出来
int deleElem(int sqlist[],int &length,int p;int &e)
{
	if(p<0||p>length-1)						//判断不可能事件
		return 0;							//失败返回0
	e=sqList[p];							//首先&e把删除位置p的值取出来
	for(int i=length-1;i<=p;i++)			//在顺序表内p位置删除一个元素是p+1的位置往前依次覆盖
		sqList[i]=sqList[i+1];				//覆盖操作
		--length;							//整条链表长度-1
		return 1;							//成功返回1
}
