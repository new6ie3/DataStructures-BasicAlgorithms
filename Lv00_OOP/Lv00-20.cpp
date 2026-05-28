#include <iostream>

using namespace std;

class Student
{
public:
	Student(const char* _name, const char* _number, int _grade, const char* _sub) : grade(_grade)
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
			number[i] = _number[i];
			if (number[i] == '\0')
			{
				i = 0;
				break;
			}
			i++;
		}

		while (1)
		{
			sub[i] = _sub[i];
			if (sub[i] == '\0')
				break;
			i++;
		}
	}

	char* GetName() { return name; }
	char* GetNumber() { return number; }
	char* GetSub() { return sub; }
	int GetGrade() { return grade; }

private:
	char name[20];
	char number[20];
	int grade;
	char sub[20];
};


class Course
{
public:
	Course(const char* _name, const char* _instructor, int _capacity) : capacity(_capacity)
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
			instructor[i] = _instructor[i];
			if (instructor[i] == '\0')
				break;
			i++;
		}
	}

	void AddStudent(Student* student)
	{
		students[idx] = student;
		idx++;
	}

	void PrintCourseInfo()
	{
		cout << "Course: " << name << " | Instructor: " << instructor << " | Capacity: " << capacity << endl;
		cout << "Students:" << endl;

		for (int i = 0; i < idx; ++i)
		{
			cout << " - " << students[i]->GetName() << " (" << students[i]->GetSub() << ", " << students[i]->GetGrade();
			switch (students[i]->GetGrade())
			{
			case 1: cout << "st year)" << endl;  break;
			case 2: cout << "nd year)" << endl;  break;
			case 3: cout << "rd year)" << endl;  break;
			default: cout << "th year)" << endl;
			}
		}
	}

private:
	char name[20];
	char instructor[20];
	int capacity;

	Student* students[30];
	int idx = 0;
};


int main()
{
	Student student1 = { "Alice", "111-111", 2, "CS" };
	Student student2 = { "Bob", "111-112", 1, "EE" };
	Student student3 = { "Charlie", "111-113", 3, "CS" };

	Course course = { "Programming 101", "Dr. Kim", 30 };

	course.AddStudent(&student1);
	course.AddStudent(&student2);
	course.AddStudent(&student3);

	course.PrintCourseInfo();

	return 0;
}