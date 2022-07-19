#include<iostream>
#include "Student.cpp"
using namespace std;
int main(){
 
    Student s1;
    
    s1.Name="Harshit Rai";
    s1.RollNumber=28;

    cout<<endl;

    cout<<"Name of s1 : "<<s1.Name<<endl;
    cout<<"Roll s1 :"<<s1.RollNumber<<endl;

    cout<<endl;

    s1.display();
    s1.setAge(6,123);
    s1.getAge();
    s1.setRoll(12);
    s1.display();

}
