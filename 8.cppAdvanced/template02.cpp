#include <iostream>

using namespace std;

template <class T>

class Design
{
	protected:
	int d1, d2;
	public:
	Design () {}
	void Display();
};


void Design:: public Display()
{
	cout<<"D1 : "<<d1 <<endl;
	cout<<"D2 : "<<d2 <<endl;
}


int main()
{
	Design D1, D2;

	return 0;
}




