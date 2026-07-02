#include <iostream>

using namespace std;

class Monster
{
public:
	virtual void Attack() const = 0;

protected:
	char name[20];
	int hp;
};

class Goblin : public Monster
{
public:
	Goblin(const char* _name, int _hp)
	{
		strcpy_s(name, _name);
		hp = _hp;
	}

	void Attack() const override
	{
		cout << "throws rock!" << endl;
	}
};

class Ork : public Monster
{
public:
	Ork(const char* _name, int _hp)
	{
		strcpy_s(name, _name);
		hp = _hp;
	}

	void Attack() const override
	{
		cout << "swings axe!" << endl;
	}
};

int main()
{
	Goblin g("Goblin", 50);
	Ork o("Ork", 100);

	Monster* monsters[] = { &g, &o };
	for (int i = 0; i < 2; ++i)
		monsters[i]->Attack();

	return 0;
}