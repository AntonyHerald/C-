#include <iostream>

using namespace std;

class BaseClass
{
	//This is an Abstract class
	public:
	virtural void show() = 0;  //Pure virtural function
};

void BaseClass::show()
{
	cout<<"Inise BaseClass Show() \n";
}


class DervClass : public BaseClass
{
	public:
	void show()   
	{
		cout<<"Inside Derived Class" <endl;
		cout<<"Implementation of Derived class using virual class \n";
	}
};

class SmallerClass : public BaseClass
{
	public:
	void show()   
	{
		cout<<"Inside smaller Class" <endl;
		cout<<"Implementation of smaller class using virual class \n";
	}
};

int main()
{
	BaseClass *pointer;   // create BaseClass pointer 

	DervClass drvPtr;
	pointer = &drvPtr ; //baseClass pointer refers to the drive class object
	pointer->show();

	SmallerClass smallPtr;
	pointer = &smallPtr;
	pointer->show();

	return 0;
}
