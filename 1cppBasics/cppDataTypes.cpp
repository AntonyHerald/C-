/* This program demonstrate all supported basic DataType
 *
 * Program explains DataType assignment and usage
 * This code will also get extended to demonstrate format specifer
 *
 */

#include <iostream>

using namespace std;

int main()
{
	int 	i = 10;  		//integer	size 2 byte
	float	f = 10.12345; 		//float     	size 4 byte
	double 	d = 134.64543;		//double  	size 8 byte
	char	test = 	'A';		//character	size 1 byte
	wchar_t	wtest = L'&'; 		//wide char	size 2 byte
	bool	tru = true;		//boolean	size 1 byte
	bool	fal = false;		//boolean	size 1 byte

	/* a note on void dataType - *void (void pointer) has memory location, whereas void does not have */
	void   *v = NULL;		//Empty		size 0 byte		
	double  expo = 45E12;		//which is equal to 45*10^12  (base 10, to the power of 0-12 zeros)

	
	cout<<"Integer Value	"<<i <<endl;
	cout<<"Float Value	"<<f <<endl;
	cout<<"Double Value	"<<d <<endl;
	cout<<"Double Value	"<<expo <<endl;
	cout<<"Char Value	"<<test <<endl;
	cout<<"Wide Char Value	"<<wtest << endl;
	cout<<"bool (true)Value "<<tru <<endl;
	cout<<"bool (fals)Value "<< fal <<endl;
	cout<<"Void (Ptr)Value  "<<v <<endl;

	return 0;

}





