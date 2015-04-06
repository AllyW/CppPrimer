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
	auto it = v.begin();
    
	//cout << (*it++)<<endl;
	//cout << ((*it)++) << endl;
	//cout << (*it.empty()) << endl;
	//cout << (it -> empty()) << endl;
    //cout << (++*it) << endl;
    cout << (it++ -> empty()) << endl;
	//cout << it << " " << (*it++) << " " << it << endl;

	return 0;

}
