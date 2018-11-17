#include "HaffmanCoding.h"

void CreateHT(HTNode ht[],int n)
{
	int i,k,lnode,rnode;
	double min1,min2;
	for (i=0;i<2*n-1;i++)			//���н���������ó�ֵ-1
		ht[i].parent=ht[i].lchild=ht[i].rchild=-1;
	for (i=n;i<2*n-1;i++)			//�����������
	{
		min1=min2=32767;			//lnode��rnodeΪ��СȨ�ص��������λ��
		lnode=rnode=-1;
		for (k=0;k<=i-1;k++)
			if (ht[k].parent==-1)	//ֻ����δ����������Ľ���в���
			{
				if (ht[k].weight<min1)
				{
					min2=min1;rnode=lnode;
					min1=ht[k].weight;lnode=k;
				}
				else if (ht[k].weight<min2)
				{
					min2=ht[k].weight;rnode=k;
				}
			}
		ht[i].weight=ht[lnode].weight+ht[rnode].weight;
		ht[i].lchild=lnode;ht[i].rchild=rnode;
		ht[lnode].parent=i;ht[rnode].parent=i;
	}
}

void CreateHCode(HTNode ht[],HCode hcd[],int n)
{
	int i,f,c;
	HCode hc;
	for (i=0;i<n;i++)	//���ݹ������������������
	{
		hc.start=n;c=i;
		f=ht[i].parent;
		while (f!=-1)	//ѭ��ֱ���������
		{
			if (ht[f].lchild==c)	//�������ӽ��
				hc.cd[hc.start--]='0';
			else					//�����Һ��ӽ��
				hc.cd[hc.start--]='1';
			c=f;f=ht[f].parent;
		}
		hc.start++;		//startָ������������ʼ�ַ�
		hcd[i]=hc;
	}
}

void DispHCode(HTNode ht[],HCode hcd[],int n)
{
	int i,k;
	int sum=0,m=0;
	int j;
	printf("  �������������:\n"); //�������������
	for (i=0;i<n;i++)
	{
		j=0;
		printf("      %s:\t",ht[i].data);
		for (k=hcd[i].start;k<=n;k++)
		{
			printf("%c",hcd[i].cd[k]);
			j++;
		}
		m+=ht[i].weight;
		sum+=ht[i].weight*j;
		printf("\n");
	}
	printf("\n  ��Ȩ·������ WPL=%d\n",sum);
}
