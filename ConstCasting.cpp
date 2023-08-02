#include "Global.h"


void ShowString(char* str)
{
	cout << str << endl;
}

void ShowAddResult(int& n1, int& n2)
{
	cout << n1 + n2 << endl;
}




//int main()
//{
//
//
//
//	//////////////////////////////const_cast example /////////////////////////////////////////
//
//	//const char* name = "Lee Sung Ju";
//	//ShowString(const_cast<char*>(name));
//
//	//const int& num1 = 100;
//	//const int& num2 = 200;
//	//ShowAddResult(const_cast<int&>(num1), const_cast<int&>(num2));
//
//	////////////////////////////////// reinterpret_cast example ///////////////////////
//	int num = 0x010203;
//	char* ptr = reinterpret_cast<char*>(&num);
//
//	for (int i = 0; i < sizeof(num); i++)
//		cout << static_cast<int>(*(ptr + i)) << endl;
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
//}