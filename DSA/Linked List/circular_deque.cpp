#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of queue ";
    cin>>n;
    int a[n];
    int f1,r1=-1;
    int f2,r2=n;
    int i=0;
    int j=n-1;
    

    while(r2!=r1+1)
    {
        
        int choice;
        cout<<"Enter your choice ";
        cin>>choice;
        if(choice==1)
        {
            cin>>a[i];
            i++;
            r1++;
        }

        else if(choice==2)
        {   
            cin>>a[i];
            j--;
            r2--;
        }
    }

    




    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";

    return 0;
}