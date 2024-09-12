#include <iostream>
using namespace std;

int main()
{
    int *arr = new int[5];
    int *newArr = new int[10];

    // Assign values to first array
    for (int i = 0; i < 5; i++)
    {
        arr[i] = i;
        cout << arr[i] << endl;
    }

    // Transfer first array to second array
    for (int i = 0; i < 5; i++)
    {
        newArr[i] = arr[i];
    }

    // Fill remaining indicies in second array
    for (int i = 5; i < 10; i++)
    {
        newArr[i] = i;
    }

    // Print second array
    for (int i = 0; i < 10; i++)
    {
        cout << *(newArr + i) << endl;
    }

    delete[] arr;
    delete[] newArr;

    return 0;
}
