#include <iostream>

using namespace std;

struct Vector2
{
	float x, y;
	Vector2(float x_, float y_) : x(x_), y(y_) {}

	Vector2 operator+(Vector2 other)
	{
		return Vector2(this->x + other.x, this->y + other.y);
	}

	Vector2 operator-(Vector2 other)
	{
		return Vector2(this->x - other.x, this->y - other.y);
	}

	Vector2 operator*(Vector2 other)
	{
		return Vector2(this->x * other.x, this->y * other.y);
	}

	bool operator==(Vector2 other)
	{
		return this->x == other.x && this->y == other.y;
	}

	bool operator!=(Vector2 other)
	{
		return this->x != other.x || this->y != other.y;
	}

	Vector2 operator++(int value)
	{
		return Vector2(this->x++, this->y++);
	}

	Vector2 operator--(int value)
	{
		return Vector2(this->x--, this->y--);
	}

	Vector2 operator+=(Vector2 other)
	{
		this->x += other.x;
		this->y += other.y;

		return *this;
	}

	Vector2 operator-=(Vector2 other)
	{
		this->x -= other.x;
		this->y -= other.y;

		return *this;
	}

	Vector2 operator*=(Vector2 other)
	{
		this->x *= other.x;
		this->y *= other.y;

		return *this;
	}
};

int main()
{
	Vector2 a(1, 1);
	Vector2 b(2, 2);

	Vector2 c = a + b;
	Vector2 d = a - b;
	Vector2 e = a * b;

	bool isSame = a == b;
	a++;
	b--;
	c += d;
	d -= e;

	return 0;
}