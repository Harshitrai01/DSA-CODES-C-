#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v={10,20,30,40,50};
    auto i=v.begin();
    /*next(): This function returns the new iterator that the iterator would point 
    after advancing the positions mentioned in its arguments.

    prev(): This function returns the new iterator that the iterator would point 
    after decrementing the positions mentioned in its arguments.
    */
    cout<<*i<<" ";
    cout<<*(i+1)<<" ";
    cout<<*i+1<<" ";

    i=next(i);
    cout<<*i<<" ";
    i=next(i);
    cout<<*i<<" ";

    i=prev(i);
    cout<<*i<<" ";

    i=v.begin();
    i=next(i,3);  // Moves i two positions ahead.
    cout<<*i;
} 