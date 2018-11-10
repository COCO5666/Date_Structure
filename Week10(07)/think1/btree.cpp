#include <stdio.h>
#include <malloc.h>
#define MaxSize 100
typedef char ElemType;
typedef struct node
{
	ElemType data;				//����Ԫ��
	struct node *lchild;		//ָ������
	struct node *rchild;		//ָ���Һ���
} BTNode;
void CreateBTNode(BTNode *&b,char *str)		//��str������������
{
	BTNode *St[MaxSize],*p=NULL;
	int top=-1,k,j=0;  
	char ch;
	b=NULL;				//�����Ķ�������ʼʱΪ��
	ch=str[j];
	while (ch!='\0')	//strδɨ����ʱѭ��
	{
   	   	switch(ch) 
		{
		case '(':top++;St[top]=p;k=1; break;		//Ϊ��ڵ�
		case ')':top--;break;
		case ',':k=2; break;                      	//Ϊ�ҽڵ�
		default:p=(BTNode *)malloc(sizeof(BTNode));
			p->data=ch;p->lchild=p->rchild=NULL;
		         	if (b==NULL)                    //pָ��������ĸ��ڵ�
						b=p;
					else  							//�ѽ������������ڵ�
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

void DispBTNode(BTNode *b)	//�����ű�ʾ�����������
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

void PreOrder1(BTNode *b)      //��������ķǵݹ��㷨
{
	BTNode *St[MaxSize],*p;
    int top=-1;
    if (b!=NULL) 
    {
        top++;					//���ڵ���ջ
        St[top]=b;
        while (top>-1)				//ջ��Ϊ��ʱѭ��
        {
            p=St[top];				//��ջ�����ʸýڵ�
            top--;
            printf("%c ",p->data);
            if (p->rchild!=NULL)	//�Һ�����ջ
			{
               top++;
               St[top]=p->rchild;
			}
            if (p->lchild!=NULL)	//������ջ
			{
               top++;
               St[top]=p->lchild;
			}
		}
		printf("\n");
	}
}
void InOrder1(BTNode *b)               //��������ķǵݹ��㷨
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
void PostOrder1(BTNode *b)            //��������ķǵݹ��㷨     
{
	BTNode *St[MaxSize];
	BTNode *p;
	int flag,top=-1;						//ջָ���ó�ֵ
	if (b!=NULL)
	{
		do
		{
			while (b!=NULL)					//��t��������ڵ���ջ
			{
				top++;
				St[top]=b;
				b=b->lchild;
			}
			p=NULL;							//pָ��ǰ�ڵ��ǰһ���ѷ��ʵĽڵ�
			flag=1;	
			while (top!=-1 && flag)
			{
				b=St[top];					//ȡ����ǰ��ջ��Ԫ��
				if (b->rchild==p)			//�����������ڻ��ѱ�����,����֮
				{
					printf("%c ",b->data);	//����*b�ڵ�
					top--;
					p=b;					//pָ���򱻷��ʵĽڵ�
				}
				else
				{
					b=b->rchild;			//tָ��������
					flag=0;	
				}
			}
		} while (top!=-1);
		printf("\n");
	} 
}
void TravLevel(BTNode *b)               //��α������㷨 
{
	BTNode *Qu[MaxSize];				//����ѭ������
	int front,rear;						//������׺Ͷ�βָ��
	front=rear=0;						//�ö���Ϊ�ն���
    if (b!=NULL) 
		printf("%c ",b->data);
    rear++;								//�ڵ�ָ��������
	Qu[rear]=b;
    while (rear!=front)					//���в�Ϊ��
    {
		front=(front+1)%MaxSize;
		b=Qu[front];					//��ͷ������
		if (b->lchild!=NULL)			//�������,�������
		{
			printf("%c ",b->lchild->data);
			rear=(rear+1)%MaxSize;
			Qu[rear]=b->lchild;
		}
		if (b->rchild!=NULL)			//����Һ���,�������
		{
			printf("%c ",b->rchild->data);
			rear=(rear+1)%MaxSize;
			Qu[rear]=b->rchild;
		}
	} 
	printf("\n");
}