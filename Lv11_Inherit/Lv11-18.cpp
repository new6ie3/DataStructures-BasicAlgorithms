#include <iostream>

using namespace std;

class Transport
{
public:
	virtual int CalculateFare() const = 0;

protected:
	int range;
};

class Taxi : public Transport
{
public:
	Taxi(int _range)
	{
		range = _range;
	}

	int CalculateFare() const override
	{
		return range * 1000;
	}
};

class Bus : public Transport
{
public:
	Bus(int _range)
	{
		range = _range;
	}

	int CalculateFare() const override
	{
		return 1500;
	}
};

int main()
{
	Taxi taxi(5);
	Bus bus(5);

	Transport* transports[] = { &taxi, &bus };
	for (int i = 0; i < 2; ++i)
		cout << transports[i]->CalculateFare() << endl;

	return 0;
}