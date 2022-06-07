#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    // traversing techniques of vectors

    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    cout<<endl;

    for(int i:v)
    cout<<i<<" ";
    cout<<endl;

    vector<int>:: iterator itr;
    for(itr=v.begin(); itr!=v.end(); itr++)
    cout<<*itr<<" ";
    cout<<endl;

    for(auto itr2=v.begin(); itr2!=v.end(); itr2++)
    cout<<*itr2<<" ";

    return 0;
}