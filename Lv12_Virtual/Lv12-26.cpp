#include <iostream>

using namespace std;

class Animal
{
public:
	virtual void Eat() const
	{
		cout << "냠냠" << endl;
	}
};

class Mammal : public Animal
{
public:
	virtual void Sleep() const
	{
		cout << "잠자기" << endl;
	}
};

class Dog : public Mammal
{
public:
	void Eat() const override
	{
		cout << "강아지 냠냠" << endl;
	}

	void Sleep() const override
	{
		cout << "강아지 잠자기" << endl;
	}

	virtual void Speak() const
	{
		cout << "강아지 왈왈" << endl;
	}
};

class Cat : public Mammal
{
public:
	void Eat() const override
	{
		cout << "고양이 냠냠" << endl;
	}

	void Sleep() const override
	{
		cout << "고양이 잠자기" << endl;
	}

	virtual void Speak() const
	{
		cout << "고양이 냐옹" << endl;
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
