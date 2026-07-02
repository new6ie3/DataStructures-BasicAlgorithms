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
	Circle(float _radius) : radius(_radius) {}

	float Area() const override
	{
		return radius * radius * PI;
	}

private:
	float radius;
};

class Square : public Shape
{
public:
	Square(float _length) : length(_length) {}

	float Area() const override
	{
		return length * length;
	}

private:
	float length;
};


int main()
{
	Circle c(5.0f);
	Square s(4.0f);

	Shape* shapes[] = { &c, &s };
	for (int i = 0; i < 2; ++i)
		cout << shapes[i]->Area() << endl;

	return 0;
}