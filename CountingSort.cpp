#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x[n+1],a[n];
    int m[1001] = {0}; //1000 be the maximum number
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        m[a[i]]++;
    }                                   //otherWay is to just print
    for(int i=1;i<=1000;i++)
        m[i] += m[i-1];
    for(int i=0;i<n;i++)
    {
        x[m[a[i]] - 1] = a[i];
        m[a[i]]--;                  //sets the upper bound
    }
    for(int i=0;i<n;i++)
    {
        a[i] = x[i];
        cout<<a[i]<<" ";
    }
    return 0;
}
