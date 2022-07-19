#include<bits/stdc++.h>
using namespace std;

class Student{
    public:

    int age;
    const int rollNumber;
    int &x; // reference variable for age

    // Here we are using initializer list for allocating data to
    // data members at the time of memory allocation.
    // Student(int r) : rollNumber(r){
    //     //rollNUmber=r;
    // }
    
    // We can also create initializer list for non constant data members also.
    Student(int r,int age) : rollNumber(r),age(age), x(this->age){
        //rollNUmber=r;
    }
};

int main(){
 
//  Student s1(10);
//  s1.age=20;
 Student s2(11,20);
 s2.age=40;
 // s1.rollNumber=10;
    
return 0;
}