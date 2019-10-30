#include <iostream>
using namespace std;

class TestBase
{
public:
	virtual ~TestBase()
	{
		cout << "TestBase的析构函数" << endl;
	}
};

class Test : public TestBase
{
public:
	virtual ~Test()
	{
		cout << "Test的析构函数" << endl;
	}
};



int main()
{
	Test * t = new Test;
	TestBase * bt = t;

	delete bt;



	return 0;
}