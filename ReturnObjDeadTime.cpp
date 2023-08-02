#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n)
	{
		cout << "New object" << this << endl;
	}
	SoSimple(const SoSimple& copy) : num(copy.num)
	{
		cout << "New Copy" << this << endl;
	}
	~SoSimple()
	{
		cout << "Destroy obj" << this << endl;
	}

};

SoSimple SimpleFuncObj(SoSimple ob)
{
	cout << " Param ADR " << &ob << endl;
	return ob;

}

//int main()
//{
//	SoSimple obj(7);  // obj 생성후 num변수에 7 대입  , 생성 
//
//	SimpleFuncObj(obj); // 함수 매개변수 ob 에 obj 를 복사생성 , 다시 ob를 리턴하고 다음행으로 넘어가게되서 ob destory 
//	// 함수 매게변수 copy , 함수 param ADR , return ob Copy , 매게변수 ob 삭제 , return된 ob 삭제 
//
//
//	cout << endl;
//
//	SoSimple tempRef = SimpleFuncObj(obj); // 일단 obj 복사생성 후 obj 리턴값을 ref가 복사생성 후 임시객체 사라짐 
//	// 함수 매게변수 copy , ParamADR , return Copy , 매게변수 ob 삭제  , tempRef Copy 생성 , return된 임시객체 삭제 
//
//	cout << " return Obj" << &tempRef << endl; 
//	//     임시객체는 삭제되지않는다 tempRef가 임시객체의 이름을 그냥 할당해버린다 즉 copy가 아니고 임시객체 삭제도안되고 
//	//     그냥 임시객체를 tempRef가 똑똑하게 그냥 할당시켜버린것 
//	//     임시객체를 객체에 할당시켜버리면 그냥 객체생성이나 다름없게되네  ? 
//
//
//
//
//	return 0; // obj 삭제 
//}