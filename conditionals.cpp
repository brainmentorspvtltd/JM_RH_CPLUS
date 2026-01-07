// #include<stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int b = 20;
    int c = 30;
    if (a > b && a > c)
    {
        // printf("A is Greater");
        cout << "A is Greater";
    }
    else if (b > a && b > c)
    {
        // printf("B is Greater");
        cout << "B is Greater" << endl;
    }
    else
    {
        // printf("C is Greater");
        cout << "C is Greater";
    }
}