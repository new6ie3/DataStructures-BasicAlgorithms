#include <iostream>

using namespace std;

class Rectangle
{
public:
	Rectangle(int _width, int _height, int _border, const char* _color) : width(_width), height(_height), borderThickness(_border)
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
		cout << "Color: " << color << ", Border: " << borderThickness << "px" << endl;
		cout << "Area: " << GetArea() << ", Perimeter: " << GetPerimeter() << endl;
	}

private:
	int GetArea(){ return width * height; }
	int GetPerimeter() { return width + width + height + height; }

	int width;
	int height;
	int borderThickness;
	char color[20];
};

int main()
{
	Rectangle rect(20, 10, 2, "Blue");
	rect.PrintInfo();

	return 0;
}