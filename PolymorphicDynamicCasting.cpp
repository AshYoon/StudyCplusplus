#include "Global.h"

// polymorphic -> 추상 클래스 

class SoSimple   //Polymorphic클래스 ! ShowSImpleInfo가 가상함수 이므로 
{
public:
	virtual void ShowSimpleInfo()
	{
		cout << " SoSimple Base Class " << endl;
	}
};

class SoComplex : public SoSimple
{
public:
	void ShowSimpleInfo()
	{
		cout << " SoComplex Derived Class " << endl;
	}
};

//int main()
//{
//	SoSimple* simptr = new SoComplex;
//	SoComplex* comptr = dynamic_cast<SoComplex*>(simptr);
//	comptr->ShowSimpleInfo();
//	return 0;
//}