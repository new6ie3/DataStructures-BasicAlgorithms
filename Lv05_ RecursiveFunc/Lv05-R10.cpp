#include <iostream>

using namespace std;

class Tower
{
public:
	Tower() : meter(50){};
	Tower(int _meter) : meter(_meter) {};

	int GetHeight() { return meter; }

private:
	int meter;

};


int main()
{
	Tower myTower;
	Tower seoulTower(100);

	cout << "높이는 " << myTower.GetHeight() << "미터" << endl;
	cout << "높이는 " << seoulTower.GetHeight() << "미터" << endl;
	return 0;
}