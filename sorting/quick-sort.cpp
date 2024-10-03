#include <iostream>
using namespace std;

void quickSort(int array[], int start, int end)
{
    if (start >= end)
    {
        return;
    }

    else
    {
        int i = start, j = end, middle = array[(start + end) / 2];

        int pivot = array[middle];

        while (i <= j)
        {
            while (array[i] < pivot)
            {
                i++;
            }

            while (array[j] > pivot)
            {
                j--;
            }

            if (i <= j)
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;

                i++;
                j--;
            }
        }

        quickSort(array, start, j);
        quickSort(array, i, end);
    }
}

int main()
{
    const int SIZE = 10;

    int array[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    quickSort(array, 0, 9);

    for (int i = 0; i < SIZE; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}