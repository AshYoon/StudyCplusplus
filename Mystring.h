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
	String(); // ����Ʈ ������ 
	String(const char* s); // ���ڿ��� �ޱ����� ������ 
	String(const String& s); // ���ڿ� �������� ��ȯ���� String��ü �������� �ޱ����� ������
	~String(); // �Ҹ���

	String& operator= (const String& s); // = 
	bool operator== (const String& s); // == 
	String operator+= (const String& s); // += �����ε� 
	String& operator+ (const String& s); // +

	friend ostream& operator<< (ostream& os, const String& s);// ��������� �����Լ��� ��ü ��������� ����   friend���� 
	friend istream& operator>> (istream& is, const String& s); // �Է��� ���� �����Լ� �����ε� ��ü ��� ���������� friend���� 

};