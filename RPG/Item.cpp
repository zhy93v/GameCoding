#include "Item.h"
#include <iostream>
using namespace std;


// 생성자
Item::Item()
{
	int randValue = rand() % 100;

	if (randValue < 50)
	{
		_rarity = IR_Normal;
	}
	else if (randValue < 80)
	{
		_rarity = IR_Rare;
	}
	else
	{
		_rarity = IR_Unique;
	}
}

//소멸자
Item::~Item()
{
}

Weapon::Weapon()
{
}

Weapon::~Weapon()
{

}



Armor::Armor()
{
}

Armor::~Armor()
{
}

void Item::PrintInfo()
{
	switch (_rarity)
	{
	case IR_Normal:
		cout << "일반" << endl;
		break;
	case IR_Rare:
		cout << "레어" << endl;
		break;
	case IR_Unique:
		cout << "유니크" << endl;
		break;
	}
}

void Weapon::PrintInfo()
{
	Item::PrintInfo();
}

void Armor::PrintInfo()
{
	Item::PrintInfo();
}

