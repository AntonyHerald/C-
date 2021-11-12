// Vector Of Vectors are dynamic array of user defined type
// Defining 2 Dimensional Vectors
//
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<vector<int>> value;

	for(int i=1; i<=5;i++)
	{
		for(int j=1; j<=5; j++)
		{
			int x = i+j;
			value.push_back(x);	
		}
	}

	for(auto i =1; i< 5; i++)
	{
		for(auto j=i; j<5; j++)
		cout<< value[i][j] <<"  ";
	}

	return 0;
}

