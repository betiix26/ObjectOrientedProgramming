#include "game.h"
using namespace std;
Game::Game(void)
{
	player1 = nullptr;
	player2 = nullptr;
}

void Game::save(void) const
{
	ofstream g("info.txt");
	player1->save(g);
	player2->save(g);
}

void Game::load(ifstream& f)
{
	player1->load(f);
	player2->load(f);
	menu(true);
}

void Game::menuPlayer(unique_ptr<Player>& _player)
{
	bool ok = false;
	while (true)
	{
		char option;
		system("cls");
		cout << "1/ Place the ships.\n";
	    cout << "2/ Replace ship.\n";
		cout << "3/ Rotate the ships.\n";
		cout << "4/ Play.\n";
		cin >> option;
		switch (option)
		{
		case '1':
		{
			if (!ok)
			{
				_player->placeShips();
				ok = true;
			}
			else
			{
				cout << "The ships are already placed.\n";
			}
			break;
		}
		case '2':
		{
			int index;
			cout << "The index of the ship to be replaced: "; cin >> index;
			while (index < 1 || index > 6)
			{
				cout << "Incorrect index. Please retry. \n New index: "; cin >> index;
			}
			_player->replaceShip(--index);
			break;
		}
		case '3':
		{
			int index;
			cout << "The index of the ship to be rotated: "; cin >> index;
			while (index < 1 || index > 6)
			{
				cout << "Incorrect index. Please retry. \n New index: "; cin >> index;
			}
			if (!_player->rotateShip(--index))
			{
				cout << "The ship cannot rotate.\n";
				system("pause");
			}
			break;
		}
		case '4':
		{
			if (ok)
			{
				return;
			}
			else
			{
				cout << "You must enter the ships to start the game.\n";
				system("pause");
				break;
			}
		}
		default:
		{
			cout << "Incorrect option.\n";
			system("pause");
			break;
		}
		}
	}
}

bool Game::player1Attack(void)
{
	return this->player1->attack(*player2);
}

bool Game::player2Attack(void)
{
	return this->player2->attack(*player1);
}

InteractiveGame::InteractiveGame(void)
{
	system("cls");
	cout << "Welcome to interactive game !\n\n";
	string name;
	int size;
	cout << "Number of row/column items: "; cin >> size;
	cout << "Name of player 1: "; cin >> name;
	player1 = make_unique<Player>(size, name);
	cout << "Name of player 2: "; cin >> name;
	player2 = make_unique<Player>(size, name);
}

InteractiveGame::InteractiveGame(bool temp)
{
	player1 = make_unique<Player>(10, "");
	player2 = make_unique<Player>(10, "");
}

void InteractiveGame::save(void) const
{
	ofstream g("info.txt");
	g << "i\n";
	player1->save(g);
	player2->save(g);
}

void InteractiveGame::menu(bool ok)
{
	system("cls");
	if (!ok)
	{
		cout << player1->getName() << " will place the ships.\n";
		system("pause");
		menuPlayer(player1);
		system("cls");
		cout << player2->getName() << " will place the ships.\n";
		system("pause");
		menuPlayer(player2);
		system("cls");
	}

	bool p1_out = false, p2_out = false;
	if (ok)
	{
		p1_out = player2->isFinish();
		p2_out = player1->isFinish();
	}
	while (!p1_out && !p2_out)
	{
		if (!p1_out)
		{
			p1_out = player2Attack();
		}
		if (!p2_out)
		{
			p2_out = player1Attack();
		}
		char option;
		cout << "Choose the desired option:\n";
		cout << "1/ Save and quit.\n";
		cout << "2/ Quit.\n";
		cout << "Another key/ Continue.\n";
		cin >> option;
		switch (option)
		{
		case '1':
		{
			save();
			return;
		}
		case '2':
		{
			return;
		}
		default:
			break;
		}
		system("cls");
	}
	system("cls");
	cout << player1->getName() << " has the score " << player1->getScore() << endl;
	cout << player2->getName() << " has the score " << player2->getScore() << endl << endl;
	if (player1->getScore() > player2->getScore())
	{
		cout << player1->getName() << " won.\n";
	}
	else if (player1->getScore() < player2->getScore())
	{
		cout << player2->getName() << " won.\n";
	}
	else
	{
		cout << "Draw\n";
	}
}

SequentialGame::SequentialGame(void)
{
	system("cls");
	cout << "Welcome to sequential game !\n\n";
	string name;
	int size;
	cout << "Number of row/column items: "; cin >> size;
	cout << "Name of player 1: "; cin >> name;
	player1 = make_unique<Player>(size, name);
	cout << "Name of player 2: "; cin >> name;
	player2 = make_unique<Player>(size, name);
}

SequentialGame::SequentialGame(bool temp)
{
	player1 = make_unique<Player>(10, "");
	player2 = make_unique<Player>(10, "");
}

void SequentialGame::save(void) const
{
	ofstream g("info.txt");
	g << "s\n";
	player1->save(g);
	player2->save(g);
}

void SequentialGame::menu(bool ok)
{
	system("cls");
	if (!ok)
	{
		cout << player1->getName() << " will place the ships.\n";
		system("pause");
		menuPlayer(player1);
	}
	bool out = false;
	bool temp = false;
	if (ok)
	{
		out = player2->isFinish();
		temp = out;
	}
	while (!out)
	{
		out = player2Attack();
		char option;
		cout << "Choose the desired option:\n";
		cout << "1/ Save and quit.\n";
		cout << "2/ Quit.\n";
		cout << "Another key/ Continue.\n";
		cin >> option;
		switch (option)
		{
		case '1':
		{
			save();
			return;
		}
		case '2':
		{
			return;
		}
		default:
			break;
		}
		system("cls");
	}
	if (!temp)
	{
		cout << player1->getName() << " has all the ships sunk.\n";
		system("pause");
		system("cls");
		cout << player2->getName() << " will place the ships.\n";
		system("pause");
		menuPlayer(player2);
	}
	out = false;
	while (!out)
	{
		out = player1Attack();
		char option;
		cout << "Choose the desired option:\n";
		cout << "1/ Save and quit.\n";
		cout << "2/ Quit.\n";
		cout << "Another key/ Continue.\n";
		cin >> option;
		switch (option)
		{
		case '1':
		{
			save();
			return;
		}
		case '2':
		{
			return;
		}
		default:
			break;
		}
		system("cls");
	}
	cout << player2->getName() << " has all the ships sunk.\n";
	system("pause");
	system("cls");
	cout << player1->getName() << " has the score " << player1->getScore() << endl;
	cout << player2->getName() << " has the score " << player2->getScore() << endl << endl;
	if (player1->getScore() > player2->getScore())
	{
		cout << player1->getName() << " won.\n";
	}
	else if (player1->getScore() < player2->getScore())
	{
		cout << player2->getName() << " won.\n";
	}
	else
	{
		cout << "Draw\n";
	}
}
