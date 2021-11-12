// This program demonstrates the usage of referenca variable
// In C++ reference variable allows you to create an alias (second name) for the original variable
// When alias is changed the original is modified as well
// They both refer to the same address

#include <iostream>

using namespace std;

int main()
{
	int a  = 20;
	int &b = a;


	cout<<"-----------------------------------------";
	cout<<endl<<"The original variable A value is :"<<a;
	cout<<endl<<"The alias    variable B value is :"<<b;

	cout<<endl<<"The original variable A address is :"<<&a;
	cout<<endl<<"The original variable B address is :"<<&b;

	cout<<endl;
	cout<<"-----------------------------------------";
	b = 100;
	cout<<endl<<"The original variable A value is :"<<a;
	cout<<endl<<"The alias    variable B value is :"<<b;

	cout<<endl<<"The original variable A address is :"<<&a;
	cout<<endl<<"The original variable B address is :"<<&b;

	cout<<endl;
	cout<<"-----------------------------------------"<<endl;
	cout<<25u - 50;
	cout<<endl;
	cout<<"-----------------------------------------"<<endl;


	return 0;
}

