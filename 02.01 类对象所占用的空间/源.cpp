#include<iostream>

using namespace std;

class A
{
private:
	
public:
	char a;

	void func1()
	{

	}
	void func2()
	{

	}
	void func3()
	{

	}
};

int main()
{
	A a;
	a.a = 'c';
	int ilen = sizeof(a);	// �ȼ���sizeof(A) ���Ϊ1
	printf("ilen = %d\n", ilen);
	return 0;
}