#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v;
	int i;
	while(cin >> i)
		v.push_back(i);
	auto beg = v.begin();
	while( beg != v.end() && *beg >= 0)
		++beg;
    if(beg == v.end())
		cout << "all the inputs are larger or equal to 0" << endl;
	else
		cout << "some input are smaller than 0 : " << (*beg) << endl;
	return 0;
}
