#include <iostream>

using namespace std;

class Device
{
public:
	virtual void PowerOn() {}
	virtual void PowerOff() {}
	virtual void ShowInfo() const = 0;

protected:
	char name[20];
	bool flag = false;
};

class SmartPhone : public Device
{
public:
	SmartPhone(const char* _name)
	{
		strcpy_s(name, _name);
	}

	void PowerOn() override
	{
		flag = true;
	}

	void PowerOff() override
	{
		flag = false;
	}

	void ShowInfo() const override
	{
		cout << name << endl;
		if (flag) cout << "turn On" << endl;
		else cout << "turn Off" << endl;
	}

};

class SmartWatch : public Device
{
public:
	SmartWatch(const char* _name)
	{
		strcpy_s(name, _name);
	}

	void PowerOn() override
	{
		flag = true;
	}

	void ShowInfo() const override
	{
		cout << name << endl;
		if (flag) cout << "turn On" << endl;
		else cout << "turn Off" << endl;
	}

};

int main()
{
	SmartPhone sp("Galaxy");
	SmartWatch sw("Apple Watch");

	Device* devices[] = { &sp, &sw };
	for (int i = 0; i < 2; ++i)
	{
		devices[i]->PowerOn();
		devices[i]->ShowInfo();
		devices[i]->PowerOff();

	}

	return 0;
}