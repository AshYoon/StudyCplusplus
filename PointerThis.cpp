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
//		return this;// ��ü�� ������ ��ȯ ���� ��ȯ���� Simple * 
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
//		cout << " ��ü���� " << endl;
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
//		return *this;  // �������� �� �ٿ��� �̶��� �����Ͱ� �ƴ� �ڱ��ڽ� ��ü�� ��ȯ�Ѵ� 
//		// �׷��� ��ȯ���� SelfRef ���������� ����Ǿ����� ��ü �ڽ��� �����Ҽ��ִ� ������ ���� ( ���� ��) ���� ��ȯ�ȴ� 
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
//	SoSimple* ptr1 = sim1.GetThisPointer(); // sim1 ��ü�� �ּҰ� 
//	cout << ptr1 << " ,";
//	ptr1->ShowSimpleData();
//	SoSimple sim2(200);
//	SoSimple * ptr2 = sim2.GetThisPointer(); //��ȯ�� �����ʹϱ� �����ͺ����� ���� 
//	cout << ptr2 << ",";
//	ptr2->ShowSimpleData();
//
//	SelfRef obj(3);
//	SelfRef& ref = obj.Adder(2); // ref�� ��ü obj �� adder�Լ��� �����Ų ���� �����Ѵ� 
//
//	obj.ShowTwoNumber();
//	ref.ShowTwoNumber();
//
//
//	ref.Adder(1).ShowTwoNumber().Adder(2).ShowTwoNumber(); //��ȯ�����������̶� ��� �ۼ����� 
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