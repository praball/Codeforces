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
        long long min = 999999999999;
        for(int i=0;i<n;i++)
        {
            if(min>a[i])
            {
                min = a[i];
            }
        }
        int count = 0, res = 0;
        for(int i=0;i<n;i++)
        {
            count = a[i]-min;
            //cout<<count<<" ";
            res = res+count;
        }
        cout<<res<<"\n";
    }
}
