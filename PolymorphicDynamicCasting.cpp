#include "Global.h"

// polymorphic -> �߻� Ŭ���� 

class SoSimple   //PolymorphicŬ���� ! ShowSImpleInfo�� �����Լ� �̹Ƿ� 
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