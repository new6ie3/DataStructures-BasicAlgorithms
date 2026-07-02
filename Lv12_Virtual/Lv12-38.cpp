#include <iostream>

using namespace std;

class Command
{
public:
	virtual void Execute() = 0;
	virtual void Undo() = 0;
	
protected:
	char target[20];
	bool executed = false;
};

class MoveCommand : public Command
{
public:
	MoveCommand(const char* _target)
	{
		strcpy_s(target, _target);
	}

	void Execute() override
	{
		cout << target << " Move" << endl;
		executed = true;
	}

	void Undo() override
	{
		executed = false;
	}
};

class AttackCommand : public Command
{
public:
	AttackCommand(const char* _target)
	{
		strcpy_s(target, _target);
	}

	void Execute() override
	{
		cout << target << " Attack" << endl;
		executed = true;
	}

	void Undo() override
	{
		executed = false;
	}
};

int main()
{
	MoveCommand move("North");
	AttackCommand attack("Enemy");

	Command* commands[] = { &move, &attack };
	for (int i = 0; i < 2; ++i)
	{
		commands[i]->Execute();
		commands[i]->Undo();
	}

	return 0;
}
