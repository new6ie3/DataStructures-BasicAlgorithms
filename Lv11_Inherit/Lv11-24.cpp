#include <iostream>

using namespace std;
constexpr float PI = 3.14f;

class IDrawable
{
public:
	virtual void Draw() const = 0;
};

class Circle : public IDrawable
{
public:
	Circle(int r) : radius(r) {}

	void Draw() const override
	{
		cout << "면적 " << radius * radius * PI << " 인 원 생성" << endl;
	}

private:
	int radius;
};

class Rectangle : public IDrawable
{
public:
	Rectangle(int w, int h) : width(w), height(h) {}

	void Draw() const override
	{
		cout << "면적 " << width * height << " 인 네모 생성" << endl;
	}

private:
	int width;
	int height;
};

int main()
{
	Circle c(5);
	Rectangle r(4, 3);
	
	IDrawable* drawables[] = { &c, &r };
	for (int i = 0; i < 2; ++i)
		drawables[i]->Draw();

	return 0;
}