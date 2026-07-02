#include <iostream>

using namespace std;

class Product
{
public:
	virtual void Use() const {}
};

class ProductA : public Product
{
public:
	void Use() const override
	{
		cout << "ProductA" << endl;
	}
};

class ProductB : public Product
{
public:
	void Use() const override
	{
		cout << "ProductB" << endl;
	}
};


class Creater
{
public:
	virtual Product* CreateProduct() const = 0;
	
protected:
	Product* product;
};

class ConcreteCreaterA : public Creater
{
public:
	ConcreteCreaterA(Product* _product)
	{
		product = _product;
	}

	Product* CreateProduct() const override { return product; }
};

class ConcreteCreaterB : public Creater
{
public:
	ConcreteCreaterB(Product* _product) 
	{
		product = _product;
	}

	Product* CreateProduct() const override { return product; }
};

int main()
{
	ProductA productA;
	ProductB productB;

	ConcreteCreaterA creatorA(&productA);
	ConcreteCreaterB creatorB(&productB);
	Creater* creators[] = { &creatorA, &creatorB };

	for (int i = 0; i < 2; ++i)
	{
		Product* product = creators[i]->CreateProduct();
		product->Use();
	}

	return 0;
}
