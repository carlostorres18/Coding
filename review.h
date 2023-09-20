#include <iostream>
using namespace std;
/*
    The class should have private attributes of name, GPA, major, and year
(“Freshman”, “Sophomore”, “Junior”, “Senior”)
 The class should have a methods, updateGPA(), changeMajor(), to change these
values
 Also include a startNextYear() (no input parameters) method to update the
student’s year when moving from Freshman -> Sophomore, etc. Seniors will stay
Seniors until they graduate
 Write a constructor that to give starting values to each of the attributes (no
console input)
o If no values are provided for GPA, major, or year, they should be set to
4.0, “undecided” and “Freshman”
 Finally, declare two objects from this class for the first
o Use the updateGPA() method of the first object
o Use the changeMajor() method of the second object
o (you don’t need to write main(), just the code for declaration and logic)

*/

class Student{
    private:
        string name;
        float gpa;
        string major;
        string year;

    public:
        void updateGPA(float newGPA){
            gpa = newGPA;

        }
        void changeMajor(string newMajor){
            major = newMajor;

        }
        void startNextYear(){
            if(year == "Freshman"){
                year = "Sophomore";
            }
            else if(year == "Sophomore"){
                year = "Junior";
            }
            else if(year == "Junior"){
                year = "Senior";
            }

        }
        void display(){
            cout<<"Student's information:"<<endl;
            cout<<name<<endl;
            cout<<gpa<<endl;
            cout<<major<<endl;
            cout<<year<<endl;
        }

        Student(string inName= "", float inGPA = 4.0, string inMajor = "undecided", string inYear = "Freshman"){
            name = inName;
            gpa = inGPA;
            major = inMajor;
            year = inYear;
        }

};