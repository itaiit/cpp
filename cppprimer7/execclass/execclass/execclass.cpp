#include "pch.h"
#include <iostream>
#include <string>

struct Sales_data
{

	using pos = std::string;

	Sales_data() = default;

	pos getPos();

	std::string isbn() const 
	{
		bookNo += "hello";
		return bookNo;
	}

	Sales_data &setPrice(int price) {
		this->price = price;
		return *this;
	}

	mutable std::string bookNo;
	int price;
};

Sales_data::pos Sales_data::getPos() {

}

typedef int Money;
std::string bal;
class Account {
public:
	Money balance() {
		return bal;
	}
private:
	Money bal;
};

class InitTest
{
public:
	InitTest(int pno, int &rp) :pno(pno), rp(rp) {
	}
	~InitTest();

private:
	const int pno;
	int &rp;
};

InitTest::~InitTest()
{
}

int main() {



}

int main1()
{
    std::cout << "Hello World!\n"; 

	Sales_data sd;
	std::cout << sd.price << std::endl;

	std::cout << "__" << sd.bookNo << "__"<< std::endl;

	Sales_data& sdd = sd.setPrice(100);
	sdd.setPrice(200);
	std::cout << sdd.price << sd.price << std::endl;
}