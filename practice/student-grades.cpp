#include <iostream>
using namespace std;

char getGrade(int mark)
{
    if (mark < 50)
    {
        return 'D';
    }
    else if (mark < 65)
    {
        return 'C';
    }
    else if (mark < 80)
    {
        return 'B';
    }
    else
    {
        return 'A';
    }
}

void printGrades(string studentIds[], int studentMarks[], int counter)
{
    int failureCounter = 0;

    for (int i = 0; i < counter; i++)
    {
        char studentGrade = getGrade(studentMarks[i]);

        if (studentGrade == 'D')
        {
            failureCounter++;
        }

        cout << "Student Id: " << studentIds[i] << " Mark: " << studentMarks[i] << " Grade : " << studentGrade << endl;
    }

    cout << "Number of students who failed: " << failureCounter << endl;
}

int main()
{
    const char SENTINEL = 'Q';
    char choice;

    const int CAPACITY = 100;
    int counter = 0;

    string studentIds[CAPACITY];
    int studentMarks[CAPACITY];

    cout << "Enter student Id and  their CS112 marks: ";

    while (counter < CAPACITY && choice != SENTINEL)
    {
        cout << "\nId: ";
        cin >> studentIds[counter];

        cout << "Mark: ";
        cin >> studentMarks[counter];

        counter++;

        cout << "\n\nEnter Q to quit or anything else to add another student: ";
        cin >> choice;
    }

    cout << "\n- - - - - - Student Grades - - - - - -\n\n";
    printGrades(studentIds, studentMarks, counter);

    return 0;
}