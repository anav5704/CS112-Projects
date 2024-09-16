#include <iostream>
using namespace std;

int main()
{
    // A dangling pointer is a pointer that holds the address
    // of a memory location which has already been de-allocated

    // Can lead to unexpected behaviour like crashes

    int *ptr = new int(5);

    delete ptr;

    cout << ptr << " " << *ptr << endl;

    ptr = nullptr;
    return 0;
}
