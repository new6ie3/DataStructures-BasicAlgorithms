#include <iostream>
#include <vector>

int path[3] = {};

void DFS(std::vector<int>& vec, int now = 1, int level = 0)
{
    if (level > 2)
        return;

    if (now >= vec.size())
        return;

    path[level] = vec[now];

    if (vec[now] % 2 == 0)
    {
        path[level + 1] = 0;

        for (size_t i = 0; i < 3; ++i)
        {
            if(path[i] != 0)
                std::cout << path[i] << ' ';
        }
        std::cout << std::endl;
    }

    DFS(vec, now * 2, level + 1);
    DFS(vec, now * 2 + 1, level + 1);

    path[level] = 0;
}

int main()
{
    std::vector<int> vec;
	while (vec.size() < 8)
	{
		int num;
		std::cin >> num;

		vec.push_back(num);
	}

	DFS(vec);

	return 0;
}