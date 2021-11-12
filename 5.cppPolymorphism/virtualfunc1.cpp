// This program explains the Automotive class reference 
// demonstrate virtual function and usage.
// 

#include <iostream>

using namespace std;

class Automotive{
	public:
	virtual void display();
};

class bike : public Automotive{
	public:
	void display();
};

class car: public Automotive{
	public:
	void display();
};

void Automotive::display() 
{
      	cout <<"Base class Display"<<endl;
}
void bike::display() 
{ 
	cout <<"Der1 class Display"<<endl;
}
void car::display() 
{ 
	cout <<"Der2 class Display"<<endl;
}

int main()
{
	Automotive *B;
	bike D1;
	car D2;

       	B = &D1;
	((bike*)B)->display();  //note explicit pointer typecase to point to derive class
	B = &D2;
	((car*)B)->display();

	return 0;
}
	
	
