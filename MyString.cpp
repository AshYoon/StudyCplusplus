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
	// 반환값이 String 참조값일때 받아와서string을 생성해야한다 

	len = s.len;
	str = new char[len];
	strcpy_s(str, len, s.str);
	// s는 이미 생성된 string 객체니깐 str 접근이 가능하다 


}

String::~String()
{

	if (str != NULL)
		delete[]str;


}

String& String::operator=(const String& s)
{
	// TODO: 여기에 return 문을 삽입합니다.
	if (str != NULL)
	{
		delete[]str;
	}
	len = s.len;
	str = new char[len];
	strcpy_s(str, len, s.str);

	return *this; // 객체 반환 



}


bool String::operator==(const String& s)
{




	return strcmp(str, s.str) ? false : true; // 삼항연산자 
	//strcmp 문자열을 아스키코드로 받아와서 같다면 true ,다르다면 false 반환
	// 

}

String String::operator+=(const String& s)
{

	len += s.len - 1; // len += len 은 공백문자가 2개니깐 -1을 해줘야한다 
	char* tempstr = new char[len]; // 배열을 재할당하고 
	strcpy_s(tempstr, len, str); // 문자열을 복사해준다 
	strcat_s(str, len, s.str); // 두문자열 합치기 

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

	delete []tempstr; // 임시객체 삭제 


	return temp;

///////////// char gpt 답변 /////////////////

	//if (str != NULL)
	//	delete[] str; // 기존 str 삭제 메모리 누수 방지 

	//len = strlen(tempstr) + 1; // 임시객체 배열길이 받아서 len 설정 
	//str = new char[len];  // 새롭게 동적할당  
	//strcpy_s(str, len, tempstr); // 문자열 복사 

	//delete[] tempstr; // 임시객체 삭제 

	//return *this;


	//////////////////////////






}

