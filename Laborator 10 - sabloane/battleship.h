#pragma once
#include "game.h"
using namespace std;
class BattleShip
{
public:
	static shared_ptr<BattleShip> getGame(void);
	void menu(void);
protected:
	BattleShip(void) {  }
private:
	static shared_ptr<BattleShip> instance;
	void load(void);
	void help(void) const;
};
