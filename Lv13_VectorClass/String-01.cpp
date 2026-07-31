#include <iostream>
#include <cstring>

using namespace std;

char* Reverse(const char* str)
{
    size_t len = strlen(str);

    char* result = new char[len + 1];
    for (size_t i = 0; i < len; i++)
    {
        result[i] = str[len - 1 - i];
    }

    result[len] = '\0';

    return result;
}

int main()
{
    char s[105] = "hello";

    char* r = Reverse(s);
    cout << r << endl;

    delete[] r;
}