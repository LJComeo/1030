#include <iostream>
using namespace std;

class TestBase
{
public:
	virtual ~TestBase()
	{
		cout << "TestBase����������" << endl;
	}
};

class Test : public TestBase
{
public:
	virtual ~Test()
	{
		cout << "Test����������" << endl;
	}
};



int main()
{
	Test * t = new Test;
	TestBase * bt = t;

	delete bt;



	return 0;
}