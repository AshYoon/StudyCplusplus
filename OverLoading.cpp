//#include "Global.h"
//
//class Point
//{
//private:
//	int xpos, ypos;
//
//public:
//	Point(int x = 0, int y = 0) : xpos(x), ypos(y)
//	{ }
//	void ShowPosition() const
//	{
//		cout << '[' << xpos << " , " << ypos << ']' << endl;
//	}
//	//Point operator+(const Point& ref) const // operator + 라는 이름의 함수 const 를 붙이는게 좋다 원래있던걸바꾸는게 아니라 새로운걸 만들어서 리턴하는거니깐 
//	//{
//	//	Point pos(xpos + ref.xpos, ypos + ref.ypos);
//	//	return pos;
//	//}
//	friend Point operator+(const Point& pos1, const Point& pos2); // 이걸 해줘야 전역함수에서 멤버변수 접근가능 
//};
//
//Point operator+(const Point& pos1, const Point& pos2)
//{
//	Point pos(pos1.xpos + pos2.xpos, pos1.ypos + pos2.ypos);
//	return pos;
//}
//
////int main()
////{
////	Point pos1(3, 4);
////	Point pos2(10, 20);
////	//Point pos3 = pos1.operator+(pos2);
////	Point pos3 = pos1 + pos2;
////	pos1.ShowPosition();
////	pos2.ShowPosition();
////	pos3.ShowPosition();
////	return 0;
////}