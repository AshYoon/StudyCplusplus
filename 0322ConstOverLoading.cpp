#include <iostream>
using namespace std;
class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n)
	{}
	SoSimple& AddNum(int n) // SoSimple �������� ��ȯ
	{
		num += n;
		return *this; // ��ȯ 
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
//	const SoSimple obj2(7); // const ��ü ���� 
//	obj1.SimpleFunc(); // �Ϲ� 
//	obj2.SimpleFunc(); // �����ε��� const �Լ� ȣ�� 
//
//	yourfunc(obj1); // �Ű������� const�� �޾ƿ��ϱ� obj�� ���� ��ü�� const �Լ�ȣ�� 
//	yourfunc(obj2); // const ��ü�� const �Լ�ȣ�� 
//
//
//	for(int i = 0; i < 10; i++)
//	{
//		Counter();
//	}
//	return 0;
//
//}