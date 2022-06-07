#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        int n;
        cin>>n;
        long long a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        long long mx=0;
        for(int i=0;i<n-1;i++)
        {
            long long c = a[i]*a[i+1];
            mx = max(mx,c);
        }
        cout<<mx<<"\n";
    }
}
