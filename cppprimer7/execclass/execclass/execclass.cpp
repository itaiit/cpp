#include "pch.h"
#include <iostream>
#include <string>

struct Sales_data
{
	std::string isbn() const 
	{
		bookNo += "hello";
		return bookNo;
	}

	mutable std::string bookNo;
};

int main()
{
    std::cout << "Hello World!\n"; 
}