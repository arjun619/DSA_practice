#include <bits/stdc++.h>
using namespace std;
string reverser(string a,int n)
{
    if (n==0)
    {
        string temp="";
        temp+=a[0];
        return temp;
    }
    else
    {
        return a[n]+ reverser(a,n-1);
    }
}
int main()
{
    string val;
    getline(cin,val);
    cout<<reverser(val,val.length()-1);
}
