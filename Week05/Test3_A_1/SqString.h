const MaxSize = 500;

typedef struct
{
	char data[MaxSize];
	int length;
}SqString;

void StrAssign(SqString &s, char cstr[]);
void DispStr(SqString s);
int StrLength(SqString s);
SqString InsStr(SqString s1, int i, SqString s2);
SqString DelStr(SqString s, int i, int j);
SqString RepStr(SqString s, int i, int j, SqString t);
SqString SubStr(SqString s, int i, int j);
SqString Concatenate(SqString s, SqString t);