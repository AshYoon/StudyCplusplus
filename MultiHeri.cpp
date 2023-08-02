#include "Global.h"

class Base
{
public:
	Base() { cout << " base constructor " << endl; }
	void SimpleFunc() { cout << " Base One " << endl; }
};

class MiddleDerivedOne : virtual public Base
{
public:
	MiddleDerivedOne() : Base()
	{
		cout << "MiddleDerivedOne Construnctor" << endl;
	}
	void MiddleFuncOne()
	{
		SimpleFunc();
		cout << "MiddleDerivedOne" << endl;
	
	}
};

class MiddleDerivedTwo : virtual public Base
{
public:
	MiddleDerivedTwo() : Base()
	{
		cout << " MiddleDerived Two Contructor " << endl;
	}
	void MiddleFuncTwo()
	{
		SimpleFunc();
		cout << " MiddleDerived Two " << endl;
	}
};

class LastDerived : public MiddleDerivedOne, public MiddleDerivedTwo
{
public:
	LastDerived() : MiddleDerivedOne(), MiddleDerivedTwo()
	{
		cout << " LastDerived Contructor " << endl;
	}
	void ComplexFunc()
	{
		MiddleFuncOne();
		MiddleFuncTwo();
		SimpleFunc();

	}
};

//int main()
//{
//	cout << " ��ü ������ " << endl;
//	LastDerived ldr;
//	cout << " ��ü ���� �� " << endl;
//	ldr.ComplexFunc();
//	return 0;
//}
