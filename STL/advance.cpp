#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v={10,20,30,40,50};
    auto i=v.begin();
    /*advance(): This function is used to increment the iterator position until 
    the specified number mentioned in its arguments is met. 
    It simply modifies the existing value of the iterator with the given value.
    */
    advance(i,3);
    cout<<*i;
    return 0;
} 
