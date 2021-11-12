// This program demonstrat shared pointer 
// shared points is a smart pointer 
// SMART pointers are container/wrapper for raw (classic) points
//
// shared pointer can share its address to another shared pointer
// but only within the scope of it usage.
// Shared pointer will also keep count of itself shared information
//

#include <iostream>
#include <memory>

using namespace std;

class myShared{
	private:
	//nothing;
	protected:
	//nothing;
	public:
	myShared()
	{
		cout<<"Constructor Invoked "<<endl;
	}
	~myShared()
	{
		cout<<"Destructor Invoked "<<endl;
	}
};

void testfunc()
{
	cout<<"I'm in testfuncMain func"<<endl;
	
	{ 
		//inside the scope of shared pointer
		shared_ptr<myShared> shrPtr = make_shared<myShared>(); //at this point the myShared class constructor called.
		//get the count of shared Pointer
		cout<<"1. Count of Shared Pointer : "<<shrPtr.use_count() <<endl;

		//sharing the org shared pointer
		shared_ptr<myShared> newshrPtr = shrPtr;
		cout<<"2. Count of Shared Pointer : "<<shrPtr.use_count() <<endl;
	}
	cout<<"\n\nOutside the scope of shared (smart)pointer \n\n";

}


int main()
{
	cout<<"I'm in Main func"<<endl;
	testfunc();
	return 0;
}




