/* The program demonstrates inline function */

#include <iostream>

using namespace std;

inline float funcMulti(int a, float b)
{
	return(a*b);
}

inline float funcDiv(int a, float b, double d)
{
	return( (a*b*d)/3);
}


int main()
{
	cout<<funcMulti(100, 22.5)<<endl;
	cout<<funcDiv(150,22.5, 3E8)<<endl;

	return 0;
}




