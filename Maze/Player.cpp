#include "pch.h"
#include "Player.h"
#include "Board.h"

void Player::Init(Board* board)
{
	
	_pos = board->GetEnterPos();
	_board = board;

	CalculatePath();
}

void Player::CalculatePath()
{

}
