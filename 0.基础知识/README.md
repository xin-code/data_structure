# 基础知识
> //2019.11.8 
### 变量类型
- 基本类型
```c
//数值类型:int short long double float
//字符类型:char
```
- 指针型
```c
int *p;		//定义一个指针p
int j;		//定义一个整形
p = &j;		//把j的地址传递给p
```
- `构造类型`
```c
typedef struct
{
	int age;
	float heigh;
	char sex;
}School;		//定义一个School类型的结构体
```
- void型
```c
void F()
{
  return;
}
```
### 控制语句
- 判断语句
```c
if(条件)       			   if(条件)          		    if(条件)
{              			    {                		      {   
  ···         			     ···             		       ···    
}            			    }               		      }
             			    else          		       else if(条件)
             			    {             		      { 
              			     ···         		       ···   
            			    }            		      }
              			                 		       ···  
             			               		              else
             			               		       	      {
             			                		       ···  
              			               		       	      }
```
- 循环语句
```c
for(int i=0;i<n;++i)     			     while(条件)
{                         			    {
  ···                     			      ···
}                         			    }
```
#### `注意`
- break：当执行到break语句时，break后面的语句不执行，跳出整个循环，到达循环体外
- continue：假如i=3语句满足时，执行到continue语句后，跳出本次循环，到达i=4循环内（结束本次循环，到达下一次循环）
- return：直接结束函数
### 函数
- 实参传送给形参
- &引用型
- 引用型应用于指针型
### 逻辑结构
- 没关系(集合)
- 一对一(线性表)
- 一对多(树)
- 多对多(图)
![逻辑结构图片](/0.基础知识/png/逻辑结构.png)
### 存储结构
- 顺序存储结构  //更适合随机存储
- 链式存储结构  
---
:bookmark:By:zxg  
