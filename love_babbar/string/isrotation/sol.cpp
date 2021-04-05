#include <bits/stdc++.h>

using namespace std;
int isrotation(string s1,string s2)
{
    int myindx=-1;
    if (s1.length()!=s2.length())
    {
        cout<<".";
        return 0;
    }

    else
    {
        queue<char>q;
        for(int i=0;i<s1.length();i++)
        {
            q.emplace(s1[i]);
        }
        //cout<<q.front();
        for(int i=0;i<s2.length();i++)
        {
            if (s2[i]==q.front())
            {

                myindx=i;
                q.pop();
                break;
            }
        }
        //cout<<myindx;
        int counts=0;
        int flag=0;
        while (counts<s1.length()-1)
        {
            myindx=(myindx+1)%s1.length();
            //cout<<myindx<<" ";
            if (s2[myindx]!=q.front())
            {

                flag=1;
                break;
            }
            else
            {
                q.pop();
            }
            counts++;
        }
        if (flag==1)
            return 0;
        else
            return 1;

    }


}
int main()
{
    string a="ABCD";
    string b="BACD";
    cout<<isrotation(a,b);
}

