#include<iostream>

using namespace std;

class A
{
	static int a;
	static int b;
};

int main()
{
	A obj;
	cout << sizeof(obj);
}