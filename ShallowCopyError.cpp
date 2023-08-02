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
		int len = strlen(myname) + 1; // null ���� ���� �����ؾ��ϴϱ�  + 1 
		name = new char[len]; // name�迭�� �������� len��ŭ �Ҵ� 
		strcpy_s(name, len, myname);;    // ���ڿ� ����� myname�� char * ������ name�� �Ҵ� 
		age = myage;
	}
	void ShowPersonInfo() const
	{
		cout << " �̸� : " << name << endl;
		cout << " ���� : " << age << endl;

	}
	~Person()
	{
		delete []name;
		cout << "Called Destructor" << endl;
	}

	Person& operator=(const Person& ref)
	{
		delete[]name; // ������ name���� �� �޸� ���� ����  
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
			cout << "���" << endl;
			break;
		case SENIOR:
			cout << "����" << endl;
			break;
		case ASSIST:
			cout << "�븮" << endl;
			break;
		case MANAGER:
			cout << "����" << endl;
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
	NameCard(const char * name, const char* lang, const char* pnumb, int pos) // 3 �� �� char * ������ ��� const Ű���带 ����ؾ� ������ �ذ��
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
		cout <<"�̸� : " <<firstname << endl;
		cout << "ȸ�� " << language << endl;;
		cout << "��ȭ��ȣ :  " << phonenumber << endl;
		cout << "���� : "; 
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
//	//Person man2 = man1; // �������� �߻�
//	Person man2("Yoon Jea kim", 30);
//
//	man2 = man1; // ����Ʈ ���� ������ 
//
//	man1.ShowPersonInfo();
//	man2.ShowPersonInfo();
//		
//
//
//
//
//	return 0; // �Ҹ��� �ѹ��� ȣ��
//
//
//	
//
//
//
//
//	//NameCard manClerk("Lee", "ORangeEng", "010-3333-4444", COMP_POS::CLERK); // const Ű���带 ù��° �Ű������� �Է��ص� ������ �ذ��������
//	//NameCard copy1 = manClerk;
//	//NameCard ManSENIOR("Hong", "ORangeEng", "010-3333-4444", COMP_POS::SENIOR); // 3�������ڿ� ��� const Ű���带 �������� ������ ����� 
//	//NameCard copy2 = ManSENIOR;
//	//copy1.ShowNameCardInfo();
//	//copy2.ShowNameCardInfo();
//
//}