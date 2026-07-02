#include <iostream>

using namespace std;

class State
{
public:
	virtual void Handle() const = 0;
};

class IdleState : public State
{
public:
	void Handle() const override
	{
		cout << "Idle" << endl;
	}
};

class RunningState : public State
{
public:
	void Handle() const override
	{
		cout << "Run" << endl;
	}
};

class StoppedState : public State
{
public:
	void Handle() const override
	{
		cout << "Stop" << endl;
	}
};

int main()
{
	IdleState idle;
	RunningState run;
	StoppedState stop;

	State* states[] = { &idle, &run, &stop };
	for (int i = 0; i < 3; ++i)
		states[i]->Handle();

	return 0;
}
