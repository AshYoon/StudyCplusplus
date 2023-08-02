#include "Global.h"

//class Base
//{
//public:
//	void BaseFunc() { cout << "BaseFUnc" << endl; }
//};
//
//class Derived : public Base
//{
//public:
//	void DerivedFunc() { cout << " Derived Func " << endl; }
//};


// virtual destructor

class First
{
private:
	char* strOne;
public:
	First(const char* str)
	{
		strOne = new char[strlen(str) + 1];
	}
	virtual ~First()
	{
		cout << " ~First() called " << endl;
		delete[] strOne;
	}
};

class Second : public First
{
private:
	char* strSec;
public:
	Second(const char* str1, const char* str2) : First(str1)
	{
		strSec = new char[strlen(str2) + 1];
	}

	~Second()
	{
		cout << " ~Second Called " << endl;
		delete[]strSec;
	}
};



//int main()
//{
//	//Base* bptr = new Derived();
//	//bptr->DerivedFunc();
//	First* ptr = new Second("Simple ", "Complex");
//	delete ptr;
//	return 0;
//
//}