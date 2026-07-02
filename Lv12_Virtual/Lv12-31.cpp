#include <iostream>

using namespace std;

class Entity
{
protected:
	int hp;
};

class Combatant : public Entity
{
public:
	virtual void Attack() const {}
	virtual void Defend() const {}

protected:
	int atk;
	int def;
};

class Warrior : public Combatant
{
public:
	Warrior(int _hp, int _atk, int _def = 25)
	{
		hp = _hp;
		atk = _atk;
		def = _def;
	}

	void Attack() const override
	{
		cout << "Warrior Attack" << endl;
	}

	void Defend() const override
	{
		cout << "Warrior Defend" << endl;
	}
};

class Mage : public Combatant
{
public:
	Mage(int _hp, int _atk, int _def = 25)
	{
		hp = _hp;
		atk = _atk;
		def = _def;
	}

	void Attack() const override
	{
		cout << "Mage Attack" << endl;
	}

	void Defend() const override
	{
		cout << "Mage Defend" << endl;
	}
};

class Archer : public Combatant
{
public:
	Archer(int _hp, int _atk, int _def = 25)
	{
		hp = _hp;
		atk = _atk;
		def = _def;
	}

	void Attack() const override
	{
		cout << "Archer Attack" << endl;
	}

	void Defend() const override
	{
		cout << "Archer Defend" << endl;
	}
};

int main()
{
	Warrior w(100, 30);
	Mage m(80, 50);
	Archer a(90, 25);

	Combatant* units[] = { &w, &m, &a };
	for (int i = 0; i < 3; ++i)
	{
		units[i]->Attack();
		units[i]->Defend();
	}

	return 0;
}