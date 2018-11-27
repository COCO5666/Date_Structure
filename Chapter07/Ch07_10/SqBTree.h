#include "LiBTree.h"

#include <cstdio>
#include <iostream>

using namespace std;

#define ElemType char
#define MaxSize 500

typedef ElemType SBTree[MaxSize];
typedef ElemType SBTNode;

void CreateSqBTFromLiBT(SBTNode *&SB, LBTNode *LB, int index=1);
void CreateSqBTree(SBTNode *&b, char *str);
void DispSqBTree(SBTNode *b, int index=1);
void DestroySqBTree(SBTNode *b);