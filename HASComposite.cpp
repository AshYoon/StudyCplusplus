#include "Global.h"

class Gun
{
private:
	int bullet;
public:
	Gun(int bnum) : bullet(bnum)
	{

		//empty
	}
	void Shot()
	{
		cout << "BBang" << endl;
		bullet--;
	}

};


class Police
{
private:
	int handcuff;
	Gun* pistol;
public:
	Police(int bnum, int bcuff)
		:handcuff(bcuff)
	{
		if (bnum > 0)
		{
			pistol = new Gun(bnum);

		}
		else
		{
			pistol = NULL;

		}
	}

	void Shot()
	{
		if (pistol == NULL)
		{
			cout << "pistol is NULL" << endl;
		}
		else
			pistol->Shot();
	}

	void PutHandCuff()
	{
		if (handcuff > 0)
		{
			cout << " SNAP ! " << endl;
			handcuff--;
		}
		else
		{
			cout << " HandCuff is NUll " << endl;
		}
	}

	~Police()
	{
		if (pistol != NULL)
			delete pistol;
	}








};

//int main()
//{
//	Police pman1(5, 3);
//	pman1.Shot();
//	pman1.PutHandCuff();
//
//	Police pman2(0, 3);
//	pman2.Shot();
//	pman2.PutHandCuff();
//	return 0;
//}