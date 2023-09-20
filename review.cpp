#include <iostream>
using namespace std;
#include "review.h"


int main(){
    Student student1("Alice", 3.5, "Computer Science", "Sophomore");
    Student student2("Bob");

    student1.updateGPA(3.9);
    student2.changeMajor("Business");

    student1.display();
    student2.display();
}