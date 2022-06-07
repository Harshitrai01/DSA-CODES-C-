#include<iostream>
#include<utility>
using namespace std;
int main(){

    //pair (data_type1, data_type2) Pair_name (value1, value2) ;

    pair <int,char> PAIR1 ;
    PAIR1.first=100;
    PAIR1.second='G';

    cout<<PAIR1.first<<" ";
    cout<<PAIR1.second<<endl;

    pair <string,double> PAIR2("GFG",1.23) ;
    cout<<PAIR2.first<<" ";
    cout<<PAIR2.second;
    return 0;
}

/* Different ways to initialize pair:
pair  g1;         //default
pair  g2(1, 'a');  //initialized,  different data type
pair  g3(1, 10);   //initialized,  same data type
pair  g4(g3);    //copy of g3
Another way to initialize a pair is by using the make_pair() function.
g2 = make_pair(1, 'a');
*/