// This program explains constructor & destructor usage
#include <iostream>

using namespace std;

class complex
{
	int a, b;
	public:
       	complex();
	complex(int x, int y)
	{
		a=x; b=y;
	}

	~complex()
	{
		int garbage = NULL;
		a = b = garbage;
	}
};

int main()
{
	int complex , C2, C3;





