/* A simple example of using template 
 *
 * Advantage is - 
 * create a template to add values of diff dataType (or)
 * create a template to compare value of diff dataType
 */


#include <iostream>

using namespace std;

template <class Temp>

Temp Maximum(Temp a, Temp b)
{
	return a>b ? a : b ;
}


int main()
{
	char c='A', d='B';
	cout <<"Character Template :" <<Maximum(c, d) <<endl;

	int i=10, j=500;
	cout <<"Integer   Template :" <<Maximum(i, j) <<endl;

	float m=30.1, n=41.5;
	cout <<"float     Template :" <<Maximum(m, n) <<endl;

	double x=20E12, y=20E21;
	cout <<"Double    Template :" <<Maximum(x, y) <<endl;

	return 0;
}


		

