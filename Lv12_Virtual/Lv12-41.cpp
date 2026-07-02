#include <iostream>

using namespace std;

class Beverage
{
public:
	Beverage() : cost(1000) {}

	virtual int GetCost() const { return -1; }
	virtual string GetDescription() const { return ""; }

protected:
	int cost;
};

class Coffee : public Beverage
{
public:
	int GetCost() const override { return cost; }
	string GetDescription() const override
	{
		return "Coffee";
	}
};

class Tea : public Beverage
{
public:
	Tea() { cost = 1500; }

	int GetCost() const override { return cost; }
	string GetDescription() const override
	{
		return "Tea";
	}
};

class ConimentDecorator : public Beverage
{
protected:
	Beverage* bev;
};

class Milk : public ConimentDecorator
{
public:
	Milk(Beverage* _bev)
	{
		bev = _bev;
	}

	int GetCost() const override { return addCost + bev->GetCost(); }
	string GetDescription() const override
	{
		return "Milk Coffee";
	}
private:
	int addCost = 300;
};

class Sugar : public ConimentDecorator
{
public:
	Sugar(Beverage* _bev)
	{
		bev = _bev;
	}

	int GetCost() const override { return addCost + bev->GetCost(); }
	string GetDescription() const override
	{
		return "Sugar Coffee";
	}
private:
	int addCost = 300;
};

class Whip : public ConimentDecorator
{
public:
	Whip(Beverage* _bev)
	{
		bev = _bev;
	}

	int GetCost() const override { return addCost + bev->GetCost(); }
	string GetDescription() const override
	{
		return "Whip Coffee";
	}

private:
	int addCost = 300;
};
int main()
{
	Coffee coffee;
	Milk milkCoffee(&coffee);
	Sugar sweetMilkCoffee(&milkCoffee);
	Whip fancyCoffee(&sweetMilkCoffee);

	Beverage* drinks[] = { &coffee, &milkCoffee, &sweetMilkCoffee, &fancyCoffee };
	for (int i = 0; i < 4; ++i)
		cout << drinks[i]->GetDescription() << ": " << drinks[i]->GetCost() << endl;

	return 0;
}
