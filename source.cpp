//#include <iostream>
//
//using namespace std;
////void SwapByRef(int * (&ref1), int * (&ref2))// �ּҿ� ���� swap 
////{
////	// ref1�� �����Ѱ��� ������ , ref2�� ������ ���� ������ 
////	int * temp = ref1;
////	ref1 = ref2;
////	ref2 = temp;
////
////}
//
//int& RefRetFuncOne(int& ref)
//{
//	ref++;
//	return ref;
//
//}
//
//
//
//
//int main()
//{
////	int A = 10;
////	int B = 20;
////	int* ptrA = &A;
////	int* ptrB = &B;
//////	SwapByRef(ptrA, ptrB);
////
////	cout << *ptrA << endl;
////	cout << *ptrB << endl;
//
//	//int num1 = 1;
//	//int &num2 = RefRetFuncOne(num1); // �̺κп��� �̹� num1 �� 2 ;
//
//	//num1++; // num1 ++ �Ǽ� 3 
//	//num2++; // num2 �� 3 + 1 �̴ϱ� 4 ���ǰ� num1 �� �����ڿ� ���ؼ� +1 �Ǽ� 4���� 
//	//cout << "num1 : " << num1 << endl;
//	//cout << " num2 : " << num2 << endl;   // num1 , num2 �Ѵ� 4 ��� 
//
//	const int num = 12;
//
//	const int* ptr = &num;
//	const int& ptr2 = *ptr;
//
//	cout << " ptr2 " << *(&ptr2) << endl;
//	cout << " ptr " << *ptr << endl;
//
//
//
//
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
//
//
//
//
//
//
//}