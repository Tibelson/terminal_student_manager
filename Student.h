#ifndef STUDENT_H
#define STUDENT_H
#include <string>
class Student{
    public:
        int id;
        std::string name;
        double gpa;

    Student(int id, std::string name, double gpa);
};
#endif