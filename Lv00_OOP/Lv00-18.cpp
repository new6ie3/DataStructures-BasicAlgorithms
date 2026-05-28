#include <iostream>

using namespace std;

class Movie
{
public:
	Movie(const char* _title, const char* _genre, const char* _grade, int _duration) : duration(_duration)
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
			grade[i] = _grade[i];
			if (grade[i] == '\0')
				break;
			i++;
		}
	}

	char* GetTitle() { return title; }
	char* GetGenre() { return genre; }
	char* GetGrade() { return grade; }
	int GetDuration() { return duration; }

private:
	char title[50];
	char genre[20];
	char grade[10];
	int duration;
};

class Theater
{
public:
	Theater(const char* _name, const char* _location)
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
			location[i] = _location[i];
			if (location[i] == '\0')
				break;
			i++;
		}
	}
	
	void AddMovie(Movie* movie)
	{
		movieList[idx] = movie;
		idx++;
	}

	void PrintTheaterInfo()
	{
		cout << "Theater: " << name << " | Location: " << location << endl;
		cout << "Now Showing: " << endl;

		for (int i = 0; i < idx; ++i)
		{
			cout << " - " << movieList[i]->GetTitle() << " (" << movieList[i]->GetDuration();
			cout << " min, " << movieList[i]->GetGenre() << ", " << movieList[i]->GetGrade() << ')' << endl;
		}

	}

private:
	char name[20];
	char location[20];

	Movie* movieList[10];
	int idx = 0;
};

int main()
{
	Theater theater = {"CGV Gangnam", "Seoul"};
	Movie movie1 = { "Avatar", "Fantasy", "12+", 162 };
	Movie movie2 = { "Titanic", "Romance", "All", 195 };

	theater.AddMovie(&movie1);
	theater.AddMovie(&movie2);
	theater.PrintTheaterInfo();

	return 0;
}