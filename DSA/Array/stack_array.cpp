#include<iostream>
using namespace std;

struct my_stack{

    int cap;
    int top;
    int *arr;

    my_stack(int c){
        cap=c;
        top=-1;
        arr= new int [cap];
    }

    void push(int x){
        if(top==cap-1) { cout<<-1;}
        top++;
        arr[top]=x;
    
    }

    int pop(){
        if(top==-1) {return -1;}
        int res=arr[top];
        top--;
        return res;
    }

    int peek(){
        return arr[top];
    }

    int size(){
        return top+1;
    }

    bool isEmpty(){
        return (top==-1);
    }

};

int main(){
    my_stack s(5);
    s.push(5);
    s.push(6);
    s.push(7);
    cout<<s.pop()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.size()<<endl;
    cout<<s.isEmpty();


}