#include "MyHead.h"
#include "Queue.h"
#include "Stack.h"

int main()
{
	string str = "abcdef";
	char e;
	SQ *q;
	InitSQWithStr(q, str, 7);
	DispSQ(q);

	cout << endl << "Inverting..." << endl;
	SS *s;
	InitSS(s);
	while(ExSQ(q, e))
	{
		Push(s, e);
		//cout << e;
	}
	//cout << endl;
	DeSQ(q);
	InitSQ(q);
	while(Pop(s, e))
	{
		EnSQ(q, e);
		//cout << e;
	}
	//cout << endl;
	DispSQ(q);
	return 0;
}