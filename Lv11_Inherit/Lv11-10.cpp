#include <iostream>

using namespace std;

class Payment
{
public:
	virtual void Process() const = 0;

protected:
	int pay = 0;
};

class CreditCard : public Payment
{
public:
	CreditCard(int _pay)
	{
		pay = _pay;
	}

	void Process() const override
	{
		cout << "Processing credit card payment : " << pay << endl;
	}
};

class Cash : public Payment
{
public:
	Cash(int _pay)
	{
		pay = _pay;
	}

	void Process() const override
	{
		cout << "Processing credit cash payment : " << pay << endl;
	}
};

int main()
{
	CreditCard cc(10000);
	Cash cash(5000);

	Payment* payments[] = { &cc, &cash };
	for (int i = 0; i < 2; ++i)
		payments[i]->Process();

	return 0;
}