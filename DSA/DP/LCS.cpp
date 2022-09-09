#include<bits/stdc++.h>
using namespace std;

string lcs(string s1, string s2, int m, int n){
    int dp[m+1][n+1];
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            if(i==0 or j==0){
                dp[i][j]=0;
            }
            else if(s1[i-1]==s2[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }
            else{
                dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
            }
        }
    }

    int i=m,j=n;
    string res="";
    while(i>0 and j>0){
        if(s1[i-1]==s2[j-1]){
            res.push_back(s1[i-1]);
            i--; j--;
        }
        else{
            if(dp[i-1][j]>dp[i][j-1]){
                i--;
            }
            else{
                j--;
            }
        }
    }
    reverse(res.begin(),res.end());
    return res;
}

int main(){

    string s1="acbcf";
    string s2="abcdaf";

    cout<<lcs(s1,s2,s1.size(),s2.size())<<endl;

return 0;
}