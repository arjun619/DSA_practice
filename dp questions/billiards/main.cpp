#include <bits/stdc++.h>
int mod=1e9+9;
using namespace std;
vector<int>arr(1000001,-1);



long long solve(int n)
{
    if (n<0)
        return 0;
    else if (n==0)
        return 1;
    else
    {
        if (arr[n]!=-1)
        {
            cout<<arr[n]<<" \n";
            return arr[n];
        }
        else
        {
            long long counts=solve(n-2)+solve(n-3);
            arr[n]=counts;
            return counts;
        }
    }
}
int main()
{
    int t;
    cin>>t;

    //cout<<arr[1000000];
    //for(int i=100000;i<1000001-100;i--)cout<<arr[i]<<"\n";
    arr[0]=0,arr[1]=0,arr[2]=1,arr[3]=1;
    for(int j=4;j<=1000000;j++)
        {
            arr[j]=(arr[j-2]+arr[j-3])%mod;
        }
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        cout<<arr[n]<<"\n";
    }
}
