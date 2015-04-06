#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
	vector<string> v;
	string i;
	while(cin >> i)
		v.push_back(i);
	for(auto k : v)
		cout << k << " ";
	cout <<endl;

	return 0;
}
