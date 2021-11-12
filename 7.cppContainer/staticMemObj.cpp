// **
// This program explains the static member variable usage
// ** 

#include <iostream>

using namespace std;

class base{
	static int count;
	public:
	void show(){
		cout <<endl;
		cout<<" A value "<< count;
		cout<<" A value "<< &count;

	}
};

int base:: count = 1;

int main()
{
	base B1, B2, B3;

	B1.show();
	B2.show();
	B3.show();

	cout << endl <<"This example clearly show that all object share the same memory"<<endl;

	return 0;
}
	
	
