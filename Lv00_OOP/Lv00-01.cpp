#include <iostream>

using namespace std;

class Person
{
public:
	Person(const char* _name, int _age, bool _gender, const char* _nationality) : age(_age), gender(_gender)
	{
		int i = 0;
		while (true)
		{
			name[i] = _name[i];
			if (name[i] == '\0')
			{
				i = 0;
				break;
			}
			i++;
		}

		while (true)
		{
			nationality[i] = _nationality[i];

			if (nationality[i] == '\0')
				break;

			i++;
		}
	}

	void Introduce()
	{
		cout << "My name is "<< name << ", " << age << " years old, ";
		gender ? cout << "Male" : cout << "Female" << ", from" << nationality;
	}

private:
	char name[256];
	int age;
	bool gender;
	char nationality[256];
};

int main()
{
	Person person("Alice", 25, 0, "Canada");
	person.Introduce();

	return 0;
}
