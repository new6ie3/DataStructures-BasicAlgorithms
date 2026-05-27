#include <iostream>

using namespace std;

class Product
{
public:
	Product(const char* _name, float _price, unsigned int _quantity, float _discount)
		: price(_price), quantity(_quantity), discountRate(_discount)
	{
		int i = 0;
		while (true)
		{
			name[i] = _name[i];

			if (name[i] == '\0')
				break;
			i++;
		}
	}

	void PrintInfo()
	{
		cout << "Product: " << name << " | Price: $" << price << " | Quantity: ";
		cout << quantity << " | Discount: " << discountRate << '%' << endl;
		cout << "Total after discount: $" << GetTotal() << endl;
	}

private:
	float GetTotal() { return price * quantity * (100.0f - discountRate) * 0.01f; }

	char name[20];
	float price;
	unsigned int quantity;
	float discountRate;
};

int main()
{
	Product product("Pen", 2.0f, 10, 10.0f);
	product.PrintInfo();

	return 0;
}