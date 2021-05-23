#include "battleship.h"
using namespace std;
shared_ptr<BattleShip> BattleShip::instance = nullptr;

shared_ptr<BattleShip> BattleShip::getGame(void)
{
	if (instance == nullptr)
	{
		BattleShip* p = new BattleShip;
		instance = make_shared<BattleShip>(*p);
		delete p;
	}
	return instance;
}

void BattleShip::help(void) const
{
	system("cls");
	cout << "Welcome to the help section !\n";
	cout << "Useful information:\n";
	cout << "a)new game          ->  generates a new game\n";
	cout << "b)interactive game  ->  in which players place their ships, and then they strike alternately\n";
	cout << "c)sequential game   ->  in which alternately, one player places his ships and the other tries to it sinks them.\n";
	cout << "d)save              ->  saves the current game configuration\n";
	cout << "e)load              ->  load the last saved configuration\n";
	cout << "f)simple rules:\n";
	cout << "    -each player places the 6 ships on the board\n";
	cout << "    -a ship is sunk when all the squares that make it up are hit\n";
	cout << "    -for each correct shot, the player receives 100 points\n";
	cout << "    -for each incorrect shot, the player loses 50 points\n";
	cout << "    -the game ends when all ships of both players are shot down\n";
	cout << "    -the player with the highest score wins\n";
	cout << "Have fun !\n";
	system("pause");
}

void BattleShip::menu(void)
{
	char option;
	unique_ptr<Game> newGame;
	system("cls");
	while (true)
	{
		cout << "1/ New game.\n";
		cout << "2/ Load an old game.\n";
		cout << "3/ Help.\n";
		cout << "4/ Turn off.\n";
		cout << "Enter the desired option: "; cin >> option;
		switch (option)
		{
		case '1':
		{
			system("cls");
			char op = 'a';
		    cout << "1/ Interactive game.\n";
			cout << "2/ Sequential game.\n";
			cout << "Enter the desired option: "; cin >> op;
			while (op != '1' && op != '2')
			{
				cout << "\nIncorrect. Please, retry.\n";
				cout << "Enter the desired option: "; cin >> op;
			}
			if (op == '1')
			{
				newGame = make_unique<InteractiveGame>();
			}
			else
			{
				newGame = make_unique<SequentialGame>();
			}
			newGame->menu();
			return;
			break;
		}
		case '2':
		{
			load();
			return;
		}
		case '3':
		{
			help();
			break;
		}
		case '4':
		{
			cout << "Have a nice day !\n";
			return;
		}
		default:
			break;
		}
		system("cls");
	}
}

void BattleShip::load(void)
{
	ifstream f("info.txt");
	unique_ptr<Game> oldGame;
	char op;
	f >> op;
	if (op == 's')
	{
		oldGame = make_unique<SequentialGame>(true);
	}
	else
	{
		oldGame = make_unique<InteractiveGame>(true);
	}
	oldGame->load(f);
	f.close();
}