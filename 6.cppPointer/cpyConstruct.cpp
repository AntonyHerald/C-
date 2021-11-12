// this program demonstract copy constructor 

#include <iostream>

using namespace std;

class music{
        private:
                int a, b;
                float result;
        public:
        music();  //constructor without parameter/Default constructor
        music(int x, int y){     //constructor with parameters
		cout<<"Contructor invoked"<<endl;
                a=x;
                b=y;
        }
	music(music & M)
	{
		a = M.a;
		b = M.b;
	}
        void display();
	~music()
	{
		cout<<"Destructor invoked"<<endl;
		a = b = 0;
	}
};

void music::display() {
        result = a+b;
	cout<<"Display Function \n";
        cout <<"A value "<<a<<endl;
        cout <<"B value "<<b<<endl;
        cout <<"Result  "<<result<<endl;
}

int main()
{
        //when object is created - constructor with parameter is invoked
	music guitar(3456, 3456);
	music violin(guitar);   //copy contructor
	music strings = guitar; //copy construtor

	guitar.display();
        guitar.~music(); //invoked base class destructor

        return 0;
}

