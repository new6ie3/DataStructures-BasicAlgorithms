#include <iostream>

using namespace std;

int ary[4][4] = {};
int dir[4][2] =
{
	+0, -1,
	+0, +1,
	-1, +0,
	+1, +0,
};

void Build(size_t dy, size_t dx, int n = 1)
{
    if (dy < 0 || dy >= 4 || dx < 0 || dx >= 4)
        return;

    if (ary[dy][dx] != 0 && ary[dy][dx] <= n)
        return;

    ary[dy][dx] = n;

	for (int i = 0; i < 4; ++i)
	{
		Build(dy + dir[i][0], dx + dir[i][1], n + 1);
	}
}

int main()
{
	size_t y = 2, x = 2;
	cin >> y >> x;

	Build(y, x);

	return 0;
}