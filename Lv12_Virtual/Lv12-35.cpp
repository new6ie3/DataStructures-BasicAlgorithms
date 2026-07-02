#include <iostream>

using namespace std;

class Beverage
{
public:
	virtual int GetCost() const { return cost; }

protected:
	int cost = 1000;
};

class Coffee : public Beverage
{
public:
	int GetCost() const override { return cost; }
};

class AddOn : public Beverage
{
protected:
	Beverage* bev;
};

class Milk : public AddOn
{
public:
	Milk(Beverage* _bev)
	{
		bev = _bev;
	}

	int GetCost() const override { return bev->GetCost() + cost; }

private:
	int cost = 500;
};

int main()
{
	Coffee coffee;
	Milk milkCoffee(&coffee);

	Beverage* drinks[] = { &coffee, &milkCoffee };
	for (int i = 0; i < 2; ++i)
		cout << drinks[i]->GetCost() << endl;

	return 0;
}