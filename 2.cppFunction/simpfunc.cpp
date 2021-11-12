/* Demonstrate simple function call
 * Demonstrate simple function with parameter pass
 */

#include <iostream>
using namespace std;

void func()
{
	cout <<"----------------------------- \n";
	cout <<"This is inside Empty function \n";
	cout <<"Good Bye " <<endl;
}

void funcParameter(	int a, 
		   	float b, 
			double c, 
			char d , 
			wchar_t e, 
			bool f,
			bool g,
			void *h,
			double i)
{
	cout <<"----------------------------- \n";
	cout<<" Inide Parameter function "<<endl;
	cout<<"Integer Value    "<<a <<endl;
        cout<<"Float Value      "<<b <<endl;
        cout<<"Double Value     "<<c <<endl;
        cout<<"Double Value(Exp)"<<i <<endl;
        cout<<"Char Value       "<<d <<endl;
        cout<<"Wide Char Value  "<<e << endl;
        cout<<"bool (true)Value  "<<f <<endl;
        cout<<"bool (false)Value "<<g <<endl;
	cout<<"Void (Ptr)Value   "<<h <<endl;

}

int main()
{
	int     i = 10;                 //integer       size 2 byte
        float   f = 10.12345;           //float         size 4 byte
        double  d = 134.64543;          //double        size 8 byte
        char    test =  'A';            //character     size 1 byte
        wchar_t wtest = L'&';           //wide char     size 2 byte
        bool    tru = true;             //boolean       size 1 byte
        bool    fal = false;            //boolean       size 1 byte
	void   *v = NULL;               //Empty         size 0 byte             
        double  expo = 45E12;           //which is equal to 45*10^12  (b


	func();
	funcParameter(i,f,d, test, wtest, tru, fal, v, expo);

	return 0;
}
