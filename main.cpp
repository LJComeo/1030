#include <iostream>
using namespace std;


class Base
{
public:
	int m_i;
	void func1()
	{
		cout << "Base::func1" << endl;
	}
};

class TestBase:public Base
{
public:
	int m_a;
	void func1()
	{
		cout << "TestBase::func1" << endl;
	}
};

class TestBase2 :public Base
{
public:
	int m_b;
	void func2()
	{
		cout << "TestBase2::func2" << endl;
	}
};

class Test :public TestBase, public TestBase2
{
public:
	void func1()
	{
		cout << "Test::func1" << endl;
	}
};

int main0()
{
	Test t;

	t.func1();
	t.func2();

	return 0;
}