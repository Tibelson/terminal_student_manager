#include <iostream>


    public:
        std::vector<Student> students;
    
    Student(){}

    Student(int id, const char* name){
        this->id = id;
        this->name = name;
    }

    void add_student(int id, const char* name){
        // Student(id, name);
        students.push_back(Student(id,name));  

    }
    void display_students(){
        for(auto std : students){
            std::cout << "Student ID: " << std.id << " Name: " << std.name<< std::endl;
        }
    }


};

int main(){
    Student s;
    s.add_student(22206565,"Elvis");
    s.display_students();
    
}