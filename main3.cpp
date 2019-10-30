#include <iostream>
using namespace std;

class Base
{
public:
	virtual void func1()
	{
		cout << "Base::func1" << endl;
	}
	virtual void func2()
	{
		cout << "Base::func2" << endl;
	}
	virtual void func3()
	{
		cout << "Base::func3" << endl;
	}
	virtual void func4()
	{
		cout << "Base::func4" << endl;
	}
};

class TestBase1 :virtual public Base
{
public:
	virtual void func1()
	{
		cout << "TestBase1::func1" << endl;
	}
};

class TestBase2 :virtual public Base
{
public:
	virtual void func2()
	{
		cout << "TestBase2::func2" << endl;
	}
};

class Test : public TestBase1, public TestBase2
{
public:
	virtual void func1()
	{
		cout << "Test::func1" << endl;
	}
};



int main()
{
	Test t;
	t.func4();



	return 0;
}