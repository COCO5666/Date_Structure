#include "fun.h"

bool judge1(string str, LS* s)
{
	int i, n;
	n = str.length();
	char e = 'e';
	LSInitialize(s);
	for(i=0; i<n; i++)
	{
		if(str[i] == 'I')
			LSPush(s, e);
		else if(str[i] == 'O')
		{
			if(!LSPop(s, e))
				return false;
		}
		else
		{
			return false;
		}
	}
	if(!LSIsEmpty(s))
		return false;
	return true;
}

bool judge2(string str)
{
	int i, n = str.length(), c=0;
	for(i=0; i<n; i++)
	{
		if(str[i] == 'I')
			c++;
		else if(str[i]=='O' && c!=0)
			c--;
		else
			return false;
	}
	if(c == 0)
		return true;
	return false;
}