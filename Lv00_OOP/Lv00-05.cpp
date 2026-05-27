#include <iostream>

using namespace std;

class Student
{
public:
	Student(const char* _name, int _id, int _math, int _english, int _science)
		: id(_id), math(_math), english(_english), science(_science)
	{
		int i = 0;
		while (true)
		{
			name[i] = _name[i];

			if (name[i] == '\0')
				break;

			i++;
		}
	}

	void PrintInfo()
	{
		cout << "Name: " << name << "(ID: " << id << ')' << endl;
		cout << "Math: " << math << ", English: " << english << ", Science: " << science << endl;
		cout << "Average Score: " << GetAverage() << endl << endl;
	}

private:
	float GetAverage() { return (english + math + science) / 3.0f; }

	char name[50];
	int id;
	int english;
	int math;
	int science;
};

int main()
{
	Student john("John", 20231234, 85, 78, 92);
	Student minho("Minho", 20231235, 85, 88, 92);
	Student gahong("Gahong", 20231236, 95, 78, 92);

	john.PrintInfo();
	minho.PrintInfo();
	gahong.PrintInfo();

	return 0;
}