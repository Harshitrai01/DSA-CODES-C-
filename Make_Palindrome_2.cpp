#include<bits/stdc++.h>
using namespace std;

bool palindrome(string &s){
    int i=0;
    int j=s.length()-1;
    while(i<=j){
        if(s[i]==s[j]){
            i++;
            j--;
        }
        else
        return false;
    }
    return true;
}

void solution()
{

    int n;
    cin>>n;
    string s;
    cin>>s;
    if(palindrome(s))
    cout<<s<<endl;
    else{
        int limit=n/2;
        int count=0;
        int i=0;
        int j=s.length()-1;
        while(!palindrome(s) and count<limit and i<j){
            if(s[i]!=s[j]){
                if(s[i]==s[i+1]){
                    s.erase(s.begin()+j);
                    count++;
                }
                else if(s[j]==s[j-1]){
                    s.erase(s.begin()+i);
                    count++;
                }
                else{
                    if(s[i]==s[i-1]){
                        s.erase(s.begin()+j);
                        count++;
                    }
                    
                    else if(s[j]==s[j+1]){
                        s.erase(s.begin()+i);
                        count++;
                    }
                    
                }
                
            }
                i++;
                j--;
        }
        cout<<s<<endl;
    }




}

int main(){

    int t;
    cin>> t;

    while(t--)
    solution();

return 0;
}