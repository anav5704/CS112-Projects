#include <iostream>
using namespace std;

int main()
{
    int x = 10;

    // ------- pointer to a constant value (read only location: value at the location cannot be changed)------ //

    const int *ptr = &x;

    // can do
    // ptr = nullptr;

    // can not do
    // *ptr = 0;

    // ----- constant pointer to a value (read only variable: pointer variable prt cannot be changed) ----- //
    int *const ptr = &x;

    // can not do
    // ptr = nullptr;

    // can do
    // *ptr = 0;

    // ----- constant pointer to a constant value ----- //

    const int *const ptr = &x;

    // can not do
    // ptr = nullptr;
    // *ptr = 0;

    cout << *ptr << endl;

    return 0;
}
