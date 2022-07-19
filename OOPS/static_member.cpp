#include<iostream>
using namespace std;

// Static Data Members and Static Functions

class Student {
    public:

    int rollNumber;
    int age;

    static int totalStudents;  // total number of students

    Student(){
        // Increments the value by one whenever a new object is created;
        totalStudents++;
    }

    // Creating a static function
    static int getTotalStudents(){
        return totalStudents;
    }

};

int Student :: totalStudents=0; // Initialization of static data member
                                // is always done outside the class.

int main(){

    Student s1;
    s1.age=20;
    s1.rollNumber=101;
    cout<<s1.rollNumber<<" "<<s1.age<<endl;

    cout<<Student::totalStudents<<endl;

    s1.totalStudents=25;
    cout<<s1.totalStudents<<endl;
    cout<<Student::totalStudents<<endl;

    Student s2;
    cout<<s2.totalStudents<<endl;
    cout<<Student::totalStudents<<endl;

    Student s3,s4,s5,s6,s7;
    cout<<Student::totalStudents<<endl;

    // Calling a static functions.
    cout<<Student::getTotalStudents();

return 0;
}