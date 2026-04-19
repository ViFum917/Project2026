#include <iostream>

using namespace std;

double Square(double x)
{
    return x*x;
}

void PrintSquare(double x)
{
    cout << "The square of " << x << " is " << Square(x);
}

int main()
{
    PrintSquare(69420);
}