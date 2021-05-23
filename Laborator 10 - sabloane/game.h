#pragma once
#include "player.h"
using namespace std;
class Game
{
public:
	Game(void);
	virtual void save(void) const;
	void load(ifstream&);
	virtual void menu(bool = false) = 0;
protected:
	void menuPlayer(unique_ptr<Player>&);
	bool player1Attack(void);
	bool player2Attack(void);
	unique_ptr<Player> player1, player2;
};

class InteractiveGame : public Game
{
public:
	InteractiveGame(void);
	InteractiveGame(bool temp);
	void save(void) const override;
	void menu(bool = false) override;
};

class SequentialGame : public Game
{
public:
	SequentialGame(void);
	SequentialGame(bool temp);
	void save(void) const override;
	void menu(bool = false) override;
};