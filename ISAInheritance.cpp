#include "Global.h"

class Computer
{
private:
	char owner[50];
public:
	Computer(const char* name)
	{
		//strcpy(owner, name);
		strcpy_s(owner, strlen(name) + 1, name);
		//strlen(name) + 1;
		
	}
	void Calculate()
	{
		cout << " 요청내용을 계산합니다 " << endl;
	}

};


class NoteBookComp : public Computer
{
private:
	int Battery;
public:
	NoteBookComp(const char* name, int initChag)
		: Computer(name), Battery(initChag)
	{
		// empty ; 

	}

	void Charging() { Battery += 5; }
	void UseBattery() { Battery -= 1; }
	int GetBatteryInfo() { return Battery; }
	void MovingCal()
	{
		if (GetBatteryInfo() < 1)
		{
			cout << "충전이필요합니다 . " << endl;
			return;
		}
		cout << " 이동하면서 ";
		Calculate();
		UseBattery();
	}
};


class TabletNoteBook : public NoteBookComp
{
private:
	char regstPenModel[50];
public:
	TabletNoteBook(const char* name, int initChag, const char* pen)
		:NoteBookComp(name, initChag)
	{
		//strcpy(regstPenModel, pen);
		strcpy_s(regstPenModel, strlen(pen) + 1, pen);
	}
	void Write(const char* penInfo)
	{
		if (GetBatteryInfo() < 1)
		{
			cout << "충전이 필요합니다." << endl;
			return;
		}

		if (strcmp(regstPenModel, penInfo) != 0)
		{
			cout << " 등록된 펜이 아닙니다 .  " << endl;
			return;
		}
		cout << " 필기 내용을 처리합니다 . " << endl;
		UseBattery();
	}
};

//int main()
//{
//	NoteBookComp nc("이수종", 5);
//	TabletNoteBook tn("정수영", 5, "ISE-241-242");
//	nc.MovingCal();
//	tn.Write("ISE-241-242");
//	return 0;
//}