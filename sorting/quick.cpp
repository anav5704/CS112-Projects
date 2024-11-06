#include <iostream>
using namespace std;

void quickSort(int array[], int start, int end)
{
    if (start < end)
    {
        int i = start, j = end, middle = (start + end) / 2, pivot = array[middle];

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
    int array[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    quickSort(array, 0, 9);

    for (int i = 0; i < 10; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}