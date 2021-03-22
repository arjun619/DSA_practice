#include <iostream>

using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    int lena=a.length();
    int lenb=b.length();
    int dp[lenb+1][lena+1]={};
    for(int i=0;i<=lenb;i++)
    {
        for(int j=0;j<=lena;j++)
        {
            if (i==0 || j==0)
                dp[i][j]=0;
            else
            {
                    if (a[i-1]==b[j-1])
                dp[i][j]=dp[i-1][j-1]+1;
            else
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }

        }
    }
    for(int i=0;i<lenb+1;i++)
    {
        for(int j=0;j<lena+1;j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"number of operations required : "<<(lena-dp[lenb][lena])+lenb-dp[lenb][lena];
}
