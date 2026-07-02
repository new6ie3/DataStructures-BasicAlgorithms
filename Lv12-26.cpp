#include <iostream>

using namespace std;

class Animal
{
public:
	virtual void Eat() const
	{
		cout << "³È³È" << endl;
	}
};

class Mammal : public Animal
{
public:
	virtual void Sleep() const
	{
		cout << "ÀáÀÚ±â" << endl;
	}
};

class Dog : public Mammal
{
public:
	void Eat() const override
	{
		cout << "°­¾ÆÁö ³È³È" << endl;
	}

	void Sleep() const override
	{
		cout << "°­¾ÆÁö ÀáÀÚ±â" << endl;
	}

	virtual void Speak() const
	{
		cout << "°­¾ÆÁö ¿Ð¿Ð" << endl;
	}
};

class Cat : public Mammal
{
public:
	void Eat() const override
	{
		cout << "°í¾çÀÌ ³È³È" << endl;
	}

	void Sleep() const override
	{
		cout << "°í¾çÀÌ ÀáÀÚ±â" << endl;
	}

	virtual void Speak() const
	{
		cout << "°í¾çÀÌ ³Ä¿Ë" << endl;
	}
};

int main()
{
	Dog d;
	Cat c;

	Animal* animals[] = { &d, &c };
	for (int i = 0; i < 2; ++i)
	{
		animals[i]->Eat();
		if (Mammal* m = dynamic_cast<Mammal*>(animals[i]))
		{
			m->Sleep();
		}
	}

	return 0;
}