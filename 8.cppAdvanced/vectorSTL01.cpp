// Vectors are STL in C++, They care sequencial containers that store elements.
// Vectors are dynamic data storage, They can be expanded based on the elements
// at runtime;
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
	cout<<"Enter the size of vector :";
	cin>>size;
	vector<int> value(size);

	for(int i=1; i<=size;i++)
		value.push_back(i);

	for(auto i = value.begin(); i != value.end(); i++)
		cout<< *i <<"  ";

	return 0;
}

