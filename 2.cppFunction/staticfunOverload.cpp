/* 
 * This program demonstrates static/compile time function overloading
 * The function with same name which can perform different task
 */

#include <iostream>

using namespace std;

//function prototype declaration
int add(int, int);
float add(int, double);
double add(float, double, double);
double add(int, float);


int main()
{
	cout <<"In main function"<<endl;
	cout <<add(100, 250)<<endl;
	cout <<add(1234, 11.12)<<endl;
	cout <<add(1.1234, 134.9854, 031.7890)<<endl;
	cout <<add(1, 1.2345, 123E14)<<endl;
	return 0;
}

int add(int a, int b)
{
	return(a+b);
}
float add(int a, double b)
{
	return(a+b);
}
double add(float a, double b, double c)
{
	return(a+b+c);
}
double add(int a, float b)
{
	return(a+b);
}

