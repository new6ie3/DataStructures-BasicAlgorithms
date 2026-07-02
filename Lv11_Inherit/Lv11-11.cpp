#include <iostream>

using namespace std;

class Exercise
{
public:
	virtual void PrintCalories() const
	{
		cout << time << " Calories" << endl;
	}

protected:
	unsigned int time;
};

class Running : public Exercise
{
public:
	Running(int _time)
	{
		time = _time;
	}

	void PrintCalories() const override
	{
		cout << time * 10 << " Calories" << endl;
	}
};

class Cyclling : public Exercise
{
public:
	Cyclling(int _time)
	{
		time = _time;
	}

	void PrintCalories() const override
	{
		cout << time * 6 << " Calories" << endl;
	}
};


int main()
{
	Running run(30);
	Cyclling cyc(60);

	Exercise* logs[] = { &run, &cyc };
	for (int i = 0; i < 2; ++i)
		logs[i]->PrintCalories();

	return 0;
}