#include <iostream>

using namespace std;

class Skill
{
public:
	virtual void Execute() const = 0;
	virtual int GetCooldown() const = 0;

protected:
	char name[20];
	int cooltime;
};

class AttackSkill : public Skill
{
public:
	AttackSkill(const char* _name, int _cooltime)
	{
		strcpy_s(name, _name);
		cooltime = _cooltime;
	}

	void Execute() const override
	{
		cout << name << " Execute!!" << endl;
	}

	int GetCooldown() const override
	{
		return cooltime;
	}
};

class DefenseSkill : public Skill
{
public:
	DefenseSkill(const char* _name, int _cooltime)
	{
		strcpy_s(name, _name);
		cooltime = _cooltime;
	}

	void Execute() const override
	{
		cout << name << " Execute!!" << endl;
	}

	int GetCooldown() const override
	{
		return cooltime;
	}
};

class HealSkill : public Skill
{
public:
	HealSkill(const char* _name, int _cooltime)
	{
		strcpy_s(name, _name);
		cooltime = _cooltime;
	}

	void Execute() const override
	{
		cout << name << " Execute!!" << endl;
	}

	int GetCooldown() const override
	{
		return cooltime;
	}
};

int main()
{
	AttackSkill fireball("Fireball", 5);
	DefenseSkill shield("Shield", 10);
	HealSkill heal("Heal", 8);

	Skill* skills[] = { &fireball, &shield, &heal };
	for (int i = 0; i < 3; ++i)
	{
		skills[i]->Execute();
		cout << "Cooldown: " << skills[i]->GetCooldown() << endl;
	}

	return 0;
}