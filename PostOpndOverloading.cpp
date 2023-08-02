#include "Global.h"

class Point
{
private:
	int xpos, ypos;



public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y)
	{
		// empty
	}

	void ShowPoint() const
	{
		cout <<  xpos << " , " << ypos  << endl;
	}

	Point& operator++() // 전위증가
	{
		xpos += 1;
		ypos += 1;
		return *this;
	}






	const Point operator++(int) // 후위증가 
	{
		const Point retobj(xpos, ypos); // const Point retobj(*this);
		xpos += 1;
		ypos += 1;
		return retobj;
	}



	Point operator*(int times)
	{
		Point pos(xpos * times, ypos * times);
		return pos;
	}





	friend Point& operator--(Point& ref);
	friend const Point operator--(Point& ref, int); 
	friend Point operator*(int times, Point& ref);
};

Point& operator--(Point& ref) // 전위감소 
{
	ref.xpos -= 1;
	ref.ypos -= 1;
	return ref;

}

const Point operator--(Point& ref, int) // 후위감소 
{
	const Point retobj(ref); // const 객체 
	ref.xpos -= 1;
	ref.ypos -= 1; // const인데 객체 데이터변경 어덯게하는거지 ? 
	return retobj;
}

Point operator*(int times, Point& ref)
{
	return ref * times;
}

//int main()
//{
//	Point pos(1, 2);
//	Point cpy;
//	pos.ShowPoint();
//	cpy.ShowPoint();
//
//	cpy = pos * 3;
//	cpy.ShowPoint();
//
//	cpy = pos * 3 * 2;
//	cpy.ShowPoint();
//
//
//
//
//
//	//cpy = pos--; // 후위연산 --대입을 하고 -- 를진행 
//
//	//cpy.ShowPoint();
//	//pos.ShowPoint();
//
//	//cpy = pos++; //후위연산 
//	//cpy.ShowPoint();
//	//pos.ShowPoint();
//	return 0;
//}
