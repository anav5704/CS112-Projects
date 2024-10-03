#include <iostream>
using namespace std;

int binarySearch(int array[], int start, int end, int query)
{
    if (start > end)
    {
        return -1;
    }

    else
    {
        int middle = (start + end) / 2;

        if (query > array[middle])
        {
            return binarySearch(array, middle + 1, end, query);
        }

        else if (query < array[middle])
        {
            return binarySearch(array, start, middle - 1, query);
        }

        else
        {
            return middle;
        }
    }
}

int main()
{
    const int SIZE = 10;

    int array[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int result = binarySearch(array, 0, 9, 5);

    if (result == -1)
    {
        cout << "Element not found" << endl;
    }
    else
    {
        cout << "Element found at index: " << result << endl;
    }

    return 0;
}