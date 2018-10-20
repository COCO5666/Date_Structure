typedef struct  snode
{
	char data;
	struct snode *next;
}LinkStrNode;

void StrAssign(LinkStrNode *&s, char a[]);
void DispStr(LinkStrNode *s);
int StrLength(LinkStrNode *s);
LinkStrNode *InsStr(LinkStrNode *s, int i, LinkStrNode *s2);
LinkStrNode *DelStr(LinkStrNode *s, int i, int j);
LinkStrNode *RepStr(LinkStrNode *s, int i, int j, LinkStrNode *s1);
LinkStrNode *SubStr(LinkStrNode *s, int i, int j);
LinkStrNode *Concatenate(LinkStrNode *s1, LinkStrNode *s2);