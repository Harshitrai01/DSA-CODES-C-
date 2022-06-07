#include<iostream>
#include<utility>
using namespace std;
int main(){
    pair <string, double> PAIR1;
    PAIR1=make_pair("Harshit",88.6);
    cout<<PAIR1.first<<" ";
    cout<<PAIR1.second<<" "<<endl;
    // pair1.swap(pair2) ;
    pair <string, double> PAIR2;
    PAIR2=make_pair("Vivek",99.6);

    PAIR1.swap(PAIR2);
    
    cout<<"After Swapping"<<endl;
    cout<<PAIR1.first<<" ";
    cout<<PAIR1.second<<" ";

    return 0;
}

// make_pair() : This template function allows to create 
//               a value pair without writing the types explicitly.
// Syntax : Pair_name = make_pair (value1,value2);

// operators(=, ==, !=, >=, <=) : We can use operators with pairs as well.
