#include <iostream>

using namespace std;

class Book
{
public:
	Book(const char* _title, const char* _author, const char* _publisher, float _price) : price(_price)
	{
		int i = 0;
		while (true)
		{
			title[i] = _title[i];
			if (title[i] == '\0')
			{
				i = 0;
				break;
			}
			i++;
		}

		while (true)
		{
			author[i] = _author[i];
			if (author[i] == '\0')
			{
				i = 0;
				break;
			}
			i++;
		}

		while (true)
		{
			publisher[i] = _publisher[i];
			if (publisher[i] == '\0')
			{
				i = 0;
				break;
			}
			i++;
		}
	}

	void PrintInfo()
	{
		cout << "[Book]" << endl;
		cout << "Title: " << title << endl;
		cout << "Author: " << author << endl;
		cout << "Publisher: " << publisher << endl;
		cout << "Price: $" << price << endl;
	}

private:
	char title[256];
	char author[256];
	char publisher[256];
	float price;
};

int main()
{
	Book book("1984", "George Orwell", "Penguin", 15.99);
	book.PrintInfo();

	return 0;
}