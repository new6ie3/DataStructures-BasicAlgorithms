#include <iostream>

using namespace std;

class Student
{
public:
	virtual char GetGrade() const = 0;

protected:
	char name[20];
	int score;
};

class UndergraduateStudent : public Student
{
public:
	UndergraduateStudent(const char* _name, int _score)
	{
		strcpy_s(name, _name);
		score = _score;
	}

	char GetGrade() const override
	{
		if (score >= 90)
			return 'A';
		else return 'B';
	}
};

class GraduateStudent : public Student
{
public:
	GraduateStudent(const char* _name, int _score)
	{
		strcpy_s(name, _name);
		score = _score;
	}

	char GetGrade() const override
	{
		if (score >= 95)
			return 'A';
		else return 'B';
	}
};

int main()
{
	UndergraduateStudent us("Kim", 92);
	GraduateStudent gs("Lee", 92);

	Student* students[] = { &us, &gs };
	for (int i = 0; i < 2; ++i)
		cout << students[i]->GetGrade() << endl;

	return 0;
}