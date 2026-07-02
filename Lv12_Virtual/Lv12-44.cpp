#include <iostream>

using namespace std;

class Observer
{
public:
	virtual void OnNotify(string event) = 0;
	void ChangeState(string event)
	{
		cout << "ChangeState : " << event << endl;
	}
};

class Player : public Observer
{
public:
	void OnNotify(string event) override
	{
		cout << "Player " << event << endl;
	}
};

class UI : public Observer
{
public:
	void OnNotify(string event) override
	{
		cout << "UI " << event << endl;
	}
};

class SoundManager : public Observer
{
public:
	void OnNotify(string event) override
	{
		cout << "SoundManager " << event << endl;
	}
};

class Subject
{
public:
	virtual void Notify(string event) 
	{
		for (int i = 0; i < idx; ++i)
			obss[i]->OnNotify(event);
	}

	void RegisterObserver(Observer* obs)
	{
		obss[idx] = obs;
		idx++;
	}

protected:
	Observer* obss[10];
	int idx = 0;
};

class ConcreteSubject : public Subject
{
public:
	void ChangeState(string event)
	{
		for (int i = 0; i < idx; ++i)
		{
			obss[i]->ChangeState(event);
		}
	}

};

int main()
{
	ConcreteSubject subject;
	Player player;
	UI ui;
	SoundManager sound;
	
	subject.RegisterObserver(&player);
	subject.RegisterObserver(&ui);
	subject.RegisterObserver(&sound);

	subject.ChangeState("GameOver");
	subject.Notify("GameOver");

	return 0;
}
