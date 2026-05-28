#include <iostream>

using namespace std;

class Product
{
public:
	Product(const char* _name, int _cost, unsigned int _quantity, int _discount)
		: cost(_cost), quantity(_quantity), discount(_discount)
	{
		int i = 0;
		while (1)
		{
			name[i] = _name[i];
			if (name[i] == '\0')
				break;
			i++;
		}
	}
	
	char* GetName() { return name; }
	int GetCost() { return cost; }
	unsigned int GetQuantity() { return quantity; }
	int GetDiscount() { return discount; }

private:
	char name[20];
	int cost;
	unsigned int quantity;
	int discount;
};

class Order
{
public:
	Order(const char* _order, const char* _date)
	{
		int i = 0;
		while (1)
		{
			order[i] = _order[i];
			if (order[i] == '\0')
			{
				i = 0;
				break;
			}
			i++;
		}

		while (1)
		{
			date[i] = _date[i];
			if (date[i] == '\0')
				break;
			i++;
		}
	}

	void AddProduct(Product* product)
	{
		productList[idx] = product;
		idx++;
	}

	void PrintOrderList()
	{
		cout << "Order by: " << order << " | Date: " << date << endl;
		cout << "Items:" << endl;

		int total = 0;
		for (int i = 0; i < idx; ++i)
		{
			cout << " - " << productList[i]->GetName() << ": $" << productList[i]->GetCost();
			cout << " x " << productList[i]->GetQuantity() << " (Discount ";

			int cost = productList[i]->GetCost() * productList[i]->GetQuantity() * (100 - productList[i]->GetDiscount()) * 0.01f;
			total += cost;
			cout << productList[i]->GetDiscount() << "%) -> $" << cost << endl;
		}

		cout << "Total: $" << total << endl;
	}

private:
	char order[20];
	char date[20];

	Product* productList[10] = {};
	int idx = 0;
};

int main()
{
	Product product1 = { "Keyboard", 50, 1, 0 };
	Product product2 = { "Mouse", 20, 2, 10 };

	Order order = { "Alice", "2024-05-18" };

	order.AddProduct(&product1);
	order.AddProduct(&product2);
	order.PrintOrderList();
	return 0;
}