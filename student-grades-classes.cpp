#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>

using namespace std;

class Student
{
private:
    string id;
    int marks;
    char grade;

public:
    void setId(string id);
    string getId();

    void setMarks(int marks);
    int getMarks();

    void setGrade(int marks);
    char getGrade();
};

const int MAX_SIZE = 10;

void print_students_records(Student students[], int size);

int main()
{
    Student students[MAX_SIZE];
    int count;
    string id;
    int marks;

    ifstream input;
    cout << "This program determines the grades of students." << endl;

    input.open("students.txt", ios::in);

    if (!input)
    {
        cerr << "File could not be opened" << endl;
        exit(1);
    }

    string headerOmit;
    getline(input, headerOmit);

    count = 0;

    while (input >> id >> marks)
    {
        students[count].setId(id);
        students[count].setMarks(marks);
        students[count].setGrade(marks);
        count++;
    }

    input.close();

    print_students_records(students, count);

    return 0;
}

void Student::setId(string id)
{
    this->id = id;
}

string Student::getId()
{
    return id;
}

void Student::setMarks(int marks)
{
    this->marks = marks;
}

int Student::getMarks()
{
    return marks;
}

void Student::setGrade(int marks)
{
    if (marks >= 80)
        grade = 'A';
    else if (marks >= 65)
        grade = 'B';
    else if (marks >= 50)
        grade = 'C';
    else
        grade = 'D';
}

char Student::getGrade()
{
    return grade;
}

void print_students_records(Student students[], int size)
{
    cout << "\n\nstudents' records" << endl
         << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "id: " << students[i].getId() << ", marks: " << students[i].getMarks() << ", grade: " << students[i].getGrade() << endl;
    }
    cout << endl;
}
