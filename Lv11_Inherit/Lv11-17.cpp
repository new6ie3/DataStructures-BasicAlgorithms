#include <iostream>

using namespace std;

class Drink
{
public:
	virtual void Dispense() const = 0;

protected:
	char name[20];
	int price;
};

class Soda : public Drink
{
public:
	Soda(const char* _name, int _price)
	{
		strcpy_s(name, _name);
		price = _price;
	}

	void Dispense() const override
	{
		cout << "Dispensing soda with ice" << endl;
	}
};

class Juice : public Drink
{
public:
	Juice(const char* _name, int _price)
	{
		strcpy_s(name, _name);
		price = _price;
	}

	void Dispense() const override
	{
		cout << "Dispensing fresh juice" << endl;
	}
};

int main()
{
	Soda soda("Coke", 1500);
	Juice juice("Orange", 2000);

	Drink* drinks[] = { &soda, &juice };
	for (int i = 0; i < 2; ++i)
		drinks[i]->Dispense();

	return 0;
}