#include "pch.h"
#include "Board.h"
#include "Player.h"
#include <iostream>

Board board;
Player player;

int main()
{
	::srand(static_cast<uint32>(time(nullptr)));

	board.Init(25);

	while (true)
	{
		//input
		

		
		//logic
		 
		
		
		//rendering
		board.Render();
	}

}	
