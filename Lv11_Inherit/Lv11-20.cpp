#include <iostream>

using namespace std;

class Robot
{
public:
	virtual void Move() const = 0;
	virtual void Work() const = 0;

protected:
	char name[20];
};

class CleaningRobot : public Robot
{
public:
	CleaningRobot(const char* _name)
	{
		strcpy_s(name, _name);
	}

	void Move() const override
	{
		cout << "moves slowly" << endl;
	}
	void Work() const override
	{
		cout << "cleans floor" << endl;
	}
};

class DeliveryRobot : public Robot
{
public:
	DeliveryRobot(const char* _name)
	{
		strcpy_s(name, _name);
	}

	void Move() const override
	{
		cout << "moves fast" << endl;
	}
	void Work() const override
	{
		cout << "delivers package" << endl;
	}
};

int main()
{
	CleaningRobot cr("Roomba");
	DeliveryRobot dr("DeliveryBot");

	Robot* robots[] = { &cr, &dr };
	for (int i = 0; i < 2; ++i)
	{
		robots[i]->Move();
		robots[i]->Work();
	}

	return 0;
}