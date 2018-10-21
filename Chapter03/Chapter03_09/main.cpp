#include "fun.h"

/* test
123
IO
I
O
IOIIOIOO
IOOIOIIO
IIIOIOIO
IIIOOIOO
*/

int main()
{
	string str;

	while(true)
	{
		cin >> str;
		LS *s;
		if(judge1(str, s))
			cout << "It's legal.--from judge1" << endl;
		else
			cout << "It's not legal.--from judge1" << endl;
		if(judge2(str))
			cout << "It's legal.--from judge2" << endl;
		else
			cout << "It's not legal.--from judge2" << endl;
	}

	return 0;
}