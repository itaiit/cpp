#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	cout << "__FILE__:" << __FILE__ << ", __LINE__:" << __LINE__ << endl;

	

	return 0;
}

void main8()
{
	// 使用数组初始化vector
	int nums[] = { 1,2,3,4,5,6,7,8,9,0 };
	vector<int> vecint(begin(nums), end(nums));
	for (vector<int>::const_iterator biter = vecint.begin(), eiter = vecint.end(); biter != eiter; biter++)
	{
		cout << "*" << *biter;
	}
}

void main7()
{
	// string与C风格的字符串的转化，使用c_str()
	string s = "hello";
	const char *ch = s.c_str();
	s = "world";
	while (*ch)
	{
		cout << "*" << *ch;
		++ch;
	}
}

void main6()
{
	// C风格的字符串
	const char ch[] = { 'h', 'e', 'l', 'l', 'o', '\0' };
	const char *op = ch;
	while (*op)
	{
		cout << "*" << *op;
		++op;
	}
}

void main5()
{
	// vector的back()
	vector<int> ints = { 10 };
	int &rint = ints.back();
	rint = 20;
	cout << ints[0] << endl;
}

void main4()
{
	// 数组迭代器
	int nums[] = { 1,2,3,4,5,6,7,8,9,0 };
	int *biter = begin(nums);
	int *eiter = end(nums);
	cout << *biter << endl;
	cout << *(eiter - 1) << endl;
}

void main3()
{
	// 指向数组的指针
	int nums[] = { 1,2,3,4,5,6,7,8,9,0 };
	int(*pPar)[10] = &nums;
	*pPar[0] = 100;
	cout << nums[0] << endl;
}

void main2()
{
	// 数组的引用
	int nums[] = { 1,2,3,4,5,6,7,8,9,0 };
	int(&rPar)[10] = nums;
	rPar[0] = 100;
	cout << nums[0] << endl;
}

void main1()
{
	std::vector<int> ints{ 1,2,3,4,5,6,7,8,9,0 };
	std::cout << ints.size() << endl;
	vector<string> strs{ "10" };
	vector<string> str;
	cout << strs.size() << endl;
	str.push_back("hi");
	str.push_back("hello");
	for (size_t i = 0; i < str.size(); i++)
	{
		cout << str[i] << endl;
	}
	string s = "hello world!!!";
	for (auto &c : s) {
		c = c + 1;
	}
	for (size_t i = 0; i < s.size(); i++)
	{
		cout << s[i] << endl;
	}
}