#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n)
	{
		cout << "New object" << this << endl;
	}
	SoSimple(const SoSimple& copy) : num(copy.num)
	{
		cout << "New Copy" << this << endl;
	}
	~SoSimple()
	{
		cout << "Destroy obj" << this << endl;
	}

};

SoSimple SimpleFuncObj(SoSimple ob)
{
	cout << " Param ADR " << &ob << endl;
	return ob;

}

//int main()
//{
//	SoSimple obj(7);  // obj ������ num������ 7 ����  , ���� 
//
//	SimpleFuncObj(obj); // �Լ� �Ű����� ob �� obj �� ������� , �ٽ� ob�� �����ϰ� ���������� �Ѿ�ԵǼ� ob destory 
//	// �Լ� �ŰԺ��� copy , �Լ� param ADR , return ob Copy , �ŰԺ��� ob ���� , return�� ob ���� 
//
//
//	cout << endl;
//
//	SoSimple tempRef = SimpleFuncObj(obj); // �ϴ� obj ������� �� obj ���ϰ��� ref�� ������� �� �ӽð�ü ����� 
//	// �Լ� �ŰԺ��� copy , ParamADR , return Copy , �ŰԺ��� ob ����  , tempRef Copy ���� , return�� �ӽð�ü ���� 
//
//	cout << " return Obj" << &tempRef << endl; 
//	//     �ӽð�ü�� ���������ʴ´� tempRef�� �ӽð�ü�� �̸��� �׳� �Ҵ��ع����� �� copy�� �ƴϰ� �ӽð�ü �������ȵǰ� 
//	//     �׳� �ӽð�ü�� tempRef�� �ȶ��ϰ� �׳� �Ҵ���ѹ����� 
//	//     �ӽð�ü�� ��ü�� �Ҵ���ѹ����� �׳� ��ü�����̳� �ٸ����Եǳ�  ? 
//
//
//
//
//	return 0; // obj ���� 
//}