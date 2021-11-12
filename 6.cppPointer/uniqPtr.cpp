// This program demonstrat unique pointer 
// unique points is a smart pointer 
// SMART pointers are container/wrapper for raw (classic) points
//
// smart pointer internally call new to allocate memory
// and desposes(deallocate) memory by calling delete 
// when smart pointer goes out of scope 

#include <iostream>
#include <memory>

using namespace std;

void testfunc()
{
	cout<<"I'm in testfuncMain func"<<endl;
	
	{ //inside the scope of smart pointer
		unique_ptr<int> valuePtr(new int(200));

		cout<<"\nValue Ptr: "<< *valuePtr;
	}
	cout<<"\n\nOutside the scope of unique (smart)pointer \n\n";
	// below code will thow compilation error
	// cout<<"Value Ptr "<< *valuePtr;

}


int main()
{
	cout<<"I'm in Main func"<<endl;
	testfunc();
	return 0;
}




