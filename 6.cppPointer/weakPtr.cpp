// This program demonstrat weak pointer 
// weak points is a smart pointer 
// SMART pointers are container/wrapper for raw (classic) points
//
// weak pointer can share its address to another weak pointer
// but only within the scope of it usage.
// Shared pointer will also keep count of itself weak information
//

#include <iostream>
#include <memory>

using namespace std;

class myClass{
	private:
	//nothing;
	protected:
	//nothing;
	public:
	myClass()
	{
		cout<<"Constructor Invoked "<<endl;
	}
	~myClass()
	{
		cout<<"Destructor Invoked "<<endl;
	}
};

void testfunc()
{
	cout<<"I'm in testfuncMain func"<<endl;
	
	weak_ptr<myClass> wkPtr ; 

	shared_ptr<myClass> shrPtr = make_shared<myClass>(); //at this point the myClass class constructor called.
		//get the count of weak Pointer
		cout<<"1. Count of Shared Pointer : "<<shrPtr.use_count() <<endl;

		wkPtr = shrPtr;

		//sharing the org weak pointer
		weak_ptr<myClass> newshrPtr = shrPtr;
		cout<<"2. Count of Shared Pointer : "<<shrPtr.use_count() <<endl;
	cout<<"\n\nOutside the scope of weak (smart)pointer \n\n";

}


int main()
{
	cout<<"I'm in Main func"<<endl;
	testfunc();
	return 0;
}




