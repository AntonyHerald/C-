// Vectors are STL in C++, They care sequencial containers that store elements.
// Vectors are dynamic data storage, They can be expanded based on the elements.
//
// Why - When user do not know the size of array/container during design time
// this comes handy to alter the size during run time.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int size;	
	cout<<"Enter the size of the Integer vector ";
	cin>>size;

	//to initialize the value
	vector<int> value(size, 0);

	for(int i: value)
		cout<< i << endl; //hence this will print all zeros

        for(int i=0; i < size ; i++)
	{
		cout<<"Enter the vector elements "<<i<< " ";
		cin >> value[i];
	}

	for(auto x: value){
		cout<< x <<" ";
	}

	cout<<"-----------------";

        return 0;
}

