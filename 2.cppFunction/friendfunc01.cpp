// this code demonstrate the use of friend function
//
#include <iostream>

using namespace std;

class grocery
{
	float rice, wheat;
	float total;
	public:
	grocery(){};
	void updateItems(float r, float w)
	{
		rice = r;
		wheat= w;
	}
	friend float totalVal(grocery G1, grocery G2);
};

//friend function definition & body 
float totalVal(grocery G1, grocery G2)
{
	float totVal= (G1.rice + G2.rice) + (G1.wheat + G2.wheat);
	return totVal;
}

int main()
{
	grocery A1, A2;

	A1.updateItems(20.5, 30.5);
	A2.updateItems(25.5, 35.5);

	//friend function called here 
	cout << "The total value available "<<totalVal(A1, A2) <<endl;
	
	return 0;
}
