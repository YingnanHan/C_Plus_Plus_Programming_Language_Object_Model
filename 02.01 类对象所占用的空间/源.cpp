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
	int ilen = sizeof(a);	// 等价于sizeof(A) 结果为1
	printf("ilen = %d\n", ilen);
	return 0;
}