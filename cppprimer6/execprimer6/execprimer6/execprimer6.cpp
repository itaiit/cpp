#include <iostream>

using namespace std;

int func(int (&arr)[2])
{
	return arr[0];
}

int main()
{
	// 形参为数组的引用，此时也限制了数组参数的个数
	int arr[] = { 1,2 };
	cout << func(arr) << endl;

}