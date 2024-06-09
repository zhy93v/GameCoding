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
		cout << "로비에 입장헀습니다 !" << endl;
		cout << "=================" << endl;
		
		SelectPlayer();


		cout << "=================" << endl;
		cout << "(1) 필드 입장 // (2) 게임 종료" << endl;
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
	while (true) // 선택 안하거나 잘못 눌렀을 때 계속 돌게
	{
		cout << "==============================" << endl;
		cout << "직업을 선택해주세요" << endl;
		cout << "(1) 기사 // (2) 궁수 // (3) 법사" << endl;
		cout << "> " << endl;

		int choice;
		cin >> choice;

		if (choice == PT_Knight) // 전사
		{
			cout << "기사 생성 중...." << endl;
			playerStat.hp = 150;
			playerStat.attack = 10;
			playerStat.defence = 5;
			playerType = PT_Knight;

			break;
		}
		else if (choice == PT_Archer) // 궁수
		{
			cout << "궁수 생성 중...." << endl;
			playerStat.hp = 100;
			playerStat.attack = 15;
			playerStat.defence = 3;
			playerType = PT_Archer;

			break;
		}
		else if (choice == PT_Mage) // 법사
		{
			cout << "법사 생성 중...." << endl;
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
		cout << "필드에 입장했습니다 !" << endl;
		cout << "[Player] HP : " << playerStat.hp << "/ ATT : " << playerStat.attack << " / DEF : " << playerStat.defence << endl;

		CreateRandomMonster();

		cout << "==============================" << endl;
		cout << "(1) 전투 // (2) 도주 " << endl;
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
		cout << "슬라임 생성 중...! (HP:30 / ATT:2 /DEF:0)" << endl;
		MonsterStat.hp = 30;
		MonsterStat.attack = 2;
		MonsterStat.defence = 0;
		monsterType = MT_Slime;
		break;

	case MT_Orc:
		cout << "오크 생성 중...! (HP:40 / ATT:10 /DEF:3)" << endl;
		MonsterStat.hp = 40;
		MonsterStat.attack = 10;
		MonsterStat.defence = 3;
		monsterType = MT_Orc;
		break;

	case MT_Skeleton:
		cout << "스켈레톤 생성 중...! (HP:80 / ATT:15 /DEF:5)" << endl;
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

		cout << "몬스터 남은 체력 : " << MonsterStat.hp << endl;

		if (MonsterStat.hp == 0)
		{
			cout << "몬스터 처치!" << endl;
			WaitForNextKey();
			return;
		}

		// 반격

		int Monsterdamage = MonsterStat.attack - playerStat.defence;
		if (Monsterdamage < 0)
			Monsterdamage = 0;

		playerStat.hp -= Monsterdamage;
		if (playerStat.hp < 0)
			playerStat.hp = 0;

		cout << "플레이어 남은 체력 : " << playerStat.hp << endl;
		
		if (playerStat.hp == 0)
		{
			cout << "사망하였습니다." << endl;
			WaitForNextKey();
			return;
		}

	}
}

void WaitForNextKey()
{
	cout << "계속 하려면 1 키를 눌러주세요" << endl;
	cout << "> " << endl;

	int input;
	cin >> input;

	system("cls");
}
