#include <iostream>
#include "StudentManager.h"


int main(){
    StudentManager sm;
    sm.add_student(22206565,"Elvis",3.60);
    sm.save_to_file("student_logs.txt");
    sm.add_student(22204567,"Sasu",3.65);
    sm.save_to_file("student_logs.txt");

    sm.add_student(23445667,"Jay",3.7);
    sm.save_to_file("student_logs.txt");


    sm.display_student();

    // sm.delete_student(22204567);

    sm.update_name(22204567,"Thomas");
    sm.save_to_file("student_logs.txt");

    sm.display_student();


    
    


    return 0;
    
}