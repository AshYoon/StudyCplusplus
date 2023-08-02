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


	void ShowCarState() { cout << " 잔여 연료량 " << fuelGuage << endl; }


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
		cout << " 화물의 무게: " << freightWeight << endl;
	}
};

//int main()
//{
//	///////////////////////  " C 스타일의 형변환 " /////////////////////////
//	//Car* pcar1 = new Truck(80, 200);
//	//Truck* ptruck1 = (Truck*)pcar1;// 문제가 없어보이는 형변환 
//	//ptruck1->ShowTruckState();
//
//	//cout << endl;
//
//	//Car* pcar2 = new Car(120);
//	//Truck* ptruck2 = (Truck*)pcar2; // 문제가 있어보이는 형변환 
//	//ptruck2->ShowTruckState();
//
//	////////////////////// " C++ 스타일의 형변환 " ///////////////////////////
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
//	int* ptr = (int*)&num;  // const 상수의 포인터는 const 포인터 이다 
//	*ptr = 30;      // const 상수 num값을 실제로 변경해버림 
//	cout << *ptr << endl;  // 30이 출력됨 
//
//	float* adr = (float*)ptr;   // int 형 포인터를 float 형 포인터로 변경 
//	cout << *adr << endl;   // 저장된 객체를 float 형으로 해석해서 출력한다 
//	
//
//
//
//
//	return 0;
//}