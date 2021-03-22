#include <bits/stdc++.h>

using namespace std;
int longest_common_substring(string a,string b)
{
    int x=a.length();
    int y=b.length();
    int dp[x+1][y+1]={0};
    for(int i=0;i<x+1;i++)
        dp[0][i]=0;
    for(int i=0;i<y+1;i++)
        dp[i][0]=0;
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            if (a[i]==b[j])
                dp[i+1][j+1]=dp[i][j]+1;
            else
                dp[i+1][j+1]=0;
        }
    }
    for(int i=0;i<x+1;i++)
    {
        for(int j=0;j<y+1;j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}

int main()
{
   string a;
   string b;
   cin>>a>>b;
   longest_common_substring(a,b);
}
