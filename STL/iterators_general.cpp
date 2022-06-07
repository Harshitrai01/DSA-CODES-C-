#include<iostream>
#include<vector>
using namespace std;
int main(){
    
    vector<int> v={10,20,30,40,50};

    vector<int>::iterator i=v.begin();
    cout<<(*i)<<" ";
    i++;
    cout<<(*i)<<" ";

    // Now j points to the element beyond the lalst element at the vector.
    vector<int>::iterator j=v.end();
    j--;
    cout<<(*j)<<" ";

}