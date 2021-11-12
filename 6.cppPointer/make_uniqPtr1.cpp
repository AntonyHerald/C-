// This program demonstrat unique pointer 
// unique points is a smart pointer 
// SMART pointers are container / wrapper for raw points
//
// smart pointer internally call new to allocate memory
// and desposes(deallocate) memory by calling delete 

// Example of unqiue pointer when moved, the original pointer is dereferenced.

#include <iostream>
#include <memory>

using namespace std;

void testfunc()
{
	cout<<"I'm in testfuncMain func"<<endl;
	
	{ //inside the scope of smart pointer
		unique_ptr<int> valuePtr = make_unique<int>(250);
		unique_ptr<int> newPtr   = move(valuePtr);

		cout<<"\nNew Ptr: "<< *newPtr;
		//here the g++ compiler will throw segmentation fault exception
		//handling the segfault with exception handling

		try {
			//This Exception handling block, 
			//handles dereferenced unique pointer which is moved 	

			if(valuePtr == NULL)
				throw "NullPointer Exception";
			else
				cout<<"\nValue Ptr: "<< *valuePtr;
		}
		catch(const char * uniqException){
			cout<<"Exception "<<uniqException<< endl;
		}
	}
	cout<<"\n\nOutside the scope of unique (smart)pointer \n\n";

}


int main()
{
	cout<<"I'm in Main func"<<endl;
	testfunc();
	return 0;
}




