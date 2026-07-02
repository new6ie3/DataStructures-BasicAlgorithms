#include <iostream>

using namespace std;

class Account
{
public:
	virtual void Deposit(int money) = 0;
	virtual void Withdraw(int money) = 0;
	virtual void ShowBalance() const = 0;

protected:
	int bank;
};

class SavingsAccount : public Account
{
public:
	SavingsAccount(int _bank, float _interest) : interest(_interest)
	{
		bank = _bank;
	}

	void Deposit(int money) override
	{
		bank += abs(money);
	}

	void Withdraw(int money) override
	{
		bank -= abs(money);
	}
	void ShowBalance() const override
	{
		cout << bank + bank * interest << endl;
	}
	
	float interest;
};

class CheckingAccount : public Account
{
public:
	CheckingAccount(int _bank, float _charge) : charge(_charge)
	{
		bank = _bank;
	}

	void Deposit(int money) override
	{
		bank += abs(money);
	}

	void Withdraw(int money) override
	{
		bank -= abs(money);
	}
	void ShowBalance() const override
	{
		cout << bank - bank * charge << endl;
	}

	float charge;
};

int main()
{
	SavingsAccount sa(1000, 0.03f);
	CheckingAccount ca(2000, 1.5f);

	Account* accounts[] = { &sa, &ca };
	for (int i = 0; i < 2; ++i)
	{
		accounts[i]->Deposit(500);
		accounts[i]->Withdraw(200);
		accounts[i]->ShowBalance();
	}

	return 0;
}