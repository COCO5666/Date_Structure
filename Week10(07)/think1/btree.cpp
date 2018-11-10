#include <stdio.h>
#include <malloc.h>
#define MaxSize 100
typedef char ElemType;
typedef struct node
{
	ElemType data;				//数据元素
	struct node *lchild;		//指向左孩子
	struct node *rchild;		//指向右孩子
} BTNode;
void CreateBTNode(BTNode *&b,char *str)		//由str串创建二叉链
{
	BTNode *St[MaxSize],*p=NULL;
	int top=-1,k,j=0;  
	char ch;
	b=NULL;				//建立的二叉树初始时为空
	ch=str[j];
	while (ch!='\0')	//str未扫描完时循环
	{
   	   	switch(ch) 
		{
		case '(':top++;St[top]=p;k=1; break;		//为左节点
		case ')':top--;break;
		case ',':k=2; break;                      	//为右节点
		default:p=(BTNode *)malloc(sizeof(BTNode));
			p->data=ch;p->lchild=p->rchild=NULL;
		         	if (b==NULL)                    //p指向二叉树的根节点
						b=p;
					else  							//已建立二叉树根节点
					{	
						switch(k) 
						{
						case 1:St[top]->lchild=p;break;
						case 2:St[top]->rchild=p;break;
						}
					}
		}
		j++;
		ch=str[j];
	}
}

void DispBTNode(BTNode *b)	//以括号表示法输出二叉树
{
	if (b!=NULL)
	{
		printf("%c",b->data);
		if (b->lchild!=NULL || b->rchild!=NULL)
		{
			printf("(");
			DispBTNode(b->lchild);
			if (b->rchild!=NULL) printf(",");
			DispBTNode(b->rchild);
			printf(")");
		}
	}
}


void DestroyBTNode(BTNode *&b)
{
	if (b!=NULL)
	{
		DestroyBTNode(b->lchild);
		DestroyBTNode(b->rchild);
		free(b);
	}
}

void PreOrder1(BTNode *b)      //先序遍历的非递归算法
{
	BTNode *St[MaxSize],*p;
    int top=-1;
    if (b!=NULL) 
    {
        top++;					//根节点入栈
        St[top]=b;
        while (top>-1)				//栈不为空时循环
        {
            p=St[top];				//退栈并访问该节点
            top--;
            printf("%c ",p->data);
            if (p->rchild!=NULL)	//右孩子入栈
			{
               top++;
               St[top]=p->rchild;
			}
            if (p->lchild!=NULL)	//左孩子入栈
			{
               top++;
               St[top]=p->lchild;
			}
		}
		printf("\n");
	}
}
void InOrder1(BTNode *b)               //中序遍历的非递归算法
{
	BTNode *St[MaxSize],*p;
	int top=-1;
	if (b!=NULL)
	{
		p=b;
		while (top>-1 || p!=NULL)
		{
			while (p!=NULL)
			{
				top++;
				St[top]=p;
				p=p->lchild;
			}
			if (top>-1)
			{
				p=St[top];
				top--;
				printf("%c ",p->data);
				p=p->rchild;
			}
		}
		printf("\n");
	}
}
void PostOrder1(BTNode *b)            //后序遍历的非递归算法     
{
	BTNode *St[MaxSize];
	BTNode *p;
	int flag,top=-1;						//栈指针置初值
	if (b!=NULL)
	{
		do
		{
			while (b!=NULL)					//将t的所有左节点入栈
			{
				top++;
				St[top]=b;
				b=b->lchild;
			}
			p=NULL;							//p指向当前节点的前一个已访问的节点
			flag=1;	
			while (top!=-1 && flag)
			{
				b=St[top];					//取出当前的栈顶元素
				if (b->rchild==p)			//右子树不存在或已被访问,访问之
				{
					printf("%c ",b->data);	//访问*b节点
					top--;
					p=b;					//p指向则被访问的节点
				}
				else
				{
					b=b->rchild;			//t指向右子树
					flag=0;	
				}
			}
		} while (top!=-1);
		printf("\n");
	} 
}
void TravLevel(BTNode *b)               //层次遍历的算法 
{
	BTNode *Qu[MaxSize];				//定义循环队列
	int front,rear;						//定义队首和队尾指针
	front=rear=0;						//置队列为空队列
    if (b!=NULL) 
		printf("%c ",b->data);
    rear++;								//节点指针进入队列
	Qu[rear]=b;
    while (rear!=front)					//队列不为空
    {
		front=(front+1)%MaxSize;
		b=Qu[front];					//队头出队列
		if (b->lchild!=NULL)			//输出左孩子,并入队列
		{
			printf("%c ",b->lchild->data);
			rear=(rear+1)%MaxSize;
			Qu[rear]=b->lchild;
		}
		if (b->rchild!=NULL)			//输出右孩子,并入队列
		{
			printf("%c ",b->rchild->data);
			rear=(rear+1)%MaxSize;
			Qu[rear]=b->rchild;
		}
	} 
	printf("\n");
}