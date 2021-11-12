// This program is to demonstrate this pointer

#include <iostream>

using namespace std;

class item
{
	int version;
	public:
	item(int v)
	{
		version = v;
	}

	void show(){
		cout << "Version:" <<version <<endl;
	 }

	int compare(item X)
	{
		//this pointer usage & example
		return ( ((this->version)) > (X.version)  ? 1 : 0 );
	}	
};

int main()
{
	item A1(200), B3(300);

	if (A1.compare(B3)) 
		cout <<" A1 " << "New Version " << endl;
	else
		cout <<" B3 " << "New Version " << endl;

	return 0;
}
