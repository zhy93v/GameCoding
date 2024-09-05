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

	// ������
	Pos dest = _board->GetExitPos();

	Pos front[4] =
	{
		Pos(-1, 0), // UP
		Pos(0, -1), // LEFT
		Pos(1, 0), // DOWN
		Pos(0, 1), // RIGHT
	};

	// �ٷ� ���� ��ǥ?
	//Pos nextPos = pos + front[_dir];
	//_dir = (_dir + 1) % 4;
	//_dir = (_dir - 1) % 4;
	

	//while (pos != dest)
	{
		// 1. ���� �ٶ󺸴� ������ ��������, ���������� �� �� �ִ��� Ȯ��
		int32 newDir;
		//if (CanGo())
		{
			// ������ �������� 90�� ȸ��

			// ������ �� �� ����

			// ���
			_path.push_back(pos);
		}
		// 2. ���� �ٶ󺸴� ������ �������� ������ �� �ִ��� Ȯ��
		//else if (CanGo())
		{
			// ������ �� �� ����

			// ���
			_path.push_back(pos);
		}
		//else
		{
			// 3. ���� �������� 90�� ȸ��
		}
	}

}
