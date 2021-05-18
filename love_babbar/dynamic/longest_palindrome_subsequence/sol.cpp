#include<bits/stdc++.h>
using namespace std;

int lps(int x,string s1)
{
    int dp[x+1][x+1];
    string s2=s1;
    reverse(s1.begin(),s1.end());
    //cout<<s1;
    for(int i=0;i<x+1;i++)dp[i][0]=0;
    for(int i=0;i<x+1;i++)dp[0][i]=0;
    for(int i=1;i<x+1;i++)
    {
        for(int j=1;j<x+1;j++)
        {
            if (s1[i-1]==s2[j-1])
                dp[i][j]=dp[i-1][j-1]+1;
            else
                dp[i][j]= max(dp[i-1][j],dp[i][j-1]);
        }
    }

    return dp[x][x];
}
int main()
{
    string a1="GEEKSFORGEEKS";
    //string a2="AEDFHR";
    cout<<lps(13,a1);
}

