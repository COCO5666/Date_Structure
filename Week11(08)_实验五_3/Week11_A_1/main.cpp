#include "HaffmanCoding.h"

void main()
{
	int n=6,i;		//n表示初始字符串的个数
	char *str[]={"a","b","c","d","e","f"};
	int fnum[]={2,3,4,7,8,9};
	HTNode ht[M];
	HCode hcd[N];
	for (i=0;i<n;i++)
	{
		strcpy(ht[i].data,str[i]);
		ht[i].weight=fnum[i];
	}
	printf("\n");
	CreateHT(ht,n);
	CreateHCode(ht,hcd,n);
	DispHCode(ht,hcd,n);
	printf("\n");
}