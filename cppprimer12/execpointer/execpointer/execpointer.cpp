#include <iostream>
#include <string>

using namespace std;

int main()
{
	unique_ptr<int> p(new int(20));
	int *pp = p.release();

	return 0;
}

int main2()
{
	shared_ptr<int> p(new int(10));
	cout << boolalpha << p.unique() << endl;
	p.reset(new int(20));
	cout << *p << endl;

	return 0;
}

int main1()
{
	// string *str = new string("hello World");
	string *str = new string(10, 'a');
	cout << *str << endl;
	delete str;
	return 0;
}