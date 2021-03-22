#include <iostream>

using namespace std;
int solve(long long *arr,int n,long long counts)
{
    if (n==0)
        return counts;
    else{
        //cout<<arr[n]<<" "<<arr[n-1];
        if (arr[n]>=arr[n-1])
        {
            counts=counts+solve(arr,n-1,counts+1);
            return counts;
        }
        else
        {
            counts=counts + solve(arr,n-1,1);
            return counts;
        }

    }
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        long long arr[n]={0};
        for(int j=0;j<n;j++)
            cin>>arr[j];
        /*for(int j=0;j<n;j++)
            cout<<arr[j];*/
        long long counts=solve(arr,n-1,1);
        cout<<counts<<"\n";
        counts=0;
    }
}
