#include<iostream>
using namespace std;

int main() {
    int matrix[2][2] = {
        {1, 2},
        {3, 4}
    };

    int (*ptr)[2] = matrix;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << ptr[i][j] << " ";  
        }

        cout << endl;
    }

    return 0;
}
