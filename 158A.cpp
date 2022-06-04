#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    int count = 0, a[n];
    for(int j=1;j<=n;j++)
    {
        cin>>a[j];
    }
    for(int i=1;i<=n;i++)
    {
        if(a[i]>=a[k] && a[i]>0)
        {
            count++;
        }
    }
    cout<<count;
}
