#include <iostream>

using namespace std;

class Target
{
public:
	virtual void Request() = 0;
};

class Adaptee
{
public:
	void SpecificRequest()
	{
		cout << "Adaptee Request" << endl;
	}
};

class Adapter : public Target
{
public:
	Adapter(Adaptee* _adaptee = nullptr) : adaptee(_adaptee) {}
	void Request() override
	{
		if (adaptee != nullptr)
		{
			adaptee->SpecificRequest();
		}
	}

private:
	Adaptee* adaptee;
};


int main()
{
	Adaptee adaptee;
	Adapter adapter(&adaptee);

	Target* targets[] = { &adapter };
	for (int i = 0; i < 1; ++i)
		targets[i]->Request();

	return 0;
}
