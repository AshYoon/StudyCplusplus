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
//	//	cout << " ���� ���ڿ� " << endl;
//	//}
//	//else
//	//{
//	//	cout << " �������� ���� �� �ڿ� " << endl;
//	//}
//
//	//string str4;
//	//cout << " ���ڿ� �Է� : ";
//	//cin >> str4;
//	//cout << " �Է��� ���ھ� " << str4 << endl;
//
//	////null �����޾Ƴ��� ���� 
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