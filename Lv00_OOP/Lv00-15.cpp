#include <iostream>

using namespace std;

class Student
{
public:
	Student(const char* _name, const char _group, int _grade, int _score) : group(_group), grade(_grade), score(_score)
	{
		int i = 0;
		while (1)
		{
			name[i] = _name[i];
			if (name[i] == '\0')
				break;
			i++;
		}
	}

	char* GetName() { return name; }
	char GetGroup() { return group; }
	int GetGrade() { return grade; }
	int GetScore() { return score; }

private:
	char name[20];
	char group;
	int grade;
	int score;
};

class Teacher
{
public:
	Teacher(const char* _name, const char* _subject, int _years) : years(_years)
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
			subject[i] = _subject[i];
			if (subject[i] == '\0')
				break;
			i++;
		}
	}

	void AddStudent(Student* student)
	{
		students[idx] = student;
		idx++;
	}

	void PrintTeacherInfo()
	{
		cout << "Teacher: " << name << " (" << subject << ", " << years << ')' << endl;
	}

	void PrintStudentsInfo()
	{
		cout << "Students:" << endl;
		for (int i = 0; i < idx; ++i)
		{
			cout << " - " << students[i]->GetName() <<  "(Grade " << students[i]->GetGrade();
			cout << ", Class " << students[i]->GetGroup() << "): " << students[i]->GetScore() << endl;
		}
	}

private:
	char name[20];
	char subject[20];
	int years;

	Student* students[20];
	int idx = 0;
};

int main()
{
	Teacher teacher = { "Mr. Lee", "Math", 10 };
	Student student1 = { "Tom", 'A', 2, 85 };
	Student student2 = { "Jane", 'A', 2, 90 };
	Student student3 = { "Sam", 'A', 2, 75 };

	teacher.AddStudent(&student1);
	teacher.AddStudent(&student2);
	teacher.AddStudent(&student3);

	teacher.PrintTeacherInfo();
	teacher.PrintStudentsInfo();

	return 0;
}