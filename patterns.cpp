#include <iostream>
using namespace std;

void printReverseRightTriangle(int n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int star = 1; star <= n - row + 1; star++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void printRightTriangleWithSpace(int n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int star = 1; star <= n - row; star++)
        {
            cout << " ";
        }

        for (int star = 1; star <= row; star++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void printRightTriangle(int n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int star = 1; star <= row; star++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void printSquare(int n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int star = 1; star <= n; star++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int n = 5;
    // printSquare(n);
    // printRightTriangle(n);
    // printReverseRightTriangle(n);
    printRightTriangleWithSpace(n);
}