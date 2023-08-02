#pragma once
#include <iostream>
#include <cstring>

using namespace std;

class String
{
private:
	int len;
	char* str;
public:
	String(); // 디폴트 생성자 
	String(const char* s); // 문자열을 받기위한 생성자 
	String(const String& s); // 문자열 연산자의 반환값인 String객체 참조값을 받기위한 생성자
	~String(); // 소멸자

	String& operator= (const String& s); // = 
	bool operator== (const String& s); // == 
	String operator+= (const String& s); // += 오버로딩 
	String& operator+ (const String& s); // +

	friend ostream& operator<< (ostream& os, const String& s);// 출력을위한 전역함수의 객체 멤버접근을 위한   friend선언 
	friend istream& operator>> (istream& is, const String& s); // 입력을 위한 전역함수 오버로딩 객체 멤버 접근을위한 friend선언 

};