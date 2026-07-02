#include <iostream>

using namespace std;

class Observer
{
public:
	virtual void OnNotify() = 0;
};

class ConcreteObserverA : public Observer
{
public:
	void OnNotify() override
	{
		cout << "ConcreteObserverA" << endl;
	}
};

class ConcreteObserverB : public Observer
{
public:
	void OnNotify() override
	{
		cout << "ConcreteObserverB" << endl;
	}
};

class Subject
{
public:
	virtual void Notify() const 
	{
		for (int i = 0; i < idx; ++i)
			observers[i]->OnNotify();
	}

	void RegisterObserver(Observer* obs)
	{
		observers[idx] = obs;
		idx++;
	}

protected:
	Observer* observers[10];
	int idx = 0;
};


int main()
{
	Subject subject;
	ConcreteObserverA obsA;
	ConcreteObserverB obsB;

	subject.RegisterObserver(&obsA);
	subject.RegisterObserver(&obsB);
	subject.Notify();

	return 0;
}
