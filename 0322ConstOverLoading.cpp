#include <iostream>
using namespace std;
class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n)
	{}
	SoSimple& AddNum(int n) // SoSimple 참조형을 반환
	{
		num += n;
		return *this; // 반환 
	}

	void SimpleFunc()
	{
		cout << " Simple Func : " << num << endl;
	}

	void SimpleFunc() const
	{
		cout << " const SimpleFunc : " << num << endl;
	}


};

void yourfunc(const SoSimple& obj)
{
	obj.SimpleFunc();
}

void Counter()
{
	static int cnt;
	cnt++;
	cout << " currend cnt : " << cnt << endl;
}



//int main()
//{
//	SoSimple obj1(2);
//	const SoSimple obj2(7); // const 객체 생성 
//	obj1.SimpleFunc(); // 일반 
//	obj2.SimpleFunc(); // 오버로딩된 const 함수 호출 
//
//	yourfunc(obj1); // 매개변수를 const로 받아오니깐 obj의 복사 개체가 const 함수호출 
//	yourfunc(obj2); // const 객체의 const 함수호출 
//
//
//	for(int i = 0; i < 10; i++)
//	{
//		Counter();
//	}
//	return 0;
//
//}