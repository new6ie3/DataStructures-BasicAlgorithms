#include <iostream>

using namespace std;

/// <summary>
/// Espresso     :	1 / 1 / 0
/// Americano    :	1 / 2 / 0
/// SugerCoffee  :  1 / 2 / 1
/// </summary>
class CoffeeMachine
{
public:
	CoffeeMachine(int _coffee, int _water, int _sugar)
	: coffee(_coffee), water(_water), sugar(_sugar) {};


	void DrinkEspresso() 
	{
		coffee -= 1;
		water -= 1;
	}

	void DrinkAmericano()
	{
		coffee -= 1;
		water -= 2;
	}

	void DrinkSugerCoffee()
	{
		coffee -= 1;
		water -= 2;
		sugar -= 1;
	}

	void Fill()
	{
		coffee += 5;
		water += 5;
		sugar += 5;
	}

	void Show()
	{
		cout << "[남은 재료]" << endl;
		cout << "커피 : " << coffee << endl;
		cout << "물 : " << water << endl;
		cout << "설탕 : " << sugar << endl;
		cout << endl;
	}

private:
	int coffee;
	int water;
	int sugar;
};

int main()
{
	CoffeeMachine java(5, 10, 3);

	java.DrinkEspresso();
	java.Show();

	java.DrinkAmericano();
	java.Show();

	java.DrinkSugerCoffee();
	java.Show();

	java.Fill();
	java.Show();

	return 0;
}