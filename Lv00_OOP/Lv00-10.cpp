#include <iostream>

using namespace std;

class Movie
{
public:
	Movie(const char* _title, const char* _genre, int _duration, int _ageRating, const char* _director)
		: duration(_duration), ageRating(_ageRating)
	{
		int i = 0;
		while (1)
		{
			title[i] = _title[i];

			if (title[i] == '\0')
			{
				i = 0;
				break;
			}
			i++;
		}

		while (1)
		{
			genre[i] = _genre[i];

			if (genre[i] == '\0')
			{
				i = 0;
				break;
			}
			i++;
		}

		while (1)
		{
			director[i] = _director[i];

			if (director[i] == '\0')
				break;
			i++;
		}
	}

	void PrintInfo()
	{
		cout << "[Movie]" << endl;
		cout << "Title: " << title << endl;
		cout << "Duration: " << duration << " min" << endl;
		cout << "Genre: " << genre << endl;
		cout << "Rated: " << ageRating << '+' << endl;
		cout << "Directed by: " << director << endl;
	}

private:
	char title[20];
	char genre[20];
	int duration;
	int ageRating;
	char director[20];
};

int main()
{
	Movie movie("Intersteller", "Sci-Fi", 169, 12, "Nolan");
	movie.PrintInfo();


	return 0;
}