#include <iostream>

using namespace std;

class BankAccount
{
public:
	BankAccount(const char* _account, const char* _bank, const char* _type, int _balance = 0) 
		: balance(_balance)
	{
		int i = 0;
		while (true)
		{
			account[i] = _account[i];
			if (account[i] == '\0')
			{
				i = 0;
				break;
			}
			i++;
		}

		while (true)
		{
			bank[i] = _bank[i];
			if (bank[i] == '\0')
			{
				i = 0;
				break;
			}
			i++;
		}

		while (true)
		{
			type[i] = _type[i];
			if (type[i] == '\0')
			{
				i = 0;
				break;
			}
			i++;
		}
	}

	void Deposit(int money) 
	{ 
		cout << "Balance: $" << balance << " -> Deposit: $" << money << " -> Balance: $" << balance + money;
		balance += money; 
	}

	void PrintInfo()
	{
		cout << "Account: " << account << " | Bank: " << bank << " | Type: " << type << endl;
	}

private:
	char account[20];
	char bank[20];
	char type[20];
	int balance;
};

class Customer
{
public:
	Customer(const char* _name, const char* _phone, int _age, BankAccount _account) 
		: age(_age), account(_account)
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
			phone[i] = _phone[i];
			if (phone[i] == '\0')
				break;
			i++;
		}
	}

	void PrintInfo()
	{
		cout << "Customer: " << name << " | Phone: " << phone << " | Age: " << age << endl;
		account.PrintInfo();
	}

private:
	char name[20];
	char phone[20];
	int age;
	BankAccount account;
};

int main()
{
	BankAccount account("123-456", "Hana", "Saving", 1500);
	Customer customer("Alice", "010-1234-5678", 27, account);

	customer.PrintInfo();
	account.Deposit(200);

	return 0;
}