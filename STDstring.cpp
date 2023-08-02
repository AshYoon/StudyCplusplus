#include "Mystring.h"



ostream& operator<<(ostream& os, const String& s)
{

	os << s.str;
	return os;
}

istream& operator>>(istream& is, String& s)
{
	char str[100];
	is >> str;
	s = String(str);
	return is;
}

//int main()
//{
//	//string str1 = " I like ";
//	//string str2 = " string class ";
//	//string str3 = str1 + str2;
//
//	//cout << str1 << endl;
//	//cout << str2 << endl;
//	//cout << str3 << endl;
//
//	//str1 += str2;
//	//if (str1 == str3)
//	//{
//	//	cout << " 동일 문자열 " << endl;
//	//}
//	//else
//	//{
//	//	cout << " 동일하지 않은 문 자열 " << endl;
//	//}
//
//	//string str4;
//	//cout << " 문자열 입력 : ";
//	//cin >> str4;
//	//cout << " 입력한 문자얼 " << str4 << endl;
//
//	////null 값을받아내지 못함 
//
//
//	String str1 = "I like ";
//	String str2 = "mystring class";
//
//
//	cout << str1 << endl;
//	cout << str2 << endl;	
//	String str3 = str1 + str2;
//	cout << str3 << endl;
//
//	str1 += str2;
//	if (str1 == str3)
//	{
//		cout << " str1 and str2 is same string " << endl;
//	}
//	else
//		cout << " str1 and str2 is not equal " << endl;
//
//	String str4;
//	cout << " input string ";
//	cin >> str4;
//	cout << " input string is : " << str4 << endl;
//
//
//	return 0;
//}