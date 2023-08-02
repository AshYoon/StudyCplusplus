#include <iostream>
#include <cstring>


using namespace std;

class Person
{
private:

	char* name;
	int age;
public:
	Person(const char * myname, int myage)
	{
		int len = strlen(myname) + 1; // null 문자 까지 포함해야하니깐  + 1 
		name = new char[len]; // name배열을 동적으로 len만큼 할당 
		strcpy_s(name, len, myname);;    // 문자열 복사로 myname을 char * 변수인 name에 할당 
		age = myage;
	}
	void ShowPersonInfo() const
	{
		cout << " 이름 : " << name << endl;
		cout << " 나이 : " << age << endl;

	}
	~Person()
	{
		delete []name;
		cout << "Called Destructor" << endl;
	}

	Person& operator=(const Person& ref)
	{
		delete[]name; // 기존의 name삭제 즉 메모리 해제 연산  
		int len = strlen(ref.name) + 1;
		name = new char[len]; 
		strcpy_s(name, len, ref.name);
		age = ref.age;
		return *this;
	}


};
namespace COMP_POS
{
	enum { CLERK, SENIOR, ASSIST, MANAGER };

	void ShowPositionInfo(int pos)
	{
		switch (pos)
		{
		case CLERK:
			cout << "사원" << endl;
			break;
		case SENIOR:
			cout << "주임" << endl;
			break;
		case ASSIST:
			cout << "대리" << endl;
			break;
		case MANAGER:
			cout << "과장" << endl;
			break;
		}

	}
}

class NameCard
{
private:
	char* firstname;
	char* language;
	char * phonenumber;
	int position;
public:
	NameCard(const char * name, const char* lang, const char* pnumb, int pos) // 3 개 의 char * 변수를 모두 const 키워드를 사용해야 에러가 해결됨
		:position(pos)
	{
		
		this->firstname = new char[strlen(name) + 1];
		
		this->language = new char[strlen(lang) + 1];

		this->phonenumber = new char[strlen(pnumb) + 1];

		strcpy_s(this->firstname, strlen(name) + 1, name);
		strcpy_s(this->language, strlen(lang) + 1, lang);
		strcpy_s(this->phonenumber, strlen(pnumb) + 1, pnumb);
	}

	void ShowNameCardInfo() const
	{
		cout <<"이름 : " <<firstname << endl;
		cout << "회사 " << language << endl;;
		cout << "전화번호 :  " << phonenumber << endl;
		cout << "직급 : "; 
		COMP_POS::ShowPositionInfo(position);
		
	}
	NameCard(const NameCard& copy) : position(copy.position)
	{
		firstname = new char[strlen(copy.firstname) + 1];
		strcpy_s(firstname, strlen(copy.firstname) + 1, copy.firstname);

		language = new char[strlen(copy.language) + 1];
		strcpy_s(language, strlen(copy.language) + 1, copy.language);

		phonenumber = new char[strlen(copy.phonenumber) + 1];
		strcpy_s(phonenumber, strlen(copy.phonenumber) + 1, copy.phonenumber);


	}

	~NameCard()
	{
		delete[]firstname;
		delete[]language;
		delete[]phonenumber;
	}
};





//int main()
//{
//	Person man1("Kim Mim Jae", 26);
//	//Person man2 = man1; // 얕은복사 발생
//	Person man2("Yoon Jea kim", 30);
//
//	man2 = man1; // 디폴트 대입 연산자 
//
//	man1.ShowPersonInfo();
//	man2.ShowPersonInfo();
//		
//
//
//
//
//	return 0; // 소멸자 한번만 호출
//
//
//	
//
//
//
//
//	//NameCard manClerk("Lee", "ORangeEng", "010-3333-4444", COMP_POS::CLERK); // const 키워드를 첫번째 매개변수에 입력해도 에러가 해결되지않음
//	//NameCard copy1 = manClerk;
//	//NameCard ManSENIOR("Hong", "ORangeEng", "010-3333-4444", COMP_POS::SENIOR); // 3개의인자에 모두 const 키워드를 사용해줘야 에러가 사라짐 
//	//NameCard copy2 = ManSENIOR;
//	//copy1.ShowNameCardInfo();
//	//copy2.ShowNameCardInfo();
//
//}