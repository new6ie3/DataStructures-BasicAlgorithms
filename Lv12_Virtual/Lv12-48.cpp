#include <iostream>

using namespace std;

class ConcreteElementA;
class ConcreteElementB;

class Visitor
{
public:
	virtual void Visit(ConcreteElementA* a) {}
	virtual void Visit(ConcreteElementB* b) {}
};

class ConcreteVisitor : public Visitor
{
public:
	void Visit(ConcreteElementA* a) override
	{
		cout << "Visit -> " << a << endl;
	}
	void Visit(ConcreteElementB* b) override
	{
		cout << "Visit -> " << b << endl;
	}
};

class Element
{
public:
	virtual void Accept(Visitor* _visitor) = 0;
};

class ConcreteElementA : public Element
{
public:
	void Accept(Visitor* _visitor) override
	{
		_visitor->Visit(this);
	}
};

class ConcreteElementB : public Element
{
public:
	void Accept(Visitor* _visitor) override
	{
		_visitor->Visit(this);
	}
};

int main()
{
	ConcreteElementA elementA;
	ConcreteElementB elementB;
	ConcreteVisitor visitor;

	Element* elements[] = { &elementA, &elementB };
	for (int i = 0; i < 2; ++i)
		elements[i]->Accept(&visitor);

	return 0;
}
