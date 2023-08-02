#include "Mystring.h"

String::String()
{
	len = 0;
	str = NULL;
}

String::String(const char* s)
{



	len = strlen(s) + 1;
	str = new char[len];
	strcpy_s(str, len, s);
}

String::String(const String& s)
{
	// ��ȯ���� String �������϶� �޾ƿͼ�string�� �����ؾ��Ѵ� 

	len = s.len;
	str = new char[len];
	strcpy_s(str, len, s.str);
	// s�� �̹� ������ string ��ü�ϱ� str ������ �����ϴ� 


}

String::~String()
{

	if (str != NULL)
		delete[]str;


}

String& String::operator=(const String& s)
{
	// TODO: ���⿡ return ���� �����մϴ�.
	if (str != NULL)
	{
		delete[]str;
	}
	len = s.len;
	str = new char[len];
	strcpy_s(str, len, s.str);

	return *this; // ��ü ��ȯ 



}


bool String::operator==(const String& s)
{




	return strcmp(str, s.str) ? false : true; // ���׿����� 
	//strcmp ���ڿ��� �ƽ�Ű�ڵ�� �޾ƿͼ� ���ٸ� true ,�ٸ��ٸ� false ��ȯ
	// 

}

String String::operator+=(const String& s)
{

	len += s.len - 1; // len += len �� ���鹮�ڰ� 2���ϱ� -1�� ������Ѵ� 
	char* tempstr = new char[len]; // �迭�� ���Ҵ��ϰ� 
	strcpy_s(tempstr, len, str); // ���ڿ��� �������ش� 
	strcat_s(str, len, s.str); // �ι��ڿ� ��ġ�� 

	delete[]tempstr;

	return *this;
}



String& String::operator+(const String& s)
{
	char* tempstr = new char[len + s.len - 1];
	strcpy(tempstr, str);
	strcat(tempstr, s.str);

	//String temp(tempstr); // String temp=temstr;

	String temp = tempstr;

	delete []tempstr; // �ӽð�ü ���� 


	return temp;

///////////// char gpt �亯 /////////////////

	//if (str != NULL)
	//	delete[] str; // ���� str ���� �޸� ���� ���� 

	//len = strlen(tempstr) + 1; // �ӽð�ü �迭���� �޾Ƽ� len ���� 
	//str = new char[len];  // ���Ӱ� �����Ҵ�  
	//strcpy_s(str, len, tempstr); // ���ڿ� ���� 

	//delete[] tempstr; // �ӽð�ü ���� 

	//return *this;


	//////////////////////////






}

