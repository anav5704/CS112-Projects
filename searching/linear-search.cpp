#include <iostream>
using namespace std;

int linearSearch(int array[], int size, int query) {
    for(int i = 0; i < size; i++) {
        if (array[i] == query) {
            return i;
        }
    }

    return -1;
}

int main() {
    const int SIZE = 10;

    int array[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    int result = linearSearch(array, SIZE, 5);

    if(result == -1) {
        cout << "Element not found" << endl;
    }
    else {
        cout << "Element found at index: " << result << endl;
    }

    return 0;
}
