#include "Global.h"

class Point
{

private:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y)
	{
		cout << " Point ��ü ���� " << endl;
	}
	~Point()
	{
		cout << " Point ��ü �Ҹ� " << endl;
	}

	void SetPos(int x, int y)
	{
		xpos = x;
		ypos = y;
	}

	friend ostream& operator<<(ostream& os, const Point& pos);// �����Լ��� ��������� ���� friend ���� 
};

ostream& operator<<(ostream& os, const Point& pos) // << ������ �����ε� ���� �Լ� 
{
	os << '[' << pos.xpos << "," << pos.ypos << ']' << endl;
	return os;
}

class Smartptr
{
private:
	Point* posptr;
public:
	Smartptr(Point* ptr) : posptr(ptr)
	{
		// empty
	}

	Point& operator*() const // ����Ʈ �������� �ٽ� 1 
	{
		return *posptr;
	}

	Point* operator->() const // ����Ʈ ������ �� �ٽ� 2 
	{
		return posptr;
	}
	~Smartptr()
	{
		delete posptr;
	}

};

//int main()
//{
//	Smartptr sptr1(new Point(1, 2));
//	Smartptr sptr2(new Point(2, 3));
//	Smartptr sptr3(new Point(4, 5));
//
//	cout << *sptr1;
//	cout << *sptr2;
//	cout << *sptr3;
//
//	sptr1->SetPos(10, 20);
//	sptr2->SetPos(30, 40);
//	sptr3->SetPos(50, 60);
//
//	cout << *sptr1;
//	cout << *sptr2;
//	cout << *sptr3;
//
//	return 0;
//
//}