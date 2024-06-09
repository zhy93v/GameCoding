#include <iostream>
using namespace std;


void EnterLobby();
void EnterField();
void CreateRandomMonster();
void SelectPlayer();
void EnterBattle();
void WaitForNextKey();


enum PlayerType
{
	PT_None = 0,
	PT_Knight = 1,
	PT_Archer = 2,
	PT_Mage = 3,
};

enum MonterType
{
	MT_None = 0,
	MT_Slime = 1,
	MT_Orc = 2,
	MT_Skeleton = 3,
};

struct StatInfo
{
	int hp;
	int attack;
	int defence;
};

PlayerType playerType;
StatInfo playerStat;

MonterType monsterType;
StatInfo MonsterStat;


int main()
{
	srand((unsigned int)time(0));

	EnterLobby();

}

void EnterLobby()
{
	while (true)
	{
		cout << "=================" << endl;
		cout << "�κ� ���������ϴ� !" << endl;
		cout << "=================" << endl;
		
		SelectPlayer();


		cout << "=================" << endl;
		cout << "(1) �ʵ� ���� // (2) ���� ����" << endl;
		cout << "=================" << endl;

		int input;
		cin >> input;

		if (input == 1)
		{
			EnterField();
		}
		else
		{
			return;
		}

	}
}

void SelectPlayer()
{
	while (true) // ���� ���ϰų� �߸� ������ �� ��� ����
	{
		cout << "==============================" << endl;
		cout << "������ �������ּ���" << endl;
		cout << "(1) ��� // (2) �ü� // (3) ����" << endl;
		cout << "> " << endl;

		int choice;
		cin >> choice;

		if (choice == PT_Knight) // ����
		{
			cout << "��� ���� ��...." << endl;
			playerStat.hp = 150;
			playerStat.attack = 10;
			playerStat.defence = 5;
			playerType = PT_Knight;

			break;
		}
		else if (choice == PT_Archer) // �ü�
		{
			cout << "�ü� ���� ��...." << endl;
			playerStat.hp = 100;
			playerStat.attack = 15;
			playerStat.defence = 3;
			playerType = PT_Archer;

			break;
		}
		else if (choice == PT_Mage) // ����
		{
			cout << "���� ���� ��...." << endl;
			playerStat.hp = 80;
			playerStat.attack = 25;
			playerStat.defence = 0;
			playerType = PT_Mage;

			break;
		}
	}
}


void EnterField()
{
	while (true)
	{
		cout << "==============================" << endl;
		cout << "�ʵ忡 �����߽��ϴ� !" << endl;
		cout << "[Player] HP : " << playerStat.hp << "/ ATT : " << playerStat.attack << " / DEF : " << playerStat.defence << endl;

		CreateRandomMonster();

		cout << "==============================" << endl;
		cout << "(1) ���� // (2) ���� " << endl;
		cout << "> " << endl;

		int input;
		cin >> input;

		if (input == 1)
		{
			EnterBattle();

			if(playerStat.hp==0)
			return;
		}
		else
		{

		}
	}




}

void CreateRandomMonster()
{
	int randomChoice = 1 + (rand() % 3);

	switch (randomChoice)
	{
	case MT_Slime:
		cout << "������ ���� ��...! (HP:30 / ATT:2 /DEF:0)" << endl;
		MonsterStat.hp = 30;
		MonsterStat.attack = 2;
		MonsterStat.defence = 0;
		monsterType = MT_Slime;
		break;

	case MT_Orc:
		cout << "��ũ ���� ��...! (HP:40 / ATT:10 /DEF:3)" << endl;
		MonsterStat.hp = 40;
		MonsterStat.attack = 10;
		MonsterStat.defence = 3;
		monsterType = MT_Orc;
		break;

	case MT_Skeleton:
		cout << "���̷��� ���� ��...! (HP:80 / ATT:15 /DEF:5)" << endl;
		MonsterStat.hp = 80;
		MonsterStat.attack = 15;
		MonsterStat.defence = 5;
		monsterType = MT_Skeleton;
		break;

	}

}


void EnterBattle()
{
	while (true)
	{
		int Playerdamage = playerStat.attack - MonsterStat.defence;

		if (Playerdamage < 0)
			Playerdamage = 0;

		MonsterStat.hp -= Playerdamage;
		if (MonsterStat.hp < 0)
			MonsterStat.hp = 0;

		cout << "���� ���� ü�� : " << MonsterStat.hp << endl;

		if (MonsterStat.hp == 0)
		{
			cout << "���� óġ!" << endl;
			WaitForNextKey();
			return;
		}

		// �ݰ�

		int Monsterdamage = MonsterStat.attack - playerStat.defence;
		if (Monsterdamage < 0)
			Monsterdamage = 0;

		playerStat.hp -= Monsterdamage;
		if (playerStat.hp < 0)
			playerStat.hp = 0;

		cout << "�÷��̾� ���� ü�� : " << playerStat.hp << endl;
		
		if (playerStat.hp == 0)
		{
			cout << "����Ͽ����ϴ�." << endl;
			WaitForNextKey();
			return;
		}

	}
}

void WaitForNextKey()
{
	cout << "��� �Ϸ��� 1 Ű�� �����ּ���" << endl;
	cout << "> " << endl;

	int input;
	cin >> input;

	system("cls");
}
