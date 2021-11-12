// This program explains the base class reference 
// when derived classes are assigned as pointer ref.
//
// keyword 'virtual' declared make the function virtual, as to
// declared once and used as many times as possible. 
// 
// The base class declared 'virtural display()'
// Observed in main() - Base class object (which is pointer) now holds the address
// whereas the derived classes make use of the display() by defining its body
// but when invoking the drived class - it needs the base address of display function
// hence drive class objects refer to the Base class to invoke
// This explains - 'Declare once and use make possible ways' - Polymorphism 
//

#include <iostream>

using namespace std;


class base{

	int a, b;
	float result;
	public:
	base(){
		a=b=0;
		result=0.0;
	}
	virtual	void display();
};

class der1 : public base{
	public:
	void display();
};

class der2: public der1{
	public:
	void display();
};

class der3: public der2{
	public:
	void display();
};

void base::display() { cout <<"Base class Display"<<endl;}
void der1::display() { cout <<"Der1 class Display"<<endl;}
void der2::display() { cout <<"Der2 class Display"<<endl;}
void der3::display() { cout <<"Der3 class Display"<<endl;}

int main()
{
	base *B;
	der1 D1;
	der2 D2;
	der3 D3;

       	B = &D1;
	B->display();
	B = &D2;
	B->display();
	B = &D3;
	B->display();

	return 0;
}
	
	
