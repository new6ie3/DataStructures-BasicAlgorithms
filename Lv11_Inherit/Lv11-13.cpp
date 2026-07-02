#include <iostream>

using namespace std;

class GameUnit
{
protected:
	int hp;
};

class Character : public GameUnit
{
public:
	virtual void ShowStatus() const = 0;

protected:
	char name[20];
};

class Warrior : public Character
{
public:
	Warrior(const char* _name, int _hp, int _atk) : atk(_atk)
	{
		strcpy_s(name, _name);
		hp = _hp;
	}

	void ShowStatus() const override
	{
		cout << name << " | hp: " << hp << " | atk: " << atk << endl;
	}

private:
	int atk;
};

class Wizard : public Character
{
public:
	Wizard(const char* _name, int _hp, int _intelligence) : intelligence(_intelligence)
	{
		strcpy_s(name, _name);
		hp = _hp;
	}

	void ShowStatus() const override
	{
		cout << name << " | hp: " << hp << " | int: " << intelligence << endl;
	}

private:
	int intelligence;
};

int main()
{
	Warrior w("Gorath", 100, 30);
	Wizard wiz("Azura", 80, 50);

	Character* party[] = { &w, &wiz };
	for (int i = 0; i < 2; ++i)
		party[i]->ShowStatus();

	return 0;
}