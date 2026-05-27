#include <iostream>

using namespace std;

class Employee
{
public:
	Employee(const char* _name, const char* _department, int _baseSalary, int _years, float _bonusRate)
		:baseSalary(_baseSalary) , years(_years), bonusRate(_bonusRate)
	{
		int i = 0;
		while (true)
		{
			name[i] = _name[i];

			if (name[i] == '\0')
			{
				i = 0;
				break;
			}
			i++;
		}

		while (true)
		{
			department[i] = _department[i];

			if (department[i] == '\0')
				break;
			i++;
		}
	}

	void PrintInfo()
	{
		cout << "Employee: " << name << " | Department: " << department << " | Years: " << years << endl;
		cout << "Base: " << baseSalary << ", Bonus: " << bonusRate << '%' << endl;
		cout << "Total Salary: " << GetTotalSalary() << endl;
	}

private:
	float GetTotalSalary() { return baseSalary + baseSalary * bonusRate * 0.01f; }

	char name[20];
	char department[20];
	int baseSalary;
	int years;
	float bonusRate;
};

int main()
{
	Employee employee("Jane", "HR", 3000, 5, 15.0f);
	employee.PrintInfo();

	return 0;
}