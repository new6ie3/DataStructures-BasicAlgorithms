#include <iostream>

using namespace std;

int main()
{
	int G;
	cin >> G;

	int *p = &G;
	int *K = &G;

	int** t = &p;
	int** Q = &K;

	cout << **t << ' ';
	cout << **Q << ' ';

	return 0;
}