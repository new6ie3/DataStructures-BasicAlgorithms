#include <iostream>

using namespace std;

class Calculator
{
public:
	int Sum(int a, int b) { return a + b; }
	int Sub(int a, int b) { return a - b; }
	int Mul(int a, int b) { return a * b; }
	int Div(int a, int b) { return a / b; }
	int Remain(int a, int b) { return a % b; }
};

int main()
{
	int a, b;
	cin >> a >> b;

	Calculator cal;
	
	cout << "µ¡¼À : " << cal.Sum(a, b) << endl;
	cout << "»¬¼À : " << cal.Sub(a, b) << endl;
	cout << "°ö¼À : " << cal.Mul(a, b) << endl;
	cout << "³ª´°¼À : " << cal.Div(a, b) << endl;
	cout << "³ª¸ÓÁö : " << cal.Remain(a, b) << endl;

	return 0;
}