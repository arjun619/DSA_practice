#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[8]={6,2,5,1,7,4,8,3};
    int length[8]={1};
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<i;j++)
        {
            if (arr[j]<arr[i])
                length[i]=max(length[i],length[j]+1);
        }
    }
    int maxs=-1;
    for(int i=0;i<8;i++)
    {
        if (maxs<length[i])
            maxs=length[i];
    }
    cout<<maxs;
}
