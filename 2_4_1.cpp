#include <iostream>
using namespace std;
int main(int argc, const char * argv[])
{
	int i = 42;
	const int &r1 = i;
	const int &r2 = 42;
	const int &r3 = r1*2;
	int &r4 = r1 * 2;
}
