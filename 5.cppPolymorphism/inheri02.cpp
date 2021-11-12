// This program explains the base class reference 
// when derived classes are assigned as pointer ref.
//

#include <iostream>

using namespace std;


class base{
	public:
	int value;
	void display();
};

class derive1 : public base{
	public:
	int value;
	void display();
};

class derive2: public base{
	public:
	int value;
	void display();
};

void base::display() { cout <<"Base class Display & value :"<<value <<endl;}
void der1::display() { cout <<"Der1 class Display & value :"<<value <<endl;}
void der2::display() { cout <<"Der2 class Display & value :"<<value <<endl;}

int main()
{
	base *bptr;
	base  bas;

	bptr = &bas;
	bptr->value = 10000;
	bptr->display();

	derive1 der1;
	bptr = & der1;
	bptr->b=20000;
	bptr->display();

	derive2 der2;
	bptr = & der2;
	bptr->b=20000;
	bptr->display();

	return 0;
}
	
	
