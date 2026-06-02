#include <iostream>

using namespace std;

class Warrior
{
public:
	Warrior(int _hp, int _attackpoint) : hp(_hp), attackpoint(_attackpoint){}

	int GetHp() { return hp; }
	int GetAttackpoint() { return attackpoint; }

private:
	int hp;
	int attackpoint;
};

class Magicion
{
public:
	Magicion(int _hp, int _attackpoint) : hp(_hp), attackpoint(_attackpoint) {}

	int GetHp() { return hp; }
	int GetAttackpoint() { return attackpoint; }

private:
	int hp;
	int attackpoint;
};

class Archer
{
public:
	Archer(int _hp, int _attackpoint) : hp(_hp), attackpoint(_attackpoint) {}

	int GetHp() { return hp; }
	int GetAttackpoint() { return attackpoint; }

private:
	int hp;
	int attackpoint;
};

class Party
{
public:
	void SetParty(Warrior* warrior, Magicion* magicion, Archer* archer)
	{
		this->warroir = warrior;
		this->magicion = magicion;
		this->archer = archer;
	}

	void PrintPartyInfo()
	{
		cout << "Warrior : HP (" << warroir->GetHp() << ") Att(" << warroir->GetAttackpoint() << ')' << endl;
		cout << "Magicion : HP (" << magicion->GetHp() << ") Att(" << magicion->GetAttackpoint() << ')' << endl;
		cout << "Archer : HP (" << archer->GetHp() << ") Att(" << archer->GetAttackpoint() << ')' << endl;
	}

private:
	Warrior* warroir;
	Magicion* magicion;
	Archer* archer;
};

int main()
{
	Warrior warrior = { 100, 20 };
	Magicion magicion = { 100, 30 };
	Archer archer = { 100, 10 };

	Party party;
	party.SetParty(&warrior, &magicion, &archer);
	party.PrintPartyInfo();


	return 0;
}