#include <iostream>
using namespace std;
#include "Helper.h"
#include "Map.h"
#include "Player.h"
#include <Windows.h>




int main()
{
	SetCursorOnOff(false);

	//MovePlayer(3, 2);

	while (true)
	{
		HandleKeyInput();

		HandleMove();

		PrintMap1D();
	}
}