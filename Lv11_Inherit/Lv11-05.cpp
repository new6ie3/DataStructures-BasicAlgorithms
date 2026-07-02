#include <iostream>

using namespace std;

class Character
{
public:
	virtual void Attack() const = 0;

protected:
	char name[20];
};

class Knight : public Character
{
public:
	Knight(const char* _name)
	{
		strcpy_s(name, _name);
	}

	void Attack() const override
	{
		cout << "slashes with sword!" << endl;
	}
};

class Mage : public Character
{
public:
	Mage(const char* _name)
	{
		strcpy_s(name, _name);
	}

	void Attack() const override
	{
		cout << "casts a spell!" << endl;
	}
};

int main()
{
	Knight k("Arthur");
	Mage m2("Merlin");

	Character* party[] = { &k, &m2 };
	for (int i = 0; i < 2; ++i)
		party[i]->Attack();

	return 0;
}