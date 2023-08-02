#include "Global.h"

template <typename T>
void ShowStaticValue()
{
	static T num = 0;
	num += 1;
	cout << num << " ";
}


template <typename T>
class SimpleStaticMem
{
private:
	static T mem;
public:
	void AddMem(T num) { mem += num; }
	void ShowMem() { cout << mem << endl; }
};

template <typename T>
T SimpleStaticMem<T>::mem = 0;




//int main()
//{
//	//ShowStaticValue<int>();
//	//ShowStaticValue<int>();
//	//ShowStaticValue<int>();
//	//cout << endl;
//	//ShowStaticValue<long>();
//	//ShowStaticValue<long>();
//	//ShowStaticValue<long>();
//	//cout << endl;
//	//ShowStaticValue<double>();
//	//ShowStaticValue<double>();
//	//ShowStaticValue<double>();
//
//
//
//	SimpleStaticMem<int> obj1;
//	SimpleStaticMem<int> obj2;
//	obj1.AddMem(2);  
//	obj2.AddMem(3);
//	obj1.ShowMem(); // obj 1 �� obj 2 �� ���� static ��������� �����ϴ� ���� 5 
//
//	SimpleStaticMem<long> obj3;
//	SimpleStaticMem<long> obj4;
//	obj3.AddMem(100);
//	obj4.ShowMem(); // obj3, 4 �Ѵ� ����������� ���� , obj3�� 100�� �߰��ص������ϴ� obj4�� 100 
//
//
//
//
//
//
//	return 0;
//
//}