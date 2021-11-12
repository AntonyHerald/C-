#include <iostream>

using namespace std;

class car
 {
	 int seat, wheel, gear;   //by default class is private specifier;
	
	 public:
	 void getObj_data();
	 void putObj_data();
 };


void car::getObj_data()
{
	seat = 4;
	wheel = 4;
	gear = 4;
}

void car::putObj_data()
{
	cout<<"seats supported "<<seat <<endl;
	cout<<"Wheels          "<<wheel <<endl;
	cout<<"Gear supported  "<<gear <<endl;
}

int main()
{
	car maruti, jeep, kia; //3 objects of type car created

	cout<<"Maruti Automotive Obj "<<endl;
	maruti.getObj_data();
	maruti.putObj_data();
	cout<<"-------------------"<<endl;

	cout<<"Jeep Automotive Obj "<<endl;
	jeep.getObj_data();
	jeep.putObj_data();
	cout<<"-------------------"<<endl;
	
	cout<<"kia Automotive Obj "<<endl;
	kia.getObj_data();
	kia.putObj_data();
	cout<<"-------------------"<<endl;

	return 0;

}




