#include <iostream>
using namespace std;
int main(int argc, const char * argv[])
{
	int ival = 1024;
	int *pi = &ival;
	int **ppi = &pi;
	cout << "The value of ival \n" << "direct value: " << ival << "\n"
		<<"indirected value from *pi (*pi): " << *pi << "\n"
		<<"doubly indirected value from **ppi (**ppi): " << **ppi
		<< endl;
	cout << endl;
	cout << "The address of ival: \n" << "from ival (&ival): " << &ival << "\n"
		<< "from *pi (pi): " << pi << "\n"
		<<"from **ppi (*ppi): " << *ppi << endl;


}
