// This program explains the base class reference 
// when derived classes are assigned as pointer ref.
//

#include <iostream>

using namespace std;


class base{
	public:
	void display();
};

class der1 : public base{
	public:
	void display();
};

class der2: public base{
	public:
	void display();
};

void base::display() { cout <<"Base class Display"<<endl;}
void der1::display() { cout <<"Der1 class Display"<<endl;}
void der2::display() { cout <<"Der2 class Display"<<endl;}

int main()
{
	base *B;
	der1 D1;
	der2 D2;

       	B = &D1;
	((der1*)B)->display();  //note explicit pointer typecase to point to derive class
	B = &D2;
	((der2*)B)->display();

	return 0;
}
	
	
