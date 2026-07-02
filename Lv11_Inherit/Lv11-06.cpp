#include <iostream>

using namespace std;

class SmartDevice
{
public:
	virtual void Execute(const char* command) const
	{
		cout << command << endl;
	}
};

class SmartLight : public SmartDevice
{
public:
	void Execute(const char* command) const override
	{
		cout << "turn on light" << endl;
	}
};

class SmartSpeaker : public SmartDevice
{
public:
	void Execute(const char* command) const override
	{
		cout << "turn on speak" << endl;
	}
};

int main()
{
	SmartLight sl;
	SmartSpeaker ss;

	SmartDevice* devices[] = { &sl, &ss };
	for (int i = 0; i < 2; ++i)
		devices[i]->Execute("turn on");

	return 0;
}