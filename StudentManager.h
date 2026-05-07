#ifndef STUDENTMANAGER_H
#define STUDENTMANAGER_H
#include "Student.h"
#include <vector>

class StudentManager{
    private:
        std::vector<Student> students;

    void add_student(int id, const char* name);
    void display_student();
};
#endif