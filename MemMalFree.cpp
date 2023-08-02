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
//	//char* str = (char*)malloc(sizeof(char) * len); // len만큼 char * 를 할당받아서 malloc으로 힙메모리에 동적할당 
//
//	char* str = new char[len]; // new 로 메모리를 할당 
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
//	// 포인터 구조체 참조자를 리턴값으로 갖는 함수
//	// 포인터참조 p1 과 p2 를 더한값을 리턴
//
//	Point* temp = new Point; // temp 구조체 동적할당 후 
//	temp->xpos = p1.xpos + p2.xpos;
//	temp->ypos = p1.ypos + p2.ypos; // 함수구현 
//
//	Point& temp2 = *temp; // temp2 참조자를 만들어서 temp반환값 자료형 맞춰주기 
//	return temp2; // 리턴후 
//
//	delete temp; // 동적할당한 temp 해제 
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
//	cout << "소유자 ID : " << car.GameId << endl;
//	cout << "연료량 : " << car.fuelGauge << endl;
//	cout << " 현재 속도 :" << car.curSpeed << endl;
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
//		cout << "현재 점의 위치는 " << xPos << " , " << yPos << " 입니다 " << endl;
//	}
//};
//
//
//
//int main()
//{
//	//char* str = MakeStrAdr(20); // 20 만큼길이를 할당하고 
//	////strcpy(str, " i am so Happy~test"); // MakeStrAdr 를 통해 동적할당한 char* 를 strcpy 함수를 통해서 내가만든 문자열로 복사 
//	//strcpy_s(str , 20, "i am so happy"); 
//	//// strcpy의 safe 버전으로 3개의 파라미터를 요구 기존 str 의 보안취약점을 보강한 버전으로 중간에 메모리 할당량을 적어서 메모리를
//	//// 제한시켜야한다 
//	//cout << str << endl; // 출력 
//	//free(str); // 동적할당한 문자열 해제 
//	// malloc free 의 단점 
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
//	Point* result = new Point; // 결과 값 넣을 구조체 선언 
//	result->xpos = 0;
//	result->ypos = 0; // 값초기화 
//	Point& resultref = *result; // 참조자 선언 
//
//	Point* A = new Point;
//	Point* B = new Point; // 동적할당 
//	A->xpos = 25;
//	A->ypos = 40;
//	B->xpos = 40; // 값 선언 
//	B->ypos = 20;
//	Point& refA = *A; // 참조자로 파라미터 형식 맞춰주기 
//	Point& refB = *B;
//
//
//	resultref = PntAdder(refA, refB); //함수 실행 
//
//
//
//	cout << " Point A.x + Point B.x = " << resultref.xpos << endl; // 결과값 출력 
//	cout << " Point A.y + Point B.y = " << resultref.ypos << endl;
//
//	delete result;
//	delete A; // 메모맇 해제
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