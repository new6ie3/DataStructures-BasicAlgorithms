#include <iostream>

using namespace std;

class Person
{
public:
	string GetName() { return name; }
	string GetTel() { return tel; }

	void Set(string _name, string _tel)
	{
		name = _name;
		tel = _tel;
	}

private:
	string name;
	string tel;
};

int main()
{
	Person persons[3];
	for (int i = 0; i < 3; ++i)
	{
		string name, tel;
		cin >> name >> tel;

		persons[i].Set(name, tel);
		cout << "이름 : " << persons[i].GetName() << ", 전화번호 : " << persons[i].GetTel() << endl;
	}

	return 0;
}