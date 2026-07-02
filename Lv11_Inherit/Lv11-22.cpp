#include <iostream>

using namespace std;
constexpr float PI = 3.14f;

class Shape
{
public:
	virtual float Area() const = 0;
	virtual float Perimeter() const = 0;
};

class Rectangle : public Shape
{
public:
	Rectangle(int w, int h) : width(w), height(h) {}

	float Area() const override
	{
		return width * height;
	}

	float Perimeter() const override
	{
		return width + width + height + height;
	}

private:
	int width;
	int height;
};

class Circle : public Shape
{
public:
	Circle(int r) :radius(r) {}

	float Area() const override
	{
		return radius * radius * PI;
	}

	float Perimeter() const override
	{
		return (radius + radius) * PI;
	}

private:
	int radius;
};

class Triangle : public Shape
{
public:
	Triangle(int _a, int _b, int _c) : a(_a), b(_b), c(_c) {}

	float Area() const override
	{
		return a * b * 0.5f;
	}

	float Perimeter() const override
	{
		return a * b * c;
	}

private:
	int a;
	int b;
	int c;
};

int main()
{
	Rectangle r(4, 5);
	Circle c(3);
	Triangle t(3, 4, 5);

	Shape* shapes[] = { &r, &c, &t };
	for (int i = 0; i < 3; ++i)
	{
		cout << "Area: " << shapes[i]->Area() << endl;
		cout << "Perimeter: " << shapes[i]->Perimeter() << endl;
	}

	return 0;
}