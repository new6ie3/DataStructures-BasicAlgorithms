#include <iostream>

using namespace std;

class Unit
{
public:
	virtual void Move() const = 0;

protected:
	char name[20];
};

class Warrior : public Unit
{
public:
	Warrior(const char* _name)
	{
		strcpy_s(name, _name);
	}

	void Move() const override
	{
		cout << "Warrior Move!" << endl;
	}

};

class Archer : public Unit
{
public:
	Archer(const char* _name)
	{
		strcpy_s(name, _name);
	}

	void Move() const override
	{
		cout << "Archer Move!" << endl;
	}

};

int main()
{
	Warrior w("Thor");
	Archer a("Robin");

	Unit* units[] = { &w, &a };
	for (int i = 0; i < 2; ++i)
		units[i]->Move();

	return 0;
}