#include<iostream>

using namespace std;

class myobject
{
public:
	myobject()
	{
		// 构造函数
	}

	virtual ~myobject()
	{
		// 析构函数
	}

	float get_value() const
	{
		return this->value;
	}

	static int s_getcount()
	{
		return ms_scount;
	}

private:
	float value;
	static int ms_scount;
};

int main()
{
	myobject obj;
	int ilen = sizeof(obj);
	cout << ilen;
}