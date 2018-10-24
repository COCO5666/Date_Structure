#include "fun.h"

void fun1()
{
	string str = "abcdef";
	char e;
	SQ *q;
	InitSQWithStr(q, str, 7);
	DispSQ(q);

	cout << endl << "Inverting with fun1..." << endl;
	SS *s;
	InitSS(s);
	while(ExSQ(q, e))
	{
		Push(s, e);
	}
	DeSQ(q);
	InitSQ(q);
	while(Pop(s, e))
	{
		EnSQ(q, e);
	}
	DispSQ(q);
}

void fun2()
{
	string str1 = "abcdef", str2="";
	SQ *q;
	InitSQWithStr(q, str1, 7);
	DispSQ(q);
	char e;
	int len, i;

	cout << endl << "Inverting with fun2..." << endl;
	while(ExSQ(q, e))
	{
		str2 += e;
	}
	DeSQ(q);
	InitSQ(q);
	len = str2.length();
	for(i=len-1; i>=0; i--)
	{
		EnSQ(q, str2[i]);
	}
	DispSQ(q);
}