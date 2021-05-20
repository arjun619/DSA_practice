#include<bits/stdc++.h>
using namespace std;

int assembly(int a[][4],int t[][4],int *e,int *x)
{
    int c1,c2;
    int t1[4],t2[4];
    t1[0]=a[0][0]+e[0];
    t2[0]=a[1][0]+e[1];
    for(int i=1;i<4;i++)
    {
        t1[i]= min(t1[i-1]+a[0][i],t2[i-1]+a[0][i]+t[1][i]);
        t2[i]= min(t2[i-1]+a[1][i],t1[i-1]+a[1][i]+t[0][i]);
    }
    /*for(int i=0;i<4;i++)cout<<t1[i]<<" ";
    cout<<"\n";
    for(int i=0;i<4;i++)cout<<t2[i]<<" ";*/
    return min(t1[3]+x[0],t2[3]+x[1]);
}
int main()
{
    int a[][4] = { { 4, 5, 3, 2 },
                   { 2, 10, 1, 4 } };
    int t[][4] = { { 0, 7, 4, 5 },
                   { 0, 9, 2, 8 } };
    int e[] = { 10, 12 }, x[] = { 18, 7 };
    cout<<assembly(a,t,e,x);
    return 0;
}

