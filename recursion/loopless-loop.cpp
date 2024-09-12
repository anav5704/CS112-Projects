#include <iostream>
using namespace std;

void oneToN(int n)
{
    if (n == 0)
    {
        return;
    }

    // This works because of how functions are added to the call stack

    oneToN(n - 1);
    cout << n << " ";
}

void nToOne(int n)
{
    if (n == 0)
    {
        return;
    }

    cout << n << " ";
    nToOne(n - 1);
}

int main()
{
    oneToN(100);
    nToOne(100);

    return 0;
}