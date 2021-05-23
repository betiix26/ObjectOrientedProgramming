#pragma once
#include "board.h"
#include "ships.h"
#include "iterator.h"
#include <string>
#include <memory>
using namespace std;
class Player
{
public:
	Player(const int& size = 10, const string name = " ") : player_board(size) { this->score = 0, this->sunken_ships = 0, _name = name; }
	void placeShips(void);
	bool replaceShip(const int&);
	bool rotateShip(const int&);
	bool attack(Player&);
	void save(ofstream&) const;
	void load(ifstream&);
	int getScore(void) const { return this->score; }
	bool isFinish(void) const { return sunken_ships == 6; }
	string getName(void) const { return this->_name; }
	~Player(void) { list_of_ships.clear(), _name.clear(); }
private:
	int fire(const pair<int, int>&);
	void show(Player&) const;
	pair<int, int> toBoardItem(const pair<char, int>&) const;
	Board player_board;
	vector<shared_ptr<Ship>> list_of_ships;
	int score, sunken_ships;
	string _name;
};

