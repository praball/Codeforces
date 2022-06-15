#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int o=0;o<t;o++)
    {
        int n,m;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cin>>m;
        int b[m];
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
        }
        int mx1=0, mx2=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]>mx1)
            {
                mx1=a[i];
            }
        }
        for(int i=0;i<m;i++)
        {
            if(b[i]>mx2)
            {
                mx2=b[i];
            }
        }
        int r=max(mx1,mx2);
        if(r==mx1 && r!=mx2)
        {
            cout<<"Alice\n"<<"Alice\n";
        }
        else if(r==mx2 && r!=mx1)
        {
            cout<<"Bob\n"<<"Bob\n";
        }
        else
        {
            cout<<"Alice\n"<<"Bob\n";   
        }
    }
}
/*
1
12 50
2
25 50
*/
