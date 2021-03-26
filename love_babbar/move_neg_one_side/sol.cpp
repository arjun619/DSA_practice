#include <bits/stdc++.h>

using namespace std;

void divider(vector<int>arr){
    int i=0,j=arr.size()-1;
    //cout<<i<< " "<<j;
    while(i < j)
    {
        if (arr[i]>0 && arr[j]<0)
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        else if (arr[i]>0 && arr[j]>0)
        {
            j-=1;
        }
        else if (arr[i]<0 && arr[j]<0)
        {
            i+=1;
        }
        else
        {
            i+=1;
            j-=1;
        }
    }
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    vector<int>arr{-12,11,-13,-5,6,-7,5,-3,-6};
    divider(arr);

    return 0;


}

