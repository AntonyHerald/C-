// This program explains the base class reference 
// when derived classes are assigned as pointer ref.
//
// keyword 'virtual' declared make the function virtual, as to
// declared once and used as many times as possible. 
// 


#include <iostream>

using namespace std;


class base{
	public:
	int i;
	base(); 	//constructor 
};

base::base(){  //constructor invoked while the obj is created;
	i=0;
};

class der1 : public base{
	public:
		der1(){ i=7000;cout<<"Deiver class 1 i="<<i<<endl;}
};

class der2: public base{
	public:
		der2(){ i=5000;cout<<"Deiver class 2 i="<<i<<endl;}
};

class der3: public der1, public der2{
	public:
	der3(){
		cout <<"Derive class 3"<<cout;
	}
};

int main()
{

 	der3 D3;
	return 0;
}
	
	
