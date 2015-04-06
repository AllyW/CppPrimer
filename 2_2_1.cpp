#include <iostream>
using namespace std;
string glob_str;
int glob_int;
int main()
{
//	int i = {3.13};
    int loca_int;
	string loca_str;
	cout << "global string : " << glob_str <<  ", global int : " << glob_int << endl;
	cout << "local string : " << loca_str <<  ", local int : " << loca_int << endl;
	cout << "\t\tHi!\n";
}
