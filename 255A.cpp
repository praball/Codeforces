#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, c1 = 0, c2 = 0, c3 = 0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i=i+3)
    {
        c1 = c1 + a[i];
    }
    for(int i=1;i<n;i=i+3)
    {
        c2 = c2 + a[i];
    }
    for(int i=2;i<n;i=i+3)
    {
        c3 = c3 + a[i];
    }
    int mx = max(c1, max(c2,c3));
    //cout<<mx<<"\n";
    if(mx == c1)
    {
        cout<<"chest\n";
    }
    else if(mx == c2)
    {
        cout<<"biceps\n";
    }
    else
    {
        cout<<"back\n";
    }
}
