#include <iostream>

using namespace std;
constexpr float PI = 3.14f;

class Shape
{
public:
	virtual float Area() const = 0;
};

class Circle : public Shape
{
public:
	Circle(float r) : radius(r) {}
	float Area() const override { return radius * radius * PI; }

private:
	float radius;
};

class Rectangle : public Shape
{
public:
	Rectangle(float w, float h) : width(w), height(h) {}
	float Area() const override { return width * height; }

private:
	float width;
	float height;
};

int main()
{
	Circle c(3.0f);
	Rectangle r(4.0f, 2.0f);

	Shape* shapes[] = { &c, &r };
	for (int i = 0; i < 2; ++i)
		cout << shapes[i]->Area() << endl;

	return 0;
}