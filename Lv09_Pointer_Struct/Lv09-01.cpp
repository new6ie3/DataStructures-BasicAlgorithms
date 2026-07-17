#include <iostream>

using namespace std;

int main()
{
	int c = 3;
	int* b = &c;
	int** a = &b; 
	int** t = &b;;

	int g = 9;

	int f = 6;
	int* k = &f;
	int** p = &k;

	cout << *a << endl; 
	cout << k << endl; 
	cout << *t << endl;
	cout << &c << endl;

	cout << *a << endl; 
	cout << **p << endl; 
	cout << k << endl; 
	cout << *p << endl; 


	return 0;
}
