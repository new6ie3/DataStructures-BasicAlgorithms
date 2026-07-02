#include <iostream>

using namespace std;

class FileSystemNode
{
public:
	virtual int GetSize() const = 0;
	virtual void Display() const = 0;

protected:
	char name[20];
};

class File : public FileSystemNode
{
public:
	File(const char* _name, int _size) : size(_size)
	{
		strcpy_s(name, _name);
	}

	int GetSize() const override { return size; }
	void Display() const override
	{
		cout << name << " File" << endl;
	}

private:
	int size;
};

class Folder : public FileSystemNode
{
public:
	Folder(const char* _name)
	{
		strcpy_s(name, _name);
	}

	int GetSize() const override
	{
		int sizeAll = 0;
		for (int i = 0; i < idx; ++i)
		{
			sizeAll += files[i]->GetSize();
		}

		return sizeAll;
	}

	void Display() const override
	{
		for (int i = 0; i < idx; ++i)
			files[i]->Display();
	}

	void Add(FileSystemNode* file)
	{
		files[idx] = file;
		idx++;
	}

private:
	FileSystemNode* files[10];
	int idx = 0;
};

int main()
{
	File f1("doc.txt", 100);
	File f2("image.png", 500);

	Folder folder("MyFolder");
	folder.Add(&f1);
	folder.Add(&f2);

	FileSystemNode* nodes[] = { &f1, &folder };
	for (int i = 0; i < 2; ++i)
	{
		nodes[i]->Display();
		cout << "Size: " << nodes[i]->GetSize() << endl;
	}

	return 0;
}