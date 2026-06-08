#include <iostream>

using namespace std;

class Date
{
public:
	Date(int _year, int _month, int _day) : year(_year), month(_month), day(_day){}
	Date(const char* _date)
	{
		int i = 0;
		while (1)
		{
			date[i] = _date[i];
			if (_date[i] == '\0')
				break;

			i++;
		}
	}

	void Show()
	{
		int i = 0;
		int count = 0;
		while (1)
		{
			if (date[i] == '\0')
			{
				cout << "ÀÏ" << endl;
				break;
			}

			if (date[i] == '/')
			{
				switch (count)
				{
				case 0: cout << "³â";  break;
				case 1: cout << "¿ù";  break;
				}
			}
			else
				cout << date[i];

			i++;
		}
	}

	int GetYear() { return year; }
	int GetMonth() { return month; }
	int GetDay() { return day; }

private:
	char date[20] = {};
	int year = 0;
	int month = 0;
	int day = 0;
};

int main()
{
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");

	independenceDay.Show();
	cout << birth.GetYear() << ',' << birth.GetMonth() << ',' << birth.GetDay() << endl;

	return 0;
}