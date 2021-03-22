#include <bits/stdc++.h>

using namespace std;
vector < pair<int,int> >vect;
int main()
{
    int n,k,p,temp;
    cin>>n>>k>>p;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        vect.push_back(make_pair(temp,i));
    }
    sort(vect.begin(),vect.end());
    int dp[n]={0};
    dp[vect[0].second]=1;
    for(int i=1;i<n;i++)
    {
        int flag=0;
        if (vect[i].first-vect[i-1].first<=k)
            flag=1;
        cout<<"flag: "<<flag<<"\n";
        cout<<dp[vect[i-1].second];
        if (flag && dp[vect[i-1].second])
            dp[vect[i].second]=1;
        else
            dp[vect[i].second]=0;
    }
    for(int y=0;y<p;y++)
    {
        int temp1,temp2;
        cin>>temp1>>temp2;
        if (dp[temp2-1]==0)cout<<"No";
        else
            cout<<"Yes";
    }
}
