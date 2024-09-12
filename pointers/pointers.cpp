#include <iostream>
#include <iomanip>
using namespace std;

void doubleNumber(int *number);

int main()
{
    cout << left;

    // ------- pointers dereferencing ------- //

    int number = 10;
    int *pointerToNumber = &number;

    cout << "Address: " << pointerToNumber << endl;
    cout << "Value: " << *pointerToNumber << endl;

    cout << endl;

    //---------- pointers with array ----------//

    int numbers[5] = {2, 4, 6, 8, 10};

    for (int i = 0; i < 5; i++)
    {
        int *currentPtr = &numbers[i];

        cout << setw(20) << "Current address: " << currentPtr << endl;
        cout << setw(20) << "Current value: " << *currentPtr << endl;

        // store address of next memory block

        int *nextPtr = ++currentPtr;

        cout << setw(20) << "Next address: " << nextPtr << endl;
        cout << setw(20) << "Next value: " << *nextPtr << endl;
    }

    cout << endl;

    //-------- pointers with functions --------//

    doubleNumber(&number);
    cout << "Doubled number: " << number << endl;

    return 0;
}

void doubleNumber(int *number)
{
    *number *= 2;
}
