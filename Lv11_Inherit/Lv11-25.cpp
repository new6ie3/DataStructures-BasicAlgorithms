#include <iostream>

using namespace std;

class IRenderable
{
public:
	virtual void Render() const = 0;
};
class IUpdatable
{
public:
	virtual void Update() const = 0;
};

class GameObject : public IRenderable, public IUpdatable
{
public:
	void Render() const override
	{
		cout << "Render override" << endl;
	}

	void Update() const override
	{
		cout << "Update override" << endl;
	}

protected:
	char name[20];
};

class Player : public GameObject
{
public:
	Player(const char* _name)
	{
		strcpy_s(name, _name);
	}

	void Render() const override
	{
		cout << "Player Render override" << endl;
	}

	void Update() const override
	{
		cout << "Player Update override" << endl;
	}
};

class Enemy : public GameObject
{
public:
	Enemy(const char* _name)
	{
		strcpy_s(name, _name);
	}

	void Render() const override
	{
		cout << "Enemy Render override" << endl;
	}

	void Update() const override
	{
		cout << "Enemy Update override" << endl;
	}
};

int main()
{
	Player p("Hero");
	Enemy e("Goblin");

	IRenderable* renderables[] = { &p, &e };
	IUpdatable* updatables[] = { &p, &e };
	for (int i = 0; i < 2; ++i)
	{
		updatables[i]->Update();
		renderables[i]->Render();
	}

	return 0;
}