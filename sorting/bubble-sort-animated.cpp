#include <thread>
#include <chrono>
#include <iostream>
using namespace std;

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define BLUE "\033[34m"

int main()
{
    const int SIZE = 25;
    int arr[SIZE] = {25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    system("cls");

    for (int i = 0; i < SIZE; i++)
    {
        cout << RED << arr[i] << RESET << " ";
    }

    this_thread::sleep_for(chrono::milliseconds(500));
    system("cls");

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }

        for (int j = 0; j < SIZE; j++)
        {
            if (j < SIZE - i - 1)
            {
                cout << arr[j] << " ";
            }
            else
            {
                cout << BLUE << arr[j] << RESET << " ";
            }
        }

        this_thread::sleep_for(chrono::milliseconds(500));
        system("cls");
    }

    for (int i = 0; i < SIZE; i++)
    {
        cout << GREEN << arr[i] << RESET << " ";
    }

    return 0;
}