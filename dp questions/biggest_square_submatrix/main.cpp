#include <bits/stdc++.h>

using namespace std;
void finder(int arr[][4], int dp[][4])
{
    int maxs=-1;
    for(int i=0;i<3;i++)
        dp[i][0]=arr[i][0];
    for(int i=0;i<4;i++)
        dp[0][i]=arr[0][i];
    for(int i=1;i<3;i++)
    {
        for(int j=1;j<4;j++)
        {
            if (arr[i][j]==1)
            {
                int k=min(min(dp[i-1][j-1],dp[i][j-1]),dp[i-1][j]);
            dp[i][j]=k+1;
            if (maxs<dp[i][j])
                maxs=dp[i][j];

            }
        }
    }
    cout<<maxs;
}
int main()
{
    int arr[3][4]={{1,1,1,0},{1,1,1,1},{1,1,0,0}};
    int dp[3][4];
    finder(arr,dp);
}
