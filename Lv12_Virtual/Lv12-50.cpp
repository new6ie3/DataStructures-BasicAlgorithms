#include <iostream>

using namespace std;

class GameObject
{
public:
	virtual void Update() = 0;
	virtual void Render() = 0;

protected:
	string name;
};

class Icontrollable
{
public:
	virtual void OnInput(string key) = 0;
};

class ICollectable
{
public:
	virtual void OnCollect() = 0;
};

class Character : public GameObject, public Icontrollable
{
public:
	Character(string _name)
	{
		name = _name;
	}

	void OnInput(string key) override
	{
		// key값에 따른 행동 수행
	}

	void Update() override
	{
		cout << "Character Update" << endl;
	}
	void Render() override
	{
		cout << "Character Render" << endl;
	}
};

class Item : public GameObject, public ICollectable
{
public:
	Item(string _name)
	{
		name = _name;
	}

	void OnCollect() override {}

	void Update() override
	{
		cout << "Item Update" << endl;
	}
	void Render() override
	{
		cout << "Item Render" << endl;
	}
};

class Effect : public GameObject
{
public:
	Effect(string _name)
	{
		name = _name;
	}

	void Update() override
	{
		cout << "Effect Update" << endl;
	}
	void Render() override
	{
		cout << "Effect Render" << endl;
	}
};

class GameManager
{
public:
	void AddObject(GameObject* object)
	{
		objects[idx] = object;
		idx++;
	}

	void Update()
	{
		for (int i = 0; i < idx; ++i)
		{
			objects[i]->Update();
		}
	}

	void Render()
	{
		for (int i = 0; i < idx; ++i)
		{
			objects[i]->Render();
		}
	}

private:
	GameObject* objects[20];
	int idx = 0;
};

int main()
{
	GameManager gameManger;
	Character player("Hero");
	Item sword("Sword");
	Effect explosion("Boom");

	GameObject* objects[] = { &player, &sword, &explosion };
	for (int i = 0; i < 3; ++i)
	{
		gameManger.AddObject(objects[i]);
		objects[i]->Update();
		objects[i]->Render();
	}

	if (Icontrollable* ctrl = dynamic_cast<Icontrollable*>(&player))
	{
		ctrl->OnInput("ctrl");
	}

	gameManger.Update();
	gameManger.Render();

	return 0;
}
