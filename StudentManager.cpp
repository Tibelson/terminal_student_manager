#include "StudentManager.h"
#include <iostream>
#include <fstream>

void StudentManager::add_student(int id, std::string name, double gpa){
    students.emplace_back(id,name,gpa);

}
void StudentManager::display_student(){
    for(const auto& std : students){
        std::cout << "ID: " << std.id << "|| Name: " << std.name << " || gpa: " << std.gpa << std::endl;
    }
}
void StudentManager::delete_student(int id){
   
   for(auto it = std::begin(students); it != std::end(students);){

   if(it->id != id){
    ++it;
   }

   students.erase(it);
   return;
}

}
void StudentManager::update_grade(int id, double new_gpa){
    for(auto it = std::begin(students); it != std::end(students); ++it){
        if(it->id == id){
            it->gpa = new_gpa;
            return;
        }
    }
}

void StudentManager::update_name(int id, std::string new_name){
    for(auto it = std::begin(students); it != std::end(students); ++it){
        if(it->id == id){
        it->name = new_name;
            return;
    }
    }  

}
void StudentManager::save_to_file(const std::string& name_of_file){
    std::ofstream file(name_of_file);

    for(auto std : students){
        file << std.id << "," << std.name << "," << std.gpa << std::endl;
    }

}