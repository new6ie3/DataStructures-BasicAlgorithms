#include <iostream>

using namespace std;

class Memento
{
public:
	Memento(string _state) : state(_state) {}

	void SetState(string _state) { state = _state; }
	string GetState() const { return state; }

private:
	string state;
};

class Originator
{
public:
	Memento CreateMemento()
	{
		Memento mem(state);
		return mem;
	}

	void RestoreMemento(Memento* mem)
	{
		mem->SetState(state);
	}


	void SetState(string _state)
	{
		state = _state;
	}
	void ShowState() const
	{
		cout << state << endl;
	}

private:
	string state;
};

int main()
{
	Originator originator;
	originator.SetState("State1");
	Memento memento1 = originator.CreateMemento();

	originator.SetState("State2");
	originator.ShowState();
	originator.RestoreMemento(&memento1);
	originator.ShowState();

	return 0;
}
