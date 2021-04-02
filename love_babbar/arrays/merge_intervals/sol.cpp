#include <bits/stdc++.h>

using namespace std;

int* caller(vector<pair<int,int>>ques)
{
    int *arr= new int[10000]{0};
    for(int i=0;i<ques.size();i++)
    {
        for(int j=ques[i].first;j<=ques[i].second;j++)
        {
            arr[j]+=1;
        }
    }
    return arr;
}
void merger(int *arr,int n)
{
    int temp[n]={0};
    vector< pair <int,int> >ans;
    pair<int, int>mypair;
    int flag=0,start=0,ends=0;
    for(int i=0;i<n;i++)
    {
        if (arr[i]!=0 && flag==0)
        {
            start=i;
            flag=1;
        }
        else if (arr[i]!=0 && flag==1 )
        {
            continue;
        }
        else if (arr[i]==0 && flag==1)
        {
            ends=i;
            mypair.first=start;
            mypair.second=ends;
            ans.push_back(mypair);
            flag=0;
        }

    }
    for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i].first<<" "<<ans[i].second-1<<"\n";
        }
}
int main()
{
    //int arr[20]={0,1,2,2,1,1,1,0,1,1,1,0,0,0,0,1,1,1,1,0};
    vector<pair<int,int>>ques={{1,3},{2,6},{8,10},{15,18}};
    int* arr=caller(ques);
    for(int i=0;i<4;i++)
    cout<<arr[i]<<" ";
    merger(arr,20);

}

