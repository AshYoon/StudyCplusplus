//#include <iostream>
//#include <string.h>
//#include <stdlib.h>
//
//#define _CRT_SECURE_NO_WARNINGS
//
//using namespace std;
//
//char* MakeStrAdr(int len)
//{
//	//char* str = (char*)malloc(sizeof(char) * len); // len��ŭ char * �� �Ҵ�޾Ƽ� malloc���� ���޸𸮿� �����Ҵ� 
//
//	char* str = new char[len]; // new �� �޸𸮸� �Ҵ� 
//
//	return str;
//}
//
//
//typedef struct _Point
//{
//	int xpos;
//	int ypos;
//
//}Point;
//
//Point& PntAdder(const Point& p1, const Point& p2)
//{
//	// ������ ����ü �����ڸ� ���ϰ����� ���� �Լ�
//	// ���������� p1 �� p2 �� ���Ѱ��� ����
//
//	Point* temp = new Point; // temp ����ü �����Ҵ� �� 
//	temp->xpos = p1.xpos + p2.xpos;
//	temp->ypos = p1.ypos + p2.ypos; // �Լ����� 
//
//	Point& temp2 = *temp; // temp2 �����ڸ� ���� temp��ȯ�� �ڷ��� �����ֱ� 
//	return temp2; // ������ 
//
//	delete temp; // �����Ҵ��� temp ���� 
//
//
//	
//};
//
//struct Car
//{
//	char GameId[20];
//	int fuelGauge;
//	int curSpeed;
//
//};
//
//void ShowCarState(const Car& car)
//{
//	cout << "������ ID : " << car.GameId << endl;
//	cout << "���ᷮ : " << car.fuelGauge << endl;
//	cout << " ���� �ӵ� :" << car.curSpeed << endl;
//}
//
//struct MyPoint
//{
//	int xPos;
//	int yPos;
//	void MovePos(int x, int y)
//	{
//		xPos += x;
//		yPos += y;
//	}
//
//	void AddPoint(const MyPoint& pos)
//	{
//		xPos += pos.xPos;
//		yPos += pos.yPos;
//	}
//
//	void ShowPosition()
//	{
//		cout << "���� ���� ��ġ�� " << xPos << " , " << yPos << " �Դϴ� " << endl;
//	}
//};
//
//
//
//int main()
//{
//	//char* str = MakeStrAdr(20); // 20 ��ŭ���̸� �Ҵ��ϰ� 
//	////strcpy(str, " i am so Happy~test"); // MakeStrAdr �� ���� �����Ҵ��� char* �� strcpy �Լ��� ���ؼ� �������� ���ڿ��� ���� 
//	//strcpy_s(str , 20, "i am so happy"); 
//	//// strcpy�� safe �������� 3���� �Ķ���͸� �䱸 ���� str �� ����������� ������ �������� �߰��� �޸� �Ҵ緮�� ��� �޸𸮸�
//	//// ���ѽ��Ѿ��Ѵ� 
//	//cout << str << endl; // ��� 
//	//free(str); // �����Ҵ��� ���ڿ� ���� 
//	// malloc free �� ���� 
//
//
//	char* str = MakeStrAdr(20);
//	strcpy_s(str, 20, " i am so happy");
//	cout << str << endl;
//	delete[]str;
//	/// <summary>
//	/// ///////////////////////////////////////////////////////////////////////////////////////////////
//	/// </summary>
//	/// <returns></returns>
//
//
//
//
//	Point* result = new Point; // ��� �� ���� ����ü ���� 
//	result->xpos = 0;
//	result->ypos = 0; // ���ʱ�ȭ 
//	Point& resultref = *result; // ������ ���� 
//
//	Point* A = new Point;
//	Point* B = new Point; // �����Ҵ� 
//	A->xpos = 25;
//	A->ypos = 40;
//	B->xpos = 40; // �� ���� 
//	B->ypos = 20;
//	Point& refA = *A; // �����ڷ� �Ķ���� ���� �����ֱ� 
//	Point& refB = *B;
//
//
//	resultref = PntAdder(refA, refB); //�Լ� ���� 
//
//
//
//	cout << " Point A.x + Point B.x = " << resultref.xpos << endl; // ����� ��� 
//	cout << " Point A.y + Point B.y = " << resultref.ypos << endl;
//
//	delete result;
//	delete A; // �޸� ����
//	delete B;
//
//
//
//
//	MyPoint mpos1 = { 12 , 4 };
//	MyPoint mpos2 = { 20 , 30 };
//
//	mpos1.MovePos(-7, 10);
//	mpos1.ShowPosition();
//
//	mpos1.AddPoint(mpos2);
//	mpos1.ShowPosition();
//
//
//
//	return 0;
//}