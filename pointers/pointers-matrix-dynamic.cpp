#include <iostream>
using namespace std;

int **createMatrix(int rows, int cols)
{
    int **array = new int *[rows];

    for (int i = 0; i < rows; i++)
    {
        array[i] = new int[cols];
    }

    return array;
}

void fillMatrix(int **matrix, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            matrix[i][j] = i;
        }
    }
}

int **resizeMatrix(int **matrix, int rows, int cols, int resizeRows, int resizeCols)
{
    int **resizedMatrix = createMatrix(resizeRows, resizeCols);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            resizedMatrix[i][j] = matrix[i][j];
        }
    }

    for (int i = rows; i < resizeRows; i++)
    {
        for (int j = 0; j < resizeCols; j++)
        {
            resizedMatrix[i][j] = i;
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = cols; j < resizeCols; j++)
        {
            resizedMatrix[i][j] = i;
        }
    }

    return resizedMatrix;
}

void printMatrix(int **matrix, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << " ";
        }

        cout << endl;
    }
}

void deallocateMatrix(int **matrix, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        delete[] matrix[i];
    }

    delete[] matrix;
}

int main()
{
    int rows = 5, resizeRows = 10, cols = 5, resizeCols = 10;

    int **matrix = createMatrix(rows, cols);

    fillMatrix(matrix, rows, cols);

    cout << "\nInitial matrix:\n";
    printMatrix(matrix, rows, cols);

    int **resizedMatrix = resizeMatrix(matrix, rows, cols, resizeRows, resizeCols);

    cout << "\nResized matrix:\n";
    printMatrix(resizedMatrix, resizeRows, resizeCols);

    deallocateMatrix(matrix, rows, cols);

    deallocateMatrix(resizedMatrix, resizeRows, resizeCols);

    return 0;
}