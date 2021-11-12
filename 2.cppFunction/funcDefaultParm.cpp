/* function with default parameter */

#include <iostream>

using namespace std;

float calculate(int a, float b, float p=3.14); //here p holds default parameter;
void printeff(char a ='-', int len=40);

int main()
{
	int value;

	value = calculate(120,140, 4.5);

	cout<<endl;
	printeff('*', 50);
	cout<<"The 1st calculated value "<<value<<endl;
	cout<<"The 2nd Calculated value "<<calculate(20,40); //here 3rd parameter will be default value, when not specified
	cout<<endl;
	printeff();

	return 0;
}

float calculate(int x, float y, float z)
{
	return(x * y * z);
}

void printeff(char c, int len)
{
	for(int i = 0; i<len; i++)
	{
		cout<<c;
	}
	cout<<endl;
}






