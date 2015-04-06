#include <iostream>
using namespace std;

size_t count_calls()
{
	static size_t ctr = 0;
	return ++ctr;
}
int main(int argc, const char * argv[])
{
	for(size_t i = 0; i != 10; ++i)
		cout << count_calls()<<endl;
	// if provided by argument i, it still works although there is a error says no argument
	cout << "Hi\40nihao";
	return 0;
}
