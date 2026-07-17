#include <iostream>

using namespace std;

bool Check_Upper(char* ch)
{
	if (*ch >= 'A' && *ch <= 'Z')
		return true;

	return false;
}

int main()
{
	char* a = new char;
	char* b = new char;
	char* c = new char;

	cin >> *a >> *b >> *c;

	bool resultA = Check_Upper(a);
	bool resultB = Check_Upper(b);
	bool resultC = Check_Upper(c);

	if (resultA && resultB && resultC)
		cout << "모두대문자";
	else
		cout << "소문자 있음";

	delete a;
	delete b;
	delete c;

	return 0;
}