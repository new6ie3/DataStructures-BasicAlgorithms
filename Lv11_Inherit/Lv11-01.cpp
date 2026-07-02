#include <iostream>

using namespace std;

class Animal
{
public:
	virtual void Speak() = 0;
	void SetName(const char* _name)
	{
		strcpy_s(name, _name);
	}

private:
	char name[20];
};


class Dog : public Animal
{
public:
	Dog(const char* _name)
	{
		SetName(_name);
	}

	void Speak() override
	{
		cout << "barks!" << endl;
	}
};

class Cat : public Animal
{
public:
	Cat(const char* _name)
	{
		SetName(_name);
	}

	void Speak() override
	{
		cout << "meows!" << endl;
	}
};

int main()
{
	Dog d1("Baekgu");
	Cat c1("Nabi");

	Animal* animals[] = { &d1, &c1 };
	for (int i = 0; i < 2; ++i)
		animals[i]->Speak();

	return 0;
}
