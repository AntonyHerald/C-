/* Simple C++ program to reverse a string 
 * using STL - strrev()
 *
 * STL - Standard Template Libraries 
 */

#include <iostream>
#include <bits/stdc++.h>
#include <cstring>

using namespace std;

int main()
{
	string name="C++ from Beginning to Advanced";

	cout<<endl<<"The String is "<<endl;
	cout<<name<<endl;

	reverse(name.begin(),name.end()) ;
	cout <<name <<endl;

	//cout<<endl<<"string Reversed : "<<strrev(name); 

	return 0;

}


