#include<iostream>
using namespace std;
#include "Student.cpp"

int main(){
    cout<<endl;
    Student s1;

    Student s2(10);
    cout<<"Roll Number of s2 : "<<s2.RollNumber<<endl;

    Student s3(21,15);
    s3.getAge();
    cout<<"Roll Number of s3 : "<<s3.RollNumber<<endl;

    Student s4(s3);
    cout<<"Copy Constructor for s4 is Called"<<endl;
    cout<<"Roll Number of s4 : "<<s4.RollNumber<<endl;
    s4.getAge();

    Student s5=s4;
    cout<<"Copy Assignment Operator is called"<<endl;
    s5.getAge();

}