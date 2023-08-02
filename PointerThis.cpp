//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//class SoSimple
//{
//private:
//	int num;
//public:
//	SoSimple(int n) : num(n)
//	{
//		cout << " num = " << num << " , ";
//		cout << "addtess = " << this << endl;
//	}
//
//	void ShowSimpleData()
//	{
//		cout << num << endl;
//	}
//
//	SoSimple* GetThisPointer()
//	{
//		return this;// 객체의 포인터 반환 따라서 반환형도 Simple * 
//	}
//};
//
//class SelfRef
//{
//private:
//	int num;
//public:
//	SelfRef(int n) : num(n)
//	{
//		cout << " 객체생성 " << endl;
//	}
//	SelfRef& Adder(int n)
//	{
//		num += n;
//		return *this;
//	}
//
//
//
//	SelfRef& ShowTwoNumber()
//	{
//		cout << num << endl;
//		return *this;  // 역참조자 를 붙여서 이때는 포인터가 아닌 자기자신 객체를 반환한다 
//		// 그러나 반환값이 SelfRef 참조형으로 선언되었으니 객체 자신을 참조할수있는 참조의 정보 ( 참조 값) 으로 반환된다 
//
//	}
//};
//
//
//
//
//int main()
//{
//	SoSimple sim1(100);
//	SoSimple* ptr1 = sim1.GetThisPointer(); // sim1 객체의 주소값 
//	cout << ptr1 << " ,";
//	ptr1->ShowSimpleData();
//	SoSimple sim2(200);
//	SoSimple * ptr2 = sim2.GetThisPointer(); //반환이 포인터니깐 포인터변수에 저장 
//	cout << ptr2 << ",";
//	ptr2->ShowSimpleData();
//
//	SelfRef obj(3);
//	SelfRef& ref = obj.Adder(2); // ref는 객체 obj 에 adder함수를 실행시킨 값을 참조한다 
//
//	obj.ShowTwoNumber();
//	ref.ShowTwoNumber();
//
//
//	ref.Adder(1).ShowTwoNumber().Adder(2).ShowTwoNumber(); //반환형이참조값이라 계속 작성가능 
//
//
//
//
//
//
//
//
//
//	return 0;
//
//}