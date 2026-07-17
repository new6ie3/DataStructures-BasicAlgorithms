#include <iostream>

using namespace std;

struct Robot
{
	int a;
	int b;
	char t[6];
};

int main()
{
	Robot robert;
	cin >> robert.a >> robert.b >> robert.t;
	
	Robot* p = &robert;
	cout << p->a + p->b << ' ' << p->t;

	return 0;
}