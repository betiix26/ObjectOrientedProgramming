#pragma once 
#include "board.h"
using namespace std;
class Ship
{
public:
	friend class Player;
	virtual bool placeShip(pair<int, int>&, pair<int, int>&, Board&) = 0;
	void destroyShip(Board&);
	bool sunken(Board&) const;
	void save(ofstream&) const;
	void load(istream&);
protected:
	virtual int getSize(void) const = 0;
	bool setShip(Board&);
	pair<int, int> start, end;
};

class Ship1 : public Ship
{
public:
	bool placeShip(pair<int, int>&, pair<int, int>&, Board&) override;
private:
	bool check(const pair<int, int>&, const pair<int, int>&) const;
	int getSize(void) const override { return _size; }
	static const int _size;
};

class Ship2 : public Ship
{
public:
	bool placeShip(pair<int, int>&, pair<int, int>&, Board&) override;
private:
	bool check(const pair<int, int>&, const pair<int, int>&) const;
	int getSize(void) const override { return _size; }
	static const int _size;
};


class Ship3 : public Ship
{
public:
	bool placeShip(pair<int, int>&, pair<int, int>&, Board&) override;
private:
	bool check(const pair<int, int>&, const pair<int, int>&) const;
	int getSize(void) const override { return _size; }
	static const int _size;
};


class Ship4 : public Ship
{
public:
	bool placeShip(pair<int, int>&, pair<int, int>&, Board&) override;
private:
	bool check(const pair<int, int>&, const pair<int, int>&) const;
	int getSize(void) const override { return _size; }
	static const int _size;
};

class Ship5 : public Ship
{
public:
	bool placeShip(pair<int, int>&, pair<int, int>&, Board&) override;
private:
	bool check(const pair<int, int>&, const pair<int, int>&) const;
	int getSize(void) const override { return _size; }
	static const int _size;
};


class Ship6 : public Ship
{
public:
	bool placeShip(pair<int, int>&, pair<int, int>&, Board&) override;
private:
	bool check(const pair<int, int>&, const pair<int, int>&) const;
	int getSize(void) const override { return _size; }
	static const int _size;
};

