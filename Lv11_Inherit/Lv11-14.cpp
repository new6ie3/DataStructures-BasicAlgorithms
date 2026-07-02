#include <iostream>

using namespace std;

class Vehicle
{
public:
	virtual void StartEngine() const = 0;
	virtual void Drive() const = 0;
	virtual void StopEngine() const = 0;
};

class Car : public Vehicle
{
public:
	void StartEngine() const override
	{
		cout << "Car Start" << endl;
	}

	void Drive() const override
	{
		cout << "Car Drive" << endl;
	}

	void StopEngine() const override
	{
		cout << "Car Stop" << endl;
	}
};

class Motorcycle : public Vehicle
{
public:
	void StartEngine() const override
	{
		cout << "Motorcycle Start" << endl;
	}

	void Drive() const override
	{
		cout << "Motorcycle Drive" << endl;
	}

	void StopEngine() const override
	{
		cout << "Motorcycle Stop" << endl;
	}
};

int main()
{
	Car c;
	Motorcycle m;

	Vehicle* vehicles[] = { &c, &m };
	for (int i = 0; i < 2; ++i)
	{
		vehicles[i]->StartEngine();
		vehicles[i]->Drive();
		vehicles[i]->StopEngine();
	}

	return 0;
}