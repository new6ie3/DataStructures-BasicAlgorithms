#include <iostream>

using namespace std;

class Account
{
public:
	Account(const char* _name, int _number, int _balance) : number(_number), balance(_balance)
	{
		int i = 0;
		while (1)
		{
			name[i] = _name[i];
			if (name[i] == '\0') break;

			i++;
		}
	}

	void Deposit(int money) { balance += money; }
	int Withdraw(int money) { return balance -= money; }

	char* GetOwner() { return name; }
	int GetInquiry() { return balance; }

private:
	char name[20];
	int number;
	int balance;
};

int main()
{
	Account a("kitae", 1, 5000);

	a.Deposit(50000);
	cout << a.GetOwner() << "ÀÇ ÀÜ¾×Àº " << a.GetInquiry() << endl;
	int money = a.Withdraw(20000);
	cout << a.GetOwner() << "ÀÇ ÀÜ¾×Àº " << a.GetInquiry() << endl;

	return 0;
}