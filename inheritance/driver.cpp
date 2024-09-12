#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>

using namespace std;

#include "student.h"

const int MAX_SIZE = 10;

char determine_grade(int smarks);
void discard_line(ifstream &in);
void print_students_records(student s_info[], int size);

// lab wk 6
//<<
void fill_personal_infomation(student &s);
void print_details(person *x);
//>>

int main()
{
    student student_info[MAX_SIZE];

    int total_records;
    int choice;
    char response;

    ifstream input;

    cout << "This program determines the grades of students." << endl;

    input.open("students.txt", ios::in);

    if (!input)
    {
        cerr << "File could not be opened" << endl;
        exit(1);
    }

    discard_line(input);

    total_records = 0;

    string temp_id;
    int temp_marks;

    while (input >> temp_id >> temp_marks)
    {
        student_info[total_records].set_id(temp_id);
        student_info[total_records].set_marks(temp_marks);

        total_records++;
    }

    for (int i = 0; i < total_records; i++)
    {
        student_info[i].set_grade(determine_grade(student_info[i].get_marks()));
    }

    input.close();

    print_students_records(student_info, total_records);

    // lab wk 6
    //<<
    cout << "\nFill the personal information of the best student" << endl
         << endl;
    fill_personal_infomation(student_info[2]);
    print_details(&student_info[2]);
    //>>

    system("PAUSE");
    return 0;
}

void print_students_records(student s_info[], int size)
{
    cout << "\n\nstudents' records" << endl
         << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "id: " << s_info[i].get_id()
             << ", marks: " << s_info[i].get_marks()
             << ", grade: " << s_info[i].get_grade() << endl;
    }
}

char determine_grade(int smarks)
{
    char sgrade;

    if (smarks >= 80)
        sgrade = 'A';
    else if (smarks >= 65)
        sgrade = 'B';
    else if (smarks >= 50)
        sgrade = 'C';
    else
        sgrade = 'D';

    return sgrade;
}

void discard_line(ifstream &in)
{
    char c;

    do
        in.get(c);
    while (c != '\n');
}

// lab wk 6
//<<
void fill_personal_infomation(student &s)
{
    string name, address, phone, email, dob, citizenship;

    cout << "Enter name: ";
    cin >> name;
    s.set_name(name);

    cout << "Enter address: ";
    cin >> address;
    s.set_address(address);

    cout << "Enter phone: ";
    cin >> phone;
    s.set_phone(phone);

    cout << "Enter email: ";
    cin >> email;
    s.set_email(email);

    cout << "Enter dob: ";
    cin >> dob;
    s.set_dob(dob);

    cout << "Enter citizenship: ";
    cin >> citizenship;
    s.set_citizenship(citizenship);
}

void print_details(person *x)
{
    x->print();
}
//>>
