#include <iostream>

using namespace std;

class Engine
{
public:
	Engine(const char* _fuel, const char* _type, int _hp) : hp(_hp)
	{
		int i = 0;
		while (1)
		{
			fuel[i] = _fuel[i];
			if (fuel[i] == '\0')
			{
				i = 0;
				break;
			}
			i++;
		}

		while (1)
		{
			type[i] = _type[i];
			if (type[i] == '\0')
				break;
			i++;
		}
	}

	char* GetFuel() { return fuel; }
	char* GetType() { return type; }
	int GetHp() { return hp; }

private:
	char fuel[20];
	char type[20];
	int hp;
};

class Car
{
public:
	Car(const char* _brand, const char* _model, int _years, Engine* _engine) : years(_years), engine(_engine)
	{
		int i = 0;
		while (1)
		{
			brand[i] = _brand[i];
			if (brand[i] == '\0')
			{
				i = 0;
				break;
			}
			i++;
		}

		while (1)
		{
			model[i] = _model[i];
			if (model[i] == '\0')
				break;
			i++;
		}
	}

	void PrintCarInfo()
	{
		cout << "Car: " << brand << ' ' << model << " (" << years << ')' << endl;
		cout << "Engine: " << engine->GetHp() << "HP | Fuel: " << engine->GetFuel() << " | Type: " << engine->GetType();
	}

private:
	char brand[20];
	char model[20];
	int years;
	Engine* engine;
};

int main()
{
	Engine engine = { "Gasoline", "V8", 450 };
	Car car = { "Ford", "Mustang", 2022, &engine};

	car.PrintCarInfo();

	return 0;
}