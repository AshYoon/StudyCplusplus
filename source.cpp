//#include <iostream>
//
//using namespace std;
////void SwapByRef(int * (&ref1), int * (&ref2))// 주소에 의한 swap 
////{
////	// ref1을 참조한값의 포인터 , ref2를 참조한 값의 포인터 
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
//	//int &num2 = RefRetFuncOne(num1); // 이부분에서 이미 num1 은 2 ;
//
//	//num1++; // num1 ++ 되서 3 
//	//num2++; // num2 는 3 + 1 이니깐 4 가되고 num1 은 참조자에 의해서 +1 되서 4가됨 
//	//cout << "num1 : " << num1 << endl;
//	//cout << " num2 : " << num2 << endl;   // num1 , num2 둘다 4 출력 
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