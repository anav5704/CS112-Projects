#include <iostream>
using namespace std;

void bubbleSort(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        bool sorted = true;

        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                sorted = false;
            }
        }

        if (sorted)
        {
            return;
        }
    }
}

int main()
{
    const int SIZE = 10;

    int array[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    bubbleSort(array, SIZE);

    for (int i = 0; i < SIZE; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}
