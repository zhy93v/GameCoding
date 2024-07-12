#include <iostream>
using namespace std;

// Static cast
// Dynamic cast
// const cast
// Reinterpret cast

class Player
{
public:
	virtual ~Player();
};

class Knight : public Player
{

};


int main()
{
	int hp = 100;
	int manHp = 200;
	float ratio = static_cast<float>(hp) / manHp;

	cout << ratio << endl;


	Knight* k = new Knight();
	Player* p = k;

	Knight* k2 = static_cast<Knight*>(p);

	// Dynamic cast : 상속 관계에서의 안전 변환
	// 다형성

	Knight* k2 = dynamic_cast<Knight*>(p);


}