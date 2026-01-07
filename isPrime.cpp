#include <iostream>
using namespace std;

int main()
{
    int n = 13;
    bool flag = true;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << "The Number is Prime";
    }
    else
    {
        cout << "The Number is Not Prime";
    }
}
