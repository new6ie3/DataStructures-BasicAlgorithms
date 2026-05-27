#include <iostream>

using namespace std;

class Timer
{
public:
	Timer(const char* _name, float _totalSec, float _elapsed, bool _started)
		: totalSeconds(_totalSec), elapsed(_elapsed), started(_started)
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
		cout << "Timer " << '"' << name << '"' << ' '; started ? cout << "started." << endl : cout << "Unstarted." << endl;
		cout << "Elapsed: " << elapsed << "s / Total: " << totalSeconds << 's' << endl;
	}

private:
	char name[20];
	float totalSeconds;
	float elapsed;
	bool started;
};

int main()
{
	Timer timer("Cooking", 300, 90, 1);
	timer.PrintInfo();

	return 0;
}