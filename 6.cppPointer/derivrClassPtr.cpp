// this program demonstrates the use of virtual function
#include <iostream>

using namespace std;

class Data{
	int value;
	public:
	Data(){}
	Data(int x)
	{
		value=x;
	}
	void virtual showData()
	{
		cout<<"Base class value "<< value <<endl;
	}
};

class DerData: public Data
{
	int drvValue;
	public:
	DerData() { }
	DerData(int x)
	{
		drvValue = x;
	}
	void showData()
	{
		cout<<"Derive class value "<<drvValue <<endl;
	}
};

int main()
{
	Data *DPtr = new Data;  //base class pointer (A place holder)
	
	Data D1(200);   //this is base class contructor
	DPtr = &D1;
	DPtr->showData();

	DerData D2(500);  //this is derived class contructor
	DPtr = &D2;
	DPtr->showData();

	return 0;
}


