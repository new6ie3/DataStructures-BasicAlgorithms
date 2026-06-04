#include <iostream>

using namespace std;

class Time
{
public:
	Time(int _hour, int _minute, int _second) : hour(_hour), minute(_minute), second(_second) {};
	Time(){};

	Time& operator+(Time other)
	{
		Time time;
		time.hour = other.hour + this->hour;
		time.minute = other.minute + this->minute;
		time.second = other.second + this->second;

		if (time.second / 60.0f)
		{
			time.second %= 60;
			time.minute++;
		}
		if (time.minute / 60.0f)
		{
			time.minute %= 60;
			time.hour++;
		}

		return time;
	}

	void Print()
	{
		cout << hour << " ½Ã " << minute << " ºÐ " << second << " ÃÊ " << endl;
	}
private:
	int hour;
	int minute;
	int second;
};

int main()
{
	Time time1(4, 50, 40);
	Time time2(3, 40, 30);
	Time time3 = time1 + time2;

	time1.Print();
	time2.Print();
	time3.Print();


	return 0;
}