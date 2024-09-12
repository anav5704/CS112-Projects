#include <iostream>
using namespace std;

void printArr(int *ptr, int size)
{
    cout << "\nAll elements of the array: " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << *(ptr + i) << endl;
        cout << ptr[i] << endl;
    }
}

int main()
{
    const int SIZE = 5;

    int arr[SIZE] = {1, 3, 5, 7, 9};
    int *ptr = arr;

    cout << "Memory address of the array:" << endl;
    cout << arr << endl;
    cout << &arr[0] << endl;
    cout << ptr << endl;

    cout << "\nFirst element of the array:" << endl;
    cout << arr[0] << endl;
    cout << ptr[0] << endl;
    cout << *ptr << endl;

    cout << "\nSecond element in the array" << endl;
    // ptr[i] == *(ptr + i)
    cout << arr[1] << endl;
    cout << *(ptr + 1) << endl;

    printArr(ptr, SIZE);

    return 0;
}
