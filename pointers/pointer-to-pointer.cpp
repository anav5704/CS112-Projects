#include <iostream>
using namespace std;

void changePtrValue(int **xPtrPtr)
{
    **xPtrPtr = 5;
}

int main()
{
    int x = 10;
    int *xPtr = &x;
    int **xPtrPtr = &xPtr;

    changePtrValue(xPtrPtr);

    cout << "x: " << x << " xPtr: " << *xPtr << " xPtrPtr: " << **xPtrPtr << endl;

    return 0;
}