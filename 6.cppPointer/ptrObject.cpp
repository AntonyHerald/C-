// this program demonstract pointer to object
//

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
	music *guitar = new music(20, 300);

	guitar->display();
        guitar->~music(); //destructor

        return 0;
}

