#include <iostream>
#include <vector>
#include <string>

using namespace std;

int func(int (&arr)[2])
{
	return arr[0];
}

const string &shorterString(const string & str1, const string &str2)
{
	return str1;
}

string &shorterStringNoConst(string &str1, string &str2)
{
	auto &r = shorterString(const_cast<const string&>(str1), const_cast<const string&>(str2));
	// r = "hello World";
	return const_cast<string&>(r);
}

vector<string> reVec()
{
	return { "Hello", "World", "!!" };
}

// 使用尾置返回类型
auto func(int(*arr)[])->int(*)[]
{
	return nullptr;
}

// 返回值为数组的指针
int (*func1(int(*arr)[]))[]
{
	return arr;
}

int (&func2(int(&arr)[]))[]
{
	return arr;
}

// 参数为数组的指针
int func(int(*arr)[2])
{
	cout << sizeof(*arr) / sizeof(int) << endl;

	return (*arr)[0];
}

int funcc(int(&arr)[2])
{
	cout << sizeof(arr) << endl;

	return arr[0];
}

// 重载函数的隐匿
void printa(const string &)
{
	cout << "A" << endl;
}
void printa(double)
{
	cout << "B" << endl;
}
void printa(int)
{
	cout << "C" << endl;
}
void fooBar()
{
	void printa(int);
	printa(10);
}

int main()
{
	std::vector<int> ints = { 2,2,2,2,3,4 };

	for (auto iter = ints.begin(); iter != ints.end();) {
		if (*iter == 2)
		{
			iter = ints.erase(iter);
		}
		else
		{
			iter++;
		}
	}

	for (int i : ints)
	{
		cout << i << endl;
	}

	return 0;
}


int main4()
{
	int arr[10] = { 1,2,3,4 };
	int(&rarr)[10] = arr;
	cout << sizeof(rarr) << endl;

	return 0;
}

int main3()
{
	fooBar();

	int i = 20;
	int &ri = i;
	cout << sizeof(ri) << endl;

	return 0;
}

int main2()
{
	string s1 = "today";
	string s2 = "monday";
	string s3 = shorterStringNoConst(s1, s2);
	cout << s3 << endl;
	return 0;
}

void main1()
{
	// 形参为数组的引用，此时也限制了数组参数的个数
	int arr[] = { 1,2 };

	cout << sizeof(arr) << endl;

	cout << func(arr) << endl;
	cout << "----------------------" << endl;
	cout << func(&arr) << endl;

}