#include "Global.h"

template <class T>
T Add(T num1, T num2)
{
	return num1 + num2;
}

template <class T1, class T2>
void ShowData(double num)
{
	cout << (T1)num << " , " << (T2)num << endl;
}



template <class T>
T Max(T a, T b)
{
	return a > b ? a : b;
	// a가 b 보다 크다 true면 a 리턴 false 면 b 리턴 ?
}

template <class T>
T length(T a, T b)
{
	return strlen(a) > strlen(b) ? a : b;
}

////함수 템플릿의 특수화  /////


template <>
char* Max(char* a, char* b)
{
	cout << "char* Max<char*>(char* a, char* b)" << endl;
	return strlen(a) > strlen(b) ? a : b;
}

template <>
const char* Max(const char* a, const char* b)
{
	cout << " const char*Max<const char*>(const char* a, const char* b)" << endl;
	return strcmp(a, b) > 0 ? a : b;
}


template <class T>
class Point
{
private:
	T xpos, ypos;
public:
	Point(T x = 0, T y = 0) : xpos(x), ypos(y)
	{}
	void ShowPosition() const
	{
		cout << '[' << xpos << " , " << ypos << ']' << endl;
	}
};

template <typename T>
class SimpleTemplate
{
public:
	T SimpleFunc(const T& ref);
};

template <typename T>
T SimpleTemplate<T>::SimpleFunc(const T& ref)
{
	///
}


//int main()
//{
//	//cout << Add<int>(15, 20) << endl;
//	//cout << Add<double>(2.9, 3.7) << endl;
//	//cout << Add<int>(3.2, 3.2) << endl;
//	//cout << Add<double>(3.14, 2.75) << endl;
//	//ShowData<char, int >(65);
//	//ShowData<char, double>(68.9);
//
//
//	//cout << Max(11, 15) << endl;
//	//cout << Max('T', 'Q') << endl;
//	//cout << Max("Simple", "Best") << endl;
//
//
//	//char str1[] = " Simple ";
//	//char str2[] = " Best ";
//	//cout << Max(str1, str2) << endl;
//
//
//
//
//	Point<int> pos1(3, 4);
//	pos1.ShowPosition();
//	Point<double> pos2(3.4, 4.3);
//	pos2.ShowPosition();
//
//	Point<char> pos3('P', 'F'); // 좌표 정보를 문자로 표시하는 상황의 표현 
//	pos3.ShowPosition();
//
//
//
//	return 0;
//
//
//}