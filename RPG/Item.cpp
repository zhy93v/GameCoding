#include "Item.h"
#include <iostream>
using namespace std;


// ������
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

//�Ҹ���
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
		cout << "�Ϲ�" << endl;
		break;
	case IR_Rare:
		cout << "����" << endl;
		break;
	case IR_Unique:
		cout << "����ũ" << endl;
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

