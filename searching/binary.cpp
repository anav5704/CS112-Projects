#include <iostream>
using namespace std;

int binarySearch(int array[], int first, int last, int key)
{
    if (first > last)
    {
        return -1;
    }

    else
    {
        int mid = (first + last) / 2;

        if (key > array[mid])
        {
            return binarySearch(array, mid + 1, last, key);
        }

        else if (key < array[mid])
        {
            return binarySearch(array, first, mid - 1, key);
        }

        else
        {
            return mid;
        }
    }
}

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << binarySearch(array, 1, 10, 5);

    return 0;
}