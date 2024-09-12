#ifndef PERSON_H
#define PERSON_H

#include "person.h"

class student : public person
{
public:
    student();
    ~student();
    // void set_id(string);
    void set_marks(int);
    void set_grade(char);
    // string get_id();
    int get_marks();
    char get_grade();
    virtual void print();

private:
    // string id;
    int marks;
    char grade;
};

#endif
