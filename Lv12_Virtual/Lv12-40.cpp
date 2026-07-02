#include <iostream>

using namespace std;

class AbstractClass
{
public:
	virtual void TemplateMethod() {}
	virtual void Step1() = 0;
	virtual void Step2() = 0;
};

class ConcreteClassA : public AbstractClass
{
public:
	void TemplateMethod() override
	{
		Step1();
		Step2();
	}
	void Step1() override
	{
		cout << "ConcreteClassA Step1" << endl;
	}
	void Step2() override
	{
		cout << "ConcreteClassA Step2" << endl;
	}
};

class ConcreteClassB : public AbstractClass
{
public:
	void TemplateMethod() override
	{
		Step1();
		Step2();
	}
	void Step1() override
	{
		cout << "ConcreteClassB Step1" << endl;
	}
	void Step2() override
	{
		cout << "ConcreteClassB Step2" << endl;
	}
};

int main()
{
	ConcreteClassA a;
	ConcreteClassB b;

	AbstractClass* classes[] = { &a, &b };
	for (int i = 0; i < 2; ++i)
		classes[i]->TemplateMethod();

	return 0;
}
