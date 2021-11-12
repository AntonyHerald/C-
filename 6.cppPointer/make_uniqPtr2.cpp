/* Smart pointers are defined in the std namespace in the <memory> header files.
 * The are crucial to the RAII (Resourse Acquisitions Is Intialization - programming.
 *
 * Main Goal of RAII idiom - is 
 * 1. when the resources are acquired, even the objects are initialized
 * 2. Objects are created and ready to use in just one line 
 * 3. System allocated resources should be automatically cleanedup. 
 */


#include <iostream>
#include <memory>

using namespace std;

int main()
{
	auto p = make_unique<int[]>(5);

	for(int i=0; i<5; i++)
	{
		p[i] = i+10;
		cout << p[i] << endl;
	}

	return 0;

}

