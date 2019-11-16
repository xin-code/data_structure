#include<stdio.h>
#include<stdlib.h>
typedef struct Lnode
{
	int data;
	struct Lnode *next;
}Lnode;		//构造一个Lnode的结构体
void main()
{
	Lnode *L;
	L=(Lnode *)malloc(sizeof(Lnode));		//给Lnode分配一个空间
	A->next=B;
	B->next=C;
}