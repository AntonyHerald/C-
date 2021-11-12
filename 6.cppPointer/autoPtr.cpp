// This program demonstract auto pointer
// Yes this is depricated in C++ 14 (now used as unique pointer)
//

#include <iostream>
#include <memory>

using namespace std;

class myClass{
	int age;
	public:
	
	myClass(){
		cout<<"Constructor invoked" << endl;
		age = 20;
	}
	~myClass(){
		cout<<"Destructor invoked" << endl;
	}

	void show(){
		cout<<endl<<"Age "<<age<<endl;
	}
 };

int main()
{
	{
	cout<<"I'm in Main func"<<endl;

	auto_ptr<myClass> p1(new myClass);  //object is created here
	p1->show();

	cout<<endl;
	cout<<"-- Address of p1 Obj : ";
	cout<<p1.get() <<endl;

	auto_ptr<myClass> p2(p1);          //new object is created here - copy contructor
	p2->show();

	cout<<"-- Address of p2 Obj : "<< p2.get() <<endl;

	}
	
	return 0;
}




