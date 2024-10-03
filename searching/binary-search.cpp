#include <iostream>
using namespace std;

int binarySearch(int array[], int start, int end, int query)
{
    while (start <= end)
    {

        int middle = (start + end) / 2;

        if (query > array[middle])
        {
            start = middle + 1;
        }

        else if (query < array[middle])
        {
            end = array[middle] - 1;
        }

        else
        {
            return middle;
        }
    }

    return -1;
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