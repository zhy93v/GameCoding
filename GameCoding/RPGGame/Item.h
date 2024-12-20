#pragma once
#include <iostream>
using namespace std;

enum ItemRarity
{
	IR_None,
	IR_Normal,
	IR_Rare,
	IR_Unique,
};


class Item
{

public:
	Item();
	virtual ~Item();

	virtual void PrintInfo();

protected:
	int _itemid = 0;
	int _itemCount = 0;
	ItemRarity _rarity = IR_Normal;

};

class Weapon : public Item
{
public:
	Weapon();
	virtual ~Weapon();

	void SetDamage(int damage) { _damage = damage; }
	int GetDamage() { return _damage; }
	virtual void PrintInfo() override;

protected:

private:
	int _damage = 0;


};

class Armor : public Item
{
public:
	Armor();
	virtual ~Armor();

	void SetDefence(int defence) { _defence = defence; }
	int GetDefence() { return _defence; }
	virtual void PrintInfo() override;

protected:

private:
	int _defence = 0;

};

