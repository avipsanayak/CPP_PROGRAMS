//WAP to demonstrate use of pure virtual function and abstract base clas
#include<iostream>
using namespace std;

class Base
{
int x;
public:
	virtual void func() = 0;
	int getX() 
	{
		return x;
	}
};


class Derived: public Base
{
	int y;
public:
	void func()
	{
		cout << "func() called";
	}
};

int main(void)
{
	Derived d;
	d.func();
	return 0;
}