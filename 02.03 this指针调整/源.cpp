#include<iostream>

using namespace std;

class A
{
public:
	int a;
	A()
	{
		printf("A::A()��thisָ���ǣ�%p!\n",this);
	}
	void funcA()
	{
		printf("A::funcA: this = %p\n", this);
	}
};

class B
{
public:
	int b;
	B()
	{
		printf("B::B() ��thisָ���� :%p!\n", this);
	}
	void funcB()
	{
		printf("B::funcB: this = %p\n", this);
	} 
};

class C : public B, public A
{
public:
	int c;
	C()
	{
		printf("C::C() ��thisָ���� :%p!\n", this);
	}
	void funcC()
	{
		printf("C::funcC: this = %p\n", this);
	}
};

int main()
{
	cout << sizeof(A) << endl;
	cout << sizeof(B) << endl;
	cout << sizeof(C) << endl;
	C myc;
	myc.funcA();
	myc.funcB();
	myc.funcC();
}