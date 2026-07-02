#include <iostream>

using namespace std;

class Employee
{
public:
	virtual int CalculateSalary() const = 0;

protected:
	char name[20];
	int salary;
};

class Manager : public Employee
{
public:
	Manager(const char* _name, int _salary)
	{
		strcpy_s(name, _name);
		salary = _salary;
	}

	int CalculateSalary() const override
	{
		return salary + salary * 0.5f;
	}
};


class Developer : public Employee
{
public:
	Developer(const char* _name, int _salary)
	{
		strcpy_s(name, _name);
		salary = _salary;
	}

	int CalculateSalary() const override
	{
		return salary + salary * 0.1f;
	}
};

int main()
{
	Manager m("Kim", 5000);
	Developer d("Lee", 3000);

	Employee* staff[] = { &m, &d };
	for (int i = 0; i < 2; ++i)
		cout << staff[i]->CalculateSalary() << endl;

	return 0;
}