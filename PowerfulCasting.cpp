#include "Global.h"

class Car
{
private:
	int fuelGuage = 100;
public:
	Car(int fuel) : fuelGuage(fuel)
	{
		///
	}

	Car()
	{}


	void ShowCarState() { cout << " �ܿ� ���ᷮ " << fuelGuage << endl; }


};


class Truck : public Car
{
private:
	int freightWeight;

public:
	Truck(int fuel, int weight)
		: Car(fuel), freightWeight(weight)
	{}


	Truck(int weight)
		: Car(), freightWeight(weight)
	{}
	void ShowTruckState()
	{
		ShowCarState();
		cout << " ȭ���� ����: " << freightWeight << endl;
	}
};

//int main()
//{
//	///////////////////////  " C ��Ÿ���� ����ȯ " /////////////////////////
//	//Car* pcar1 = new Truck(80, 200);
//	//Truck* ptruck1 = (Truck*)pcar1;// ������ ����̴� ����ȯ 
//	//ptruck1->ShowTruckState();
//
//	//cout << endl;
//
//	//Car* pcar2 = new Car(120);
//	//Truck* ptruck2 = (Truck*)pcar2; // ������ �־�̴� ����ȯ 
//	//ptruck2->ShowTruckState();
//
//	////////////////////// " C++ ��Ÿ���� ����ȯ " ///////////////////////////
//
//	//Car* pcar1 = new Truck(80, 200);
//	//Truck* ptruck1 = dynamic_cast<Truck*>(pcar1);  // dynamic_cast compile error 
//
//	//Car* pcar2 = new Car(120);
//	//Truck* ptruck2 = dynamic_cast<Truck>(pcar2);    // dynamic_cast compile error 
//
//	//Truck* ptruck3 = new Truck( 120);
//	//Car* pcar3 = dynamic_cast<Car*>(ptruck3);
//	//pcar3->ShowCarState();                        // dynamic_cast compile OK ! 
//
//
//
//
//
//
//	Car* pcar1 = new Truck(80, 200);
//	Truck* ptruck1 = static_cast<Truck*>(pcar1);
//	ptruck1->ShowTruckState();
//	cout << endl;
//	Car* pcar2 = new Car(120);
//	Truck* ptruck2 = static_cast<Truck*>(pcar2);
//	ptruck2->ShowTruckState();
//
//
//
//	int num1 = 20, num2 = 3;
//	//double result = 20 / 3;
//	double result = (double)20 / 3;    // C style cast 1 
//	double reuslt2 = double(20) / 3;   // C style cast 2 
//	double result3 = static_cast<double>(20) / 3;   // C++ style static cast default type
//	
//	
//	cout << result << endl;
//
//
//
//
//	const int num = 20;
//	int* ptr = (int*)&num;  // const ����� �����ʹ� const ������ �̴� 
//	*ptr = 30;      // const ��� num���� ������ �����ع��� 
//	cout << *ptr << endl;  // 30�� ��µ� 
//
//	float* adr = (float*)ptr;   // int �� �����͸� float �� �����ͷ� ���� 
//	cout << *adr << endl;   // ����� ��ü�� float ������ �ؼ��ؼ� ����Ѵ� 
//	
//
//
//
//
//	return 0;
//}