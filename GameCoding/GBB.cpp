/* 

#include <iostream>
using namespace std;


int main()
{
	srand(time(0));

	while (true)
	{
		cout << "���� (0) ����(1) ��(2) ����ּ���!" << endl;
		cout << "> ";

		int value;
		cin >> value;

		int computerValue = rand() % 3;

		if (value == 0) //����
		{
			switch (computerValue)
			{
			case 0: //����
				cout << "����(�÷��̾�) vs ����(��ǻ��) : �����ϴ�!" << endl;
				break;

			case 1: // ����
				cout << "����(�÷��̾�) vs ����(��ǻ��) : �����ϴ�!" << endl;
				break;

			case 2: // ��
				cout << "����(�÷��̾�) vs ��(��ǻ��) : �̰���ϴ�!" << endl;
				break;
			
			default:
				break;
			}
		}
		else if (value == 1) // ����
		{
			switch (computerValue)
			{
			case 0: //����
				cout << "����(�÷��̾�) vs ����(��ǻ��) : �̰���ϴ�!" << endl;
				break;

			case 1: // ����
				cout << "����(�÷��̾�) vs ����(��ǻ��) : �����ϴ�!" << endl;
				break;

			case 2: // ��
				cout << "����(�÷��̾�) vs ��(��ǻ��) : �����ϴ�!" << endl;
				break;

			default:
				break;
			}
		}
		else //��
		{
			switch (computerValue)
			{
			case 0: //����
				cout << "��(�÷��̾�) vs ����(��ǻ��) : �����ϴ�!" << endl;
				break;

			case 1: // ����
				cout << "��(�÷��̾�) vs ����(��ǻ��) : �̰���ϴ�!" << endl;
				break;

			case 2: // ��
				cout << "��(�÷��̾�) vs ��(��ǻ��) : �����ϴ�!" << endl;
				break;

			default:
				break;
			}
		}
	}
}

*/
