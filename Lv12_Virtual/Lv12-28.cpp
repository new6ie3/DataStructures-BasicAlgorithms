#include <iostream>

using namespace std;

class Delivery
{
public:
	virtual int Calculate() const = 0;
	virtual void GetInfo() const = 0;
};

class StandardDelivery : public Delivery
{
public:
	int Calculate() const override { return 3000; }
	void GetInfo() const override
	{
		cout << "StandardDelivery" << endl;
	}
};

class ExpressDelivery : public Delivery
{
public:
	ExpressDelivery(int _range) : range(_range) {}

	int Calculate() const override { return range * 500; }
	void GetInfo() const override
	{
		cout << "ExpressDelivery" << endl;
	}

private:
	int range;
};

int main()
{
	StandardDelivery std;
	ExpressDelivery exp(10);

	Delivery* deliveries[] = { &std, &exp };
	for (int i = 0; i < 2; ++i)
	{
		deliveries[i]->GetInfo();
		cout << deliveries[i]->Calculate() << endl;
	}

	return 0;
}