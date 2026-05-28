#include <iostream>

using namespace std;

class Book
{
public:
	Book(const char* _title, const char* _author, const char* _genre, int _page) : page(_page)
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
			author[i] = _author[i];
			if (author[i] == '\0')
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
				break;
			i++;
		}
	}

	char* GetTitle() { return title; }
	char* GetAuthor() { return author; }
	char* GetGenre() { return genre; }
	int GetPage() { return page; }

private:
	char title[50];
	char author[20];
	char genre[20];
	int page;
};

class Library
{
public:
	Library(const char* _location, const char* _manager)
	{
		int i = 0;
		while (1)
		{
			location[i] = _location[i];
			if (location[i] == '\0')
			{
				i = 0;
				break;
			}
			i++;
		}

		while (1)
		{
			manager[i] = _manager[i];
			if (manager[i] == '\0')
				break;
			i++;
		}
	}

	void SetBook(Book* book)
	{
		books[idx] = book;
		idx++;
	}

	void PrintLibraryInfo()
	{
		cout << "Library: " << location << " | Manager: " << manager << endl;
	}

	void PrintBooksInfo()
	{
		cout << "Books:" << endl;
		for (int i = 0; i < idx; ++i)
		{
			cout << "- " << books[i]->GetTitle() << " by " << books[i]->GetAuthor();
			cout << " (" << books[i]->GetGenre() << ", " << books[i]->GetPage() << "p)" << endl;
		}
	}

private:
	char location[50];
	char manager[20];

	Book* books[20] = {};
	int idx = 0;
};

int main()
{
	Library library = { "Central Library", "Ms. Kim"};
	Book book1 = { "1984", "Orwell", "Dystopia", 320 };
	Book book2 = { "Dune", "Herbert", "Sci-Fi", 500 };

	library.SetBook(&book1);
	library.SetBook(&book2);
	library.PrintLibraryInfo();
	library.PrintBooksInfo();
	return 0;
}