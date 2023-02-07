#include<iostream>

using namespace std;

class A
{
	virtual void myfunc1()
	{

	}
	virtual void myfunc2()
	{

	}
};

int main()
{
	A obj;
	cout << sizeof(obj);
}