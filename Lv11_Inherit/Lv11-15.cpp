#include <iostream>

using namespace std;

class Item
{
public:
	virtual void GetInfo() const = 0;

protected:
	char name[20];
	int price;
};

class Weapon : public Item
{
public:
	Weapon(const char* _name, int _price, int _atk) : atk(_atk)
	{
		strcpy_s(name, _name);
		price = _price;
	}

	void GetInfo() const override
	{
		cout << name << " | price: " << price << " | atk: " << atk << endl;
	}

private:
	int atk;
};

class Potion : public Item
{
public:
	Potion(const char* _name, int _price, int _heal) : heal(_heal)
	{
		strcpy_s(name, _name);
		price = _price;
	}

	void GetInfo() const override
	{
		cout << name << " | price: " << price << " | heal: " << heal << endl;
	}

private:
	int heal;
};

int main()
{
	Weapon sword("Iron Sword", 100, 25);
	Potion hp("Health Potion", 50, 30);

	Item* items[] = { &sword, &hp };
	for (int i = 0; i < 2; ++i)
		items[i]->GetInfo();

	return 0;
}