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
//	//Point operator+(const Point& ref) const // operator + ��� �̸��� �Լ� const �� ���̴°� ���� �����ִ��ɹٲٴ°� �ƴ϶� ���ο�� ���� �����ϴ°Ŵϱ� 
//	//{
//	//	Point pos(xpos + ref.xpos, ypos + ref.ypos);
//	//	return pos;
//	//}
//	friend Point operator+(const Point& pos1, const Point& pos2); // �̰� ����� �����Լ����� ������� ���ٰ��� 
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