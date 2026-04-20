#include <iostream>

using namespace std;

void print()
{
    int v[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    for (int i = 0; i < 10; i++)
    {
        cout << v[i] << "\n";
    }
}

void print2()
{
    int v[] = { 10, 11, 12, 13, 14, 15, 16, 17, 18, 19 };

    for (int i : v)
    {
        cout << i << "\n";
    }
}

void print3()
{
    int v[] = { 20, 21, 22, 23, 24, 25, 26, 27, 28, 29 };

    for (int& i : v)
    {
        ++i;
        cout << i << "\n";
    }
}

int countX(const char* p, char x)
{
    if (p == nullptr)
        return 0;

    int count = 0;
    while (*p)
    {
        if (*p == x)
            ++count;
        ++p;
    }
    return count;
}

int main()
{
    cout << countX("abracadabra", 'a');
    return 0;
}