#include "player.h"
using namespace std;
void Player::placeShips(void)
{
	pair<int, int> points[2];
	pair<char, int> _points[2];
	system("cls");
	player_board.display(toupper(_name[0]));
	list_of_ships.push_back(shared_ptr<Ship1>(new Ship1));
	cout << "Place first ship: ";
	cout << "Size: " << list_of_ships[0]->getSize() << endl;
	cout << "Start point: "; cin >> _points[0].first >> _points[0].second;
	cout << "End point: "; cin >> _points[1].first >> _points[1].second;
	points[0] = toBoardItem(_points[0]);
	points[1] = toBoardItem(_points[1]);
	while (!list_of_ships[0]->placeShip(points[0], points[1], this->player_board))
	{
		system("cls");
		player_board.display(toupper(_name[0]));
		cout << "Incorrect placement. Retry\n";
		cout << "Place first ship: ";
		cout << "Size: " << list_of_ships[0]->getSize() << endl;
		cout << "Start point: "; cin >> _points[0].first >> _points[0].second;
		cout << "End point: "; cin >> _points[1].first >> _points[1].second;
		points[0] = toBoardItem(_points[0]);
		points[1] = toBoardItem(_points[1]);
	}

	system("cls");
	player_board.display(toupper(_name[0]));
	list_of_ships.push_back(shared_ptr<Ship2>(new Ship2));
	cout << "Place scond ship: ";
	cout << "Size: " << list_of_ships[1]->getSize() << endl;
	cout << "Start point: "; cin >> _points[0].first >> _points[0].second;
	cout << "End point: "; cin >> _points[1].first >> _points[1].second;
	points[0] = toBoardItem(_points[0]);
	points[1] = toBoardItem(_points[1]);
	while (!list_of_ships[1]->placeShip(points[0], points[1], this->player_board))
	{
		system("cls");
		player_board.display(toupper(_name[0]));
		cout << "Incorrect placement. Retry\n";
		cout << "Place seond ship: ";
		cout << "Size: " << list_of_ships[1]->getSize() << endl;
		cout << "Start point: "; cin >> _points[0].first >> _points[0].second;
		cout << "End point: "; cin >> _points[1].first >> _points[1].second;
		points[0] = toBoardItem(_points[0]);
		points[1] = toBoardItem(_points[1]);
	}

	system("cls");
	player_board.display(toupper(_name[0]));
	list_of_ships.push_back(shared_ptr<Ship3>(new Ship3));
	cout << "Place third ship: ";
	cout << "Size: " << list_of_ships[2]->getSize() << std::endl;
	cout << "Start point: "; cin >> _points[0].first >> _points[0].second;
	cout << "End point: "; cin >> _points[1].first >> _points[1].second;
	points[0] = toBoardItem(_points[0]);
	points[1] = toBoardItem(_points[1]);
	while (!list_of_ships[2]->placeShip(points[0], points[1], this->player_board))
	{
		system("cls");
		player_board.display(toupper(_name[0]));
		cout << "Incorrect placement. Retry\n";
		cout << "Place third ship: ";
		cout << "Size: " << list_of_ships[2]->getSize() << endl;
		cout << "Start point: "; cin >> _points[0].first >> _points[0].second;
		cout << "End point: "; cin >> _points[1].first >> _points[1].second;
		points[0] = toBoardItem(_points[0]);
		points[1] = toBoardItem(_points[1]);
	}

	system("cls");
	player_board.display(toupper(_name[0]));
	list_of_ships.push_back(shared_ptr<Ship4>(new Ship4));
	cout << "Place fourth ship: ";
	cout << "Size: " << list_of_ships[3]->getSize() << endl;
	cout << "Start point: "; cin >> _points[0].first >> _points[0].second;
	cout << "End point: "; cin >> _points[1].first >> _points[1].second;
	points[0] = toBoardItem(_points[0]);
	points[1] = toBoardItem(_points[1]);
	while (!list_of_ships[3]->placeShip(points[0], points[1], this->player_board))
	{
		system("cls");
		player_board.display(toupper(_name[0]));
		cout << "Incorrect placement. Retry\n";
		cout << "Place fourth ship: ";
		cout << "Size: " << list_of_ships[3]->getSize() << endl;
		cout << "Start point: "; cin >> _points[0].first >> _points[0].second;
		cout << "End point: "; cin >> _points[1].first >> _points[1].second;
		points[0] = toBoardItem(_points[0]);
		points[1] = toBoardItem(_points[1]);
	}

	system("cls");
	player_board.display(toupper(_name[0]));
	list_of_ships.push_back(shared_ptr<Ship5>(new Ship5));
	cout << "Place fifth ship: ";
	cout << "Size: " << list_of_ships[4]->getSize() << endl;
    cout << "Start point: "; cin >> _points[0].first >> _points[0].second;
	cout << "End point: "; cin >> _points[1].first >> _points[1].second;
	points[0] = toBoardItem(_points[0]);
	points[1] = toBoardItem(_points[1]);
	while (!list_of_ships[4]->placeShip(points[0], points[1], this->player_board))
	{
		system("cls");
		player_board.display(toupper(_name[0]));
		cout << "Incorrect placement. Retry\n";
		cout << "Place fifth ship: ";
		cout << "Size: " << list_of_ships[4]->getSize() << endl;
		cout << "Start point: "; cin >> _points[0].first >> _points[0].second;
		cout << "End point: "; cin >> _points[1].first >> _points[1].second;
		points[0] = toBoardItem(_points[0]);
		points[1] = toBoardItem(_points[1]);
	}

	system("cls");
	player_board.display(toupper(_name[0]));
	list_of_ships.push_back(shared_ptr<Ship6>(new Ship6));
	cout << "Place sixth ship: ";
	cout << "Size: " << list_of_ships[5]->getSize() << endl;
	cout << "Start point: "; cin >> _points[0].first >> _points[0].second;
	cout << "End point: "; cin >> _points[1].first >> _points[1].second;
	points[0] = toBoardItem(_points[0]);
	points[1] = toBoardItem(_points[1]);
	while (!list_of_ships[5]->placeShip(points[0], points[1], this->player_board))
	{
		system("cls");
		player_board.display(toupper(_name[0]));
		cout << "Incorrect placement. Retry\n";
		cout << "Place sixth ship: ";
		cout << "Size: " << list_of_ships[5]->getSize() << endl;
		cout << "Start point: "; cin >> _points[0].first >> _points[0].second;
		cout << "End point: "; cin >> _points[1].first >> _points[1].second;
		points[0] = toBoardItem(_points[0]);
		points[1] = toBoardItem(_points[1]);
	}
	system("cls");
}

bool Player::replaceShip(const int& index)
{
	if (index < 0 || index > 5)
	{
		return false;
	}
	list_of_ships[index]->destroyShip(this->player_board);
	pair<int, int> points[2];
	pair<char, int> _points[2];
	cout << "Place ship: ";
	cout << "Size: " << list_of_ships[index]->getSize() << endl;
	cout << "Start point: "; cin >> _points[0].first >> _points[0].second;
	cout << "End point: "; cin >> _points[1].first >> _points[1].second;
	points[0] = toBoardItem(_points[0]);
	points[1] = toBoardItem(_points[1]);
	while (!list_of_ships[index]->placeShip(points[0], points[1], this->player_board))
	{
		system("cls");
		player_board.display(toupper(_name[0]));
		cout << "Incorrect placement. Retry\n";
		cout << "Place first ship: ";
		cout << "Size: " << list_of_ships[index]->getSize() << endl;
		cout << "Start point: "; cin >> _points[0].first >> _points[0].second;
		cout << "End point: "; cin >> _points[1].first >> _points[1].second;
		points[0] = toBoardItem(_points[0]);
		points[1] = toBoardItem(_points[1]);
	}
	return true;
}

bool Player::attack(Player& player)
{
	pair<int, int> target;
	pair<char, int> temp;
	show(player);
	cout << "Point coordinates: ";
	cin >> temp.first >> temp.second;
	target = toBoardItem(temp);
	int result = player.fire(target);
	while (!result)
	{
		system("cls");
		player.player_board.show(toupper((player.getName())[0]));
		cout << "The point has already been hit. Please, retry.\n";
		cout << "Point coordinates: ";
		cin >> temp.first >> temp.second;
		target = toBoardItem(temp);
		result = player.fire(target);
	}
	score += result;
	sunken_ships = 0;
	Iterator<shared_ptr<Ship>> it(player.list_of_ships);
	while (!it.done())
	{
		sunken_ships += it.currentItem()->sunken(player.player_board);
		it.next();
	}
	system("cls");
	return (sunken_ships == 6);
}

bool Player::rotateShip(const int& index)
{
	pair<int, int> old[2], newp[2];
	old[0] = this->list_of_ships[index]->start;
	old[1] = this->list_of_ships[index]->end;
	if (old[0] == old[1])
	{
		return false;
	}
	else
	{
		unsigned int size = player_board.getSize() - 1;
		int dif;
		bool parity;
		this->list_of_ships[index]->destroyShip(this->player_board);
		if (old[0].first == old[1].first)
		{
			dif = (old[1].second - old[0].second) + 1;
			parity = dif % 2;
			dif /= 2;
			newp[0] = { (old[0].first - dif),(dif + old[0].second) };
			if (parity)
			{
				newp[1] = { (old[0].first + dif),(dif + old[0].second) };
			}
			else
			{
				newp[1] = { (old[0].first + dif - 1),(dif + old[0].second) };
			}
		}
		else
		{
			dif = (old[1].first - old[0].first) + 1;
			parity = dif % 2;
			dif /= 2;
			newp[0] = { (dif + old[0].first), (old[0].second - dif) };
			if (parity)
			{
				newp[1] = { (dif + old[0].first), (old[0].second + dif) };
			}
			else
			{
				newp[1] = { (dif + old[0].first), (old[0].second + dif - 1) };
			}
		}
		if (this->list_of_ships[index]->placeShip(newp[0], newp[1], this->player_board))
		{
			return true;
		}
		else
		{
			this->list_of_ships[index]->placeShip(old[0], old[1], this->player_board);
			return false;
		}
	}
}

void Player::save(ofstream& g) const
{
	g << score << '\n';
	g << sunken_ships << '\n';
	g << _name << '\n';
	player_board.save(g);
	Iterator<shared_ptr<Ship>> it(list_of_ships);
	it.first();
	while (!it.done())
	{
		it.currentItem()->save(g);
		it.next();
	}
}

void Player::load(ifstream& f)
{
	f >> score;
	f >> sunken_ships;
	f >> _name;
	int _size;
	f >> _size;
	unique_ptr<Player> aux = make_unique<Player>(_size, _name);
	aux->score = score;
	aux->sunken_ships = sunken_ships;
	*this = move(*aux);
	player_board.load(f);
	list_of_ships.push_back(shared_ptr<Ship1>(new Ship1));
	list_of_ships.push_back(shared_ptr<Ship2>(new Ship2));
	list_of_ships.push_back(shared_ptr<Ship3>(new Ship3));
	list_of_ships.push_back(shared_ptr<Ship4>(new Ship4));
	list_of_ships.push_back(shared_ptr<Ship5>(new Ship5));
	list_of_ships.push_back(shared_ptr<Ship6>(new Ship6));
	Iterator<shared_ptr<Ship>> it(list_of_ships);
	while (!it.done())
	{
		it.currentItem()->load(f);
		it.next();
	}
}

void Player::show(Player& player) const
{
	system("cls");
	player.player_board.show(toupper((player.getName())[0]));
	cout << '\n' << _name << " hits\n";
	cout << "Score: " << this->score << endl;
	cout << "Sunken ships: " << this->sunken_ships << endl;
}

pair<int, int> Player::toBoardItem(const pair<char, int>& temp) const
{
	return make_pair(temp.first - 'a', temp.second - 1);
}

int Player::fire(const pair<int, int>& point)
{
	int* _point = &player_board.getPoint(point);
	if (!(*_point))
	{
		*_point = 2;
		return -50;
	}
	else if (*_point == 1)
	{
		*_point = 3;
		return 100;
	}
	else
	{
		return 0;
	}

}
