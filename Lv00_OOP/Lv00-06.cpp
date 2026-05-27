#include <iostream>

using namespace std;

class Point
{
public:
	Point(int _x, int _y, int _z, char _tag)
		: x(_x), y(_y), z(_z), tag(_tag){}

	void PrintInfo()
	{
		cout << "Point Tag: " << tag << " | Coordinates: (" << x << ", " << y << ", " << z << ')';
	}

private:
	int x;
	int y;
	int z;
	char tag;
};


int main()
{
	Point point(3, 4, 7, 'A');
	point.PrintInfo();

	return 0;
}