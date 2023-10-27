#include <iostream>
#include <map>
#include <set>

using namespace std;


int main()
{
	map<string, int> numbers = { {"three", 3}, {"eight", 3} };
	numbers["ten"] = 10;
	numbers.insert({ "two", 2 });

	cout << numbers["ten"]<<endl;
	numbers["ten"] = 4;
	cout << numbers["ten"] << endl;
	//
	pair<string, int> p = { "five", 5 };
	numbers.insert(p);
	cout << p.first << "  " << p.second << endl;
	//
	set<int> st = { 4, 8, -2, 0, 13, 4 };
	st.insert(5);		//add element;
	st.find(5);		//find element, if not find, return st.end()
	st.erase(0);		//delete element

	for (auto x : st)
	{
		cout << x << " ";
	}
	return 0;
}