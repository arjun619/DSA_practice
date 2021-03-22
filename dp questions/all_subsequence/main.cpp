#include <iostream>
#include <vector>
using namespace std;
void printer(vector<int>arr,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    return;
}
void findsubsequence(vector<int>arr,int n,vector<int>subarr)
{
    if (n==arr.size())
    {
        int l=subarr.size();

        if (l==0)
            return;
        printer(subarr,l);
    }
    else
    {
        findsubsequence(arr,n+1,subarr);
        subarr.push_back(arr[n]);
        findsubsequence(arr,n+1,subarr);
    }
    return;
}

int main()
{
    vector<int>v{1,2,3,4};
    vector<int>subs;
    findsubsequence(v,0,subs);
    return 0;
}
