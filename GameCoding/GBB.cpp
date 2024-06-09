/* 

#include <iostream>
using namespace std;


int main()
{
	srand(time(0));

	while (true)
	{
		cout << "가위 (0) 바위(1) 보(2) 골라주세요!" << endl;
		cout << "> ";

		int value;
		cin >> value;

		int computerValue = rand() % 3;

		if (value == 0) //가위
		{
			switch (computerValue)
			{
			case 0: //가위
				cout << "가위(플레이어) vs 가위(컴퓨터) : 비겼습니다!" << endl;
				break;

			case 1: // 바위
				cout << "가위(플레이어) vs 바위(컴퓨터) : 졌습니다!" << endl;
				break;

			case 2: // 보
				cout << "가위(플레이어) vs 보(컴퓨터) : 이겼습니다!" << endl;
				break;
			
			default:
				break;
			}
		}
		else if (value == 1) // 바위
		{
			switch (computerValue)
			{
			case 0: //가위
				cout << "바위(플레이어) vs 가위(컴퓨터) : 이겼습니다!" << endl;
				break;

			case 1: // 바위
				cout << "바위(플레이어) vs 바위(컴퓨터) : 비겼습니다!" << endl;
				break;

			case 2: // 보
				cout << "바위(플레이어) vs 보(컴퓨터) : 졌습니다!" << endl;
				break;

			default:
				break;
			}
		}
		else //보
		{
			switch (computerValue)
			{
			case 0: //가위
				cout << "보(플레이어) vs 가위(컴퓨터) : 졌습니다!" << endl;
				break;

			case 1: // 바위
				cout << "보(플레이어) vs 바위(컴퓨터) : 이겼습니다!" << endl;
				break;

			case 2: // 보
				cout << "보(플레이어) vs 보(컴퓨터) : 비겼습니다!" << endl;
				break;

			default:
				break;
			}
		}
	}
}

*/
