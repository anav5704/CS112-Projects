#include <iostream>
using namespace std;

// Function that returns a pointer to an array
int *createAndFillArray(int size)
{
    int *array = new int[size];

    for (int i = 1; i <= size; i++)
    {
        array[i] = i;
    }

    return array;
}

// Recursive function to print an array using a  pointer to it
void recursivelyPrintArray(int *array, int size)
{
    if (size == 0)
    {
        return;
    }

    recursivelyPrintArray(array, size - 1);
    cout << *(array + size) << " ";
}

// Wrapper function that takes an function pointer as a parameter
void wrapperFunction(void (*printArrayPtr)(int *, int), int *array, int size)
{
    cout << "\nRecursion start\n";

    printArrayPtr(array, 10);

    cout << "\nRecursion end\n";
}

int main()
{
    int *array = createAndFillArray(10);

    // Pointer to the recursivelyPrintArray function. Follows: return_type (* ptr_func_name) (param_type_1, ...)
    void (*printArrayPtr)(int *, int);

    // Referencing the pointer to the array
    printArrayPtr = &recursivelyPrintArray;

    wrapperFunction(printArrayPtr, array, 10); // or  wrapperFunction(&recursivelyPrintArray, array, 10);

    delete[] array;

    return 0;
}