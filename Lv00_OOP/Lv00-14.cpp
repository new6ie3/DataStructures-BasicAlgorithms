#include <iostream>

using namespace std;

class Author
{
public:
	Author(const char* _name, const char* _email, const char* _field)
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
			email[i] = _email[i];
			if (email[i] == '\0')
			{
				i = 0;
				break;
			}
			i++;
		}

		while (1)
		{
			field[i] = _field[i];
			if (field[i] == '\0')
				break;
			i++;
		}
	}

	char* GetName() { return name; }
	char* GetEmail() { return email; }
	char* GetField() { return field; }

private:
	char name[20];
	char email[20];
	char field[20];
};

class Article
{
public:
	Article(const char* _title, const char* _date, int _words, Author* _author) : words(_words), author(_author)
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
			date[i] = _date[i];
			if (date[i] == '\0')
				break;
			i++;
		}
	}

	void PrintInfo()
	{
		cout << "Article: " << title << " (" << words << "chars)" << "(date: " << date << ')' << endl;
		cout << "Author: " << author->GetName() << " | Email: " << author->GetEmail() << " | Field: " << author->GetField();
	}

private:
	char title[20];
	char date[20];
	int words;
	Author* author;
};

int main()
{
	Author author = { "Alice Kim", "alice@domain.com", "Computer Science" };
	Article article = { "Rise of AI", "2026-05-28", 1240, &author };

	article.PrintInfo();

	return 0;
}