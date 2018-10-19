#include <iostream>

#include "SqString.h"

using namespace std;

void StrAssign(SqString &s, char cstr[])
{
	int i;
	for(i=0; cstr[i]!='\0'; i++)
		s.data[i] = cstr[i];
	s.length = i;
}

void DispStr(SqString s)
{
	for(int i=0; i<s.length; i++)
		cout << s.data[i];
	cout << endl;
}

int StrLength(SqString s)
{
	return s.length;
}

SqString InsStr(SqString s1, int i, SqString s2)
{
	int j;
	SqString str;
	str.length = 0;
	if(i<=0 || i>s1.length+1) //参数不正确时返回空串
		return str;

	for(j=0; j<i-1; j++)
		str.data[j] = s1.data[j];

	for(j=0; j<s2.length; j++)
		str.data[i+j-1] = s2.data[j];

	for(j=i-1; j<s1.length; j++)
		str.data[s2.length+j] = s1.data[j];
	str.length = s1.length + s2.length;
	return str;
}

SqString DelStr(SqString s, int i, int j)
{
	int k;
	SqString str;
	str.length = 0;
	if(i<= 0 || i>s.length || i+j>s.length+1)
		return str;
	for(k=0; k<i-1; k++)
		str.data[k] = s.data[k];
	for(k=i+j-1; k<s.length; k++)
		str.data[k-j] = s.data[k];
	str.length = s.length-j;
	return str;
}

SqString RepStr(SqString s, int i, int j, SqString t)
{
	int k;
	SqString str;
	str.length = 0;
	if(i<0 || i>s.length || i-1+j > s.length)
		return str;
	for(k=0; k<=i-2; k++)
		str.data[k] = s.data[k];
	for(k=0; k<t.length; k++)
		str.data[i+k-1] = t.data[k];
	for(k=i-1+j; k<s.length; k++)
		str.data[t.length+k-j] = s.data[k];
	str.length = s.length-j+t.length;
	return str;
}

SqString SubStr(SqString s, int i, int j) //subsidiary
{
	int k;
	SqString str;
	str.length = 0;
	if(i<=0 || i>s.length || j<0 || i-1+j > s.length)
		return str;
	for(k=i-1; k<i-1+j; k++)
		str.data[k-i+1] = s.data[k];
	str.length = j;
	return str;
}

SqString Concatenate(SqString s, SqString t)
{
	int i;
	SqString str;
	str.length = s.length + t.length;
	for(i=0; i<s.length; i++)
		str.data[i] = s.data[i];
	for(i=0; i<t.length; i++)
		str.data[i+s.length] = t.data[i];
	return str;
}