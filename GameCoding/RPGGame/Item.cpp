#include "Item.h"


/*********************************************/
/////////////////// Item /////////////////////
/*********************************************/

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

Item::~Item()
{

}

void Item::PrintInfo()
{
	switch (_rarity)
	{
	case IR_Normal:
		cout << "[��͵�] �Ϲ�" << endl;

	case IR_Rare:
		cout << "[��͵�] ����" << endl;

	case IR_Unique:
		cout << "[��͵�] ����ũ" << endl;
	}

}

/**********************************************/
/////////////////// Weapon /////////////////////
/**********************************************/

Weapon::Weapon()
{

}

Weapon::~Weapon()
{

}

void Weapon::PrintInfo()
{
	cout << "*******************" << endl;
	cout << "[������ Ÿ��] : ����" << endl;
	cout << "[���ݷ�] : "<< _damage << endl;
	Item::PrintInfo();
	cout << "*******************" << endl;

}

/*********************************************/
/////////////////// Armor /////////////////////
/*********************************************/

Armor::Armor()
{

}

Armor::~Armor()
{

}

void Armor::PrintInfo()
{
	cout << "*******************" << endl;
	cout << "[������ Ÿ��] : ��" << endl;
	cout << "[����] : " << _defence << endl;
	Item::PrintInfo();
	cout << "*******************" << endl;
}
