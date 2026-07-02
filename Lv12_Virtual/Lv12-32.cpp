#include <iostream>

using namespace std;

class Component
{
public:
	virtual void Display() const = 0;
};

class Leaf : public Component
{
public:
	Leaf(const char* _name)
	{
		strcpy_s(name, _name);
	}

	void Display() const override
	{
		cout << name << " leaf" << endl;
	}

private:
	char name[20];
};

class Composite : public Component
{
public:
	Composite(const char* _name)
	{
		strcpy_s(name, _name);
	}

	void Display() const override
	{
		for (int i = 0; i < idx; ++i)
			components[i]->Display();
	}

	void Add(Component* _components)
	{
		components[idx] = _components;
		idx++;
	}

private:
	char name[20];
	Component* components[10];
	int idx = 0;
};

int main()
{
	Leaf l1("Item1");
	Leaf l2("Item2");

	Composite comp("Folder");
	comp.Add(&l1);
	comp.Add(&l2);

	Component* components[] = { &l1, &comp };
	for (int i = 0; i < 2; ++i)
		components[i]->Display();

	return 0;
}