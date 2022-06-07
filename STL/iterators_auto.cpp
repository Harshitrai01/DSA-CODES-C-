#include<iostream>
#include<vector>
using namespace std;
int main(){
    
    vector<int> v={10,20,30,40,50};

    auto i=v.begin();
    cout<<(*i)<<" ";
    i++;
    cout<<(*i)<<" ";

    // Now j points to the element beyond the lalst element at the vector.
    auto j=v.end();
    j--;
    cout<<(*j)<<" ";

}