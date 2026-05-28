#include <iostream>

using namespace std;

class Item
{
public:
	Item(const char* _name, const char* _des, float _weight, unsigned int _quantity)
		: weight(_weight), quantity(_quantity)
	{
		int i = 0;
		while (1)
		{
			name[i] = _name[i];
			if (name[i] == '\0')
			{
				i = 0;
				break;
			}
			i++;
		}

		while (1)
		{
			description[i] = _des[i];
			if (description[i] == '\0')
				break;
			i++;
		}
	}
	
	char* GetName() { return name; }
	char* GetDes() { return description; }
	float GetWeight() { return weight; }
	unsigned int GetQuantity() { return quantity; }

private:
	char name[20];
	char description[100];
	float weight;
	unsigned int quantity;
};

class Inventory
{
public:
	Inventory(const char* _owner)
	{
		int i = 0;
		while (1)
		{
			owner[i] = _owner[i];
			if (owner[i] == '\0')
				break;
			i++;
		}
	}

	void AddItem(Item* item)
	{
		itemList[idx] = item;
		idx++;
	}
	
	void PrintInventoryInfo()
	{
		cout << "Inventory of: " << owner << endl;
		for (int i = 0; i < idx; ++i)
		{
			cout << "Item: " << itemList[i]->GetName() << " - " << itemList[i]->GetDes();
			cout << " (x" << itemList[i]->GetQuantity() << ") | Weight: " << itemList[i]->GetWeight() << endl;
		}
	}

private:
	char owner[20];
	Item* itemList[20];
	int idx = 0;
};

int main()
{
	Inventory inventory("Player1");
	Item item1 = { "Potion", "Heals 50HP", 0.5f, 5 };
	Item item2 = { "Bomb", "Deals 100 Damage", 1.0f, 2 };

	inventory.AddItem(&item1);
	inventory.AddItem(&item2);

	inventory.PrintInventoryInfo();

	return 0;
}