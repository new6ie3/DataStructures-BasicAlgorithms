#include <iostream>

constexpr float PI = 3.14f;
using namespace std;

class Circle
{
public:
	Circle(int _radius, const char* _color, bool _filled, float _opacity) : radius(_radius), filled(_filled), opacity(_opacity)
	{
		int i = 0;
		while (true)
		{
			color[i] = _color[i];

			if (color[i] == '\0')
				break;

			i++;
		}
	}

	void PrintInfo()
	{
		cout << "Circle" << endl;
		cout << "Radius: " << radius << endl;
		cout << "Color: " << color << endl;
		cout << "Filled: "; filled ? cout << "Yes" << endl : cout << "No" << endl;
		cout << "Opacity: " << opacity << endl;
		cout << "Area: " << GetArea() << endl;
		cout << "Circumference: " << GetCircumference() << endl;
		
	}

private:
	float GetArea() { return radius * radius * PI; }
	float GetCircumference() { return 2.0f * radius * PI; }

	char color[20];
	int radius;
	bool filled;
	float opacity;
};

int main()
{
	Circle circle(5, "Red", 1, 0.75);
	circle.PrintInfo();

	return 0;
}