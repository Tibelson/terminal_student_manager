#ifndef STUDENTMANAGER_H
#define STUDENTMANAGER_H
#include "Student.h"
#include <vector>
#include <fstream>
#include <sstream>

class StudentManager{
    private:
        std::vector<Student> students;
    public:
        void add_student(int id, std::string name, double gpa);
        void delete_student(int id);
        void display_student();
        void update_grade(int id, double new_gpa);
        void update_name(int id, std::string new_name);
        void save_to_file(const std::string& name_of_file);
        void load_student(std::string& name_of_file);
};
inline void StudentManager::load_student(std::string& name_of_file){
    std::ifstream file(name_of_file);
    std::string line;

    while(std::getline(file, line)){
        std::stringstream ss(line);

        int id;
        std::string name;
        double gpa;

    }

}
#endif