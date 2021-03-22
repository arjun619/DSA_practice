
#include <bits/stdc++.h>
using namespace std;
int counts=0;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int findGCD(vector<int>arr, int n)
{
    int result = arr[0];
    for (int i = 1; i < n; i++)
    {
        result = gcd(arr[i], result);

        if(result == 1)
        {
           return 1;
        }
    }
    return result;
}
void subsequencer(vector<int>arr,int n,vector<int>temp)
{
    if (n==arr.size())
    {
        int l=temp.size();
        if (l==0)return;
        int a=findGCD(temp,l);
        if (a==1)
            counts++;
    }
    else
    {
        subsequencer(arr,n+1,temp);
        temp.push_back(arr[n]);
        subsequencer(arr,n+1,temp);
    }
}
int main()
{
    int t;

    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
         vector<int>arr;
         vector<int>temp;
        for(int i=0;i<n;i++)
        {
            int k;
            cin>>k;
            arr.push_back(k);
        }
        subsequencer(arr,0,temp);
    cout<<counts<<"\n";
    counts=0;

    }


    return 0;
}
