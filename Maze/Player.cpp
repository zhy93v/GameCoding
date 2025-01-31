#include "pch.h"
#include "Player.h"
#include "Board.h"

void Player::Init(Board* board)
{
	_pos = board->GetEnterPos();
	_board = board;

	CalculatePath();
}

void Player::Update(uint64 deltaTick)
{
	if (_pathIndex >= _path.size())
		return;
	
	_sumTick += deltaTick;
	if (_sumTick >= 100)
	{
		_sumTick = 0;

		_pos = _path[_pathIndex];
		_pathIndex++;
	}
}

bool Player::CanGo(Pos pos)
{
	TileType tileType = _board->GetTileType(pos);
	return tileType == TileType::EMPTY;
}

void Player::CalculatePath()
{
	Pos pos = _pos;

	_path.clear();
	_path.push_back(pos);

	// 목적지
	Pos dest = _board->GetExitPos();

	Pos front[4] =
	{
		Pos(-1, 0), // UP
		Pos(0, -1), // LEFT
		Pos(1, 0), // DOWN
		Pos(0, 1), // RIGHT
	};

	// 바로 앞의 좌표?
	//Pos nextPos = pos + front[_dir];
	//_dir = (_dir + 1) % 4;
	//_dir = (_dir - 1) % 4;
	

	//while (pos != dest)
	{
		// 1. 현재 바라보는 방향을 기준으로, 오른쪽으로 갈 수 있는지 확인
		int32 newDir;
		//if (CanGo())
		{
			// 오른쪽 방향으로 90도 회전

			// 앞으로 한 보 전진

			// 기록
			_path.push_back(pos);
		}
		// 2. 현재 바라보는 방향을 기준으로 전진할 수 있는지 확인
		//else if (CanGo())
		{
			// 앞으로 한 보 전진

			// 기록
			_path.push_back(pos);
		}
		//else
		{
			// 3. 왼쪽 방향으로 90도 회전
		}
	}

}
