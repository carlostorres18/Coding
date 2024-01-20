#include <iostream>
#include <vector>
using namespace std;

class Student;
class Course;

class Course{
    private:
        string courseName;
        // string subject;
        vector<int> section;
    
    public:
        string subject;

        Course(string inCourseName = "", string inSubject = ""){
            courseName = inCourseName;
            subject = inSubject;
        }

        void addToSection(int SID){
            section.push_back(SID);
        }

        void showStudents(){
            for(int i = 0; i < section.size(); i++){
                cout<<section.at(i)<<endl;
            }
        }

        void display(){
            cout<<courseName<<endl;
            showStudents();
        }

};

class Student{
    private:
        int idNumber;
        string name;
        string major;

    public: 
        void display(){
            cout<<"Student's Information:"<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"ID Number: "<<idNumber<<endl;
            cout<<"Major: "<<major<<endl;
        }

        Student(int inIDNumber = 0, string inName = "", string inMajor = "Undecided"){
            idNumber = inIDNumber;
            name = inName;
            major = inMajor;
        }
        void registerForSubject(Course x){
            if(major == x.subject){
                x.addToSection(idNumber);
            }
        }

        void getID(){
            cout<<idNumber<<endl;
        }
};

class Manager{
    private:
        vector<Course> catalog;
        vector<Student> students;

    public:
        void addCourse(Course x){
            catalog.push_back(x);
            for(int i = 0; i < catalog.size(); i++){
                catalog[i].display();
            }
        }
        
        void enrollStudent(Student y){
            students.push_back(y);
            for(int i = 0; i < students.size(); i++){
                students[i].display();
            }
        }

};

