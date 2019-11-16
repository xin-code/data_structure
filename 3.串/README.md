# 串  
> //2019.11.14  
### 基本概念  
- `串`:是由零个或多个字符组成的有限序列，也称为字符串  
- `逻辑结构`:与线性表一样  
- `存储结构`①顺序结构②链式结构(×)  
### 顺序结构  
- 定长存储结构  
```c
typedef struct
{
  char Str[maxSize+1];    //maxSize+1是因为最后多出来一个‘\0’的结束标记
  int length;
}Str;
```
- 变长存储结构  
```c
  typedef struct
{
  char *ch;
  int length;
}Str;
Str s;
s.length=L;     //存储一个长度为L的串
s.ch=(char*)malloc((L+1)*sizeof(char));   //分配存储空间
s.ch[length范围内的位置]=某字符变量;
某字符变量=s.ch[length范围内的位置];
free(s.ch);
```
### 串的操作  
- 赋值操作  
- 取串长度  
- 串比较  
- 串连接  
- 求子串  
- 清空串  
---
:bookmark:By:zxg  
