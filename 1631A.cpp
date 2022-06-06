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
        int a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];    
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]>b[i])
            {
                
            }
            else
            {
                int temp=0;
                temp = a[i];
                a[i]=b[i];
                b[i]=temp;
            }
        }
        int mx1=0,mx2=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]>mx1)
            {
                mx1=a[i];
            }
        }
        for(int i=0;i<n;i++)
        {
            if(b[i]>mx2)
            {
                mx2=b[i];
            }
        }
        int res = mx1*mx2;
        cout<<res<<"\n";
    }
}
