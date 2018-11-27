#include "LiBTree.h"
#include "SqBTree.h"

#include "string.h"
#include <iostream>

using namespace std;

int main()
{
	char str[]="A(B,C)";
	int i;
	SBTNode *SB, *SB2;
	LBTNode *LB;

	CreateLiBTree(LB, str);
	DispLiBTree(LB);
	cout  << endl;

	CreateSqBTree(SB, str);
	for(i=0; i<10; i++)
		cout << SB[i];
	cout << endl;
	DispSqBTree(SB);
	cout << endl;

	CreateSqBTFromLiBT(SB2, LB);
	for(i=0; i<10; i++)
		cout << SB2[i];
	cout << endl;
	DispSqBTree(SB2);
	cout << endl;

	DestroyLiBTree(LB);
	DestroySqBTree(SB);
	DestroySqBTree(SB2);
	return 0;
}