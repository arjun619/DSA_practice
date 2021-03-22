#include <iostream>
#include<stack>
using namespace std;

int main()
{
    int t;
    stack<int>mys;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,j;
        cin>>n;
        int *arr,*dp;
        arr=new int[n];
        dp=new int[n];
        for(int j=0;j<n;j++)
            cin>>arr[j];
        mys.push(arr[0]);
        dp[0]=1;
        for(j=1;j<n;j++)
        {
           if (mys.top()<=arr[j])
           {
               mys.push(arr[j]);
           }
           else
           {
               while(!mys.empty())
                mys.pop();
               mys.push(arr[j]);
           }
           dp[j]=dp[j-1]+mys.size();
        }
        int maxs=-1,k;
        cout<<dp[n-1];

    }
}
