#include <iostream>

using namespace std;

class Book
{
public:
	virtual void Display() const = 0;

protected:
	char title[20];
	char author[20];
};

class EBook : public Book
{
public:
	EBook(const char* _title, const char* _author, float _size) : size(_size)
	{
		strcpy_s(title, _title);
		strcpy_s(author, _author);
	}
	virtual void Display() const override
	{
		cout << "Title: " << title << " | Author: " << author << " | File Size: " << size << endl;
	}

private:
	float size;
};

class PaperBook : public Book
{
public:
	PaperBook(const char* _title, const char* _author, int _page) : page(_page)
	{
		strcpy_s(title, _title);
		strcpy_s(author, _author);
	}
	virtual void Display() const override
	{
		cout << "Title: " << title << " | Author: " << author << " | Page: " << page << endl;
	}

private:
	int page;
};

int main()
{
	EBook eb("Clean Code", "Robert Martin", 5.2);
	PaperBook pb("Refactoring", "Martin Fowler", 450);

	Book* books[] = { &eb, &pb };
	for (int i = 0; i < 2; ++i)
		books[i]->Display();

	return 0;
}