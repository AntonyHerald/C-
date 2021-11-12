// **
// This program explains the class & constructor usage
// ** 


#include <iostream>

using namespace std;

class base{
	private:
		int a, b;
		float result;
	public:
	base();  //constructor without parameter/Default constructor
	base(int x, int y){     //constructor with parameters
		a=x;
		b=y;
	}
	void display();
};

void base::display() { 
	result = a+b;
	cout <<"A value "<<a<<endl;
	cout <<"B value "<<b<<endl;
	cout <<"Result  "<<result<<endl;
}

int main()
{
	base B(10,20);  //when object is created - constructor with parameter is invoked
	B.display();

	return 0;
}
	
	
