// This program will demonstrate how the unary '+' will be 
// overloaded to add 2 or more objects 

#include <iostream>

using namespace std;

class Addition {
	private:
	int a, b, result;
	public:
	Addition(){}; //construction without any parameter + this will initialize 
		    //private member data to zero
	Addition(int x, int y);
	Addition operator + (Addition A);
	void showResult();
};

Addition::Addition(int x, int y)
 {
	 this->a=x; this->b=y;
	 result = a+b;
 }

void Addition::showResult()
{
	cout <<"Result -- "<<result <<endl;
}

Addition Addition::operator + (Addition A)
{
	Addition X;
	X.a  = this->a + A.a;
	X.b  = this->b + A.b;
	X.result = this->result + A.result;

	return X;
}

int main()
{
	Addition A1, A2, A3;  //this will invoke constructor without parameter

	A1 = Addition(100, 250);  //this will invoke constructor with parameber
	A2 = Addition(500, 600); 
   
	cout <<"Object A1 ";A1.showResult();
	cout <<"Object A2 ";A2.showResult();

	A3 = A1 + A2;  //unary '+' operator invoked

	cout <<"Object A3 ";A3.showResult();

	return 0;
}
 







